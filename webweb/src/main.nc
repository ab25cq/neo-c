#include <neo-c-net.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <ctype.h>
#include <errno.h>
#include <time.h>
#include <zlib.h>
#include <dirent.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>

extern char** environ;
extern ssize_t sendfile(int out_fd, int in_fd, off_t* offset, size_t count);

static SSL* gSSL = NULL;
static bool gKeepAlive = false;
static bool gCloseConnection = false;
static bool gAcceptGzip = false;
static bool gHeadRequest = false;
static bool gIsHttps = false;
static int gHttpPort = 8080;
static int gHttpsPort = 443;
static const char* gDocumentRoot = ".";
static const char* gServerName = "webweb/1.1";
static bool gAutoIndex = false;
static const char* gAccessLogPath = NULL;
static const char* gErrorLogPath = NULL;
static const char* gConfigPath = "webweb.conf";
static const char* gActiveDocumentRoot = ".";
static char gRemoteAddr[INET6_ADDRSTRLEN] = "-";
static int gRemotePort = 0;
static int gCgiTimeoutSeconds = 10;
static int gCgiOutputLimit = 1024 * 1024;
static const char* gStaticCacheControl = NULL;
static long gResponseBodyBytes = 0;
static const char* gCurrentHttpVersion = "-";
static const char* gCurrentReferer = "-";
static const char* gCurrentUserAgent = "-";
static const char* gErrorPage400 = NULL;
static const char* gErrorPage403 = NULL;
static const char* gErrorPage404 = NULL;
static const char* gErrorPage405 = NULL;
static const char* gErrorPage408 = NULL;
static const char* gErrorPage413 = NULL;
static const char* gErrorPage414 = NULL;
static const char* gErrorPage416 = NULL;
static const char* gErrorPage431 = NULL;
static const char* gErrorPage500 = NULL;
static const char* gErrorPage502 = NULL;
static const char* gErrorPage504 = NULL;
static const char* gErrorPage505 = NULL;

const int MAX_REQUEST_BYTES = 1024 * 1024;
const int MAX_HEADER_BYTES = 16 * 1024;
const int MAX_URI_BYTES = 8 * 1024;
const int MAX_CGI_STDERR_LOG_BYTES = 64 * 1024;

string create_range_string(char* head, int len);

void handle_sigint(int sig) {
    printf("Caught signal %d, closing socket...\n", sig);
    if(gSSL) {
        int fd = SSL_get_fd(gSSL);
        SSL_shutdown(gSSL);
        SSL_free(gSSL);

        if (fd >= 0) {
            close(fd);
        }
    }
    exit(0);
}


string parse_html(string file_contents)
{
    var contents = new buffer();
    
    char* p = borrow file_contents;
    
    contents.append_str(p);
    
    return contents.to_string();
}

bool is_text_like_content_type(const char* content_type)
{
    return strncmp(content_type, "text/", 5) == 0
        || strcmp(content_type, "application/javascript; charset=UTF-8") == 0
        || strcmp(content_type, "application/manifest+json; charset=UTF-8") == 0
        || strcmp(content_type, "application/json; charset=UTF-8") == 0
        || strcmp(content_type, "application/ld+json; charset=UTF-8") == 0
        || strcmp(content_type, "application/xml; charset=UTF-8") == 0
        || strcmp(content_type, "application/yaml; charset=UTF-8") == 0
        || strcmp(content_type, "application/rss+xml; charset=UTF-8") == 0
        || strcmp(content_type, "application/atom+xml; charset=UTF-8") == 0
        || strcmp(content_type, "image/svg+xml; charset=UTF-8") == 0;
}

bool append_capped_buffer(buffer* output, char* data, int size, int limit)
{
    if(limit <= 0 || output.length() + size <= limit) {
        output.append(data, size);
        return false;
    }

    int remaining = limit - output.length();
    if(remaining > 0) {
        output.append(data, remaining);
    }
    output.append_str("\n[webweb: CGI stderr truncated]\n");
    return true;
}

tuple3<string, string, int>*% xpopen(char** argv, string input)
{
    var output = new buffer();
    var error_output = new buffer();
    bool stderr_truncated = false;
    
    int pipe_in[2], pipe_out[2], pipe_err[2];
    pid_t pid;

    if (pipe(pipe_in) == -1 || pipe(pipe_out) == -1 || pipe(pipe_err) == -1) {
        perror("pipe failed");
        return t((string)null, (string)null, 1);
    }

    void (*old_sigchld)(int) = signal(SIGCHLD, SIG_DFL);
    pid = fork();

    if (pid == -1) {
        perror("fork failed");
        if(old_sigchld != SIG_ERR) {
            signal(SIGCHLD, old_sigchld);
        }
        close(pipe_in[0]);
        close(pipe_in[1]);
        close(pipe_out[0]);
        close(pipe_out[1]);
        close(pipe_err[0]);
        close(pipe_err[1]);
        return t((string)null, (string)null, 1);
    }

    if (pid == 0) {
        signal(SIGCHLD, SIG_DFL);
        signal(SIGPIPE, SIG_DFL);

        close(pipe_in[1]);
        close(pipe_out[0]);
        close(pipe_err[0]);

        dup2(pipe_in[0], STDIN_FILENO);
        dup2(pipe_out[1], STDOUT_FILENO);
        dup2(pipe_err[1], STDERR_FILENO);

        close(pipe_in[0]);
        close(pipe_out[1]);
        close(pipe_err[1]);

        execvp(argv[0], argv);

        perror("exec failed");
        exit(1);
    } 
    else {
        close(pipe_in[0]);
        close(pipe_out[1]);
        close(pipe_err[1]);

        int in_flags = fcntl(pipe_in[1], F_GETFL, 0);
        if(in_flags >= 0) {
            fcntl(pipe_in[1], F_SETFL, in_flags | O_NONBLOCK);
        }

        int out_flags = fcntl(pipe_out[0], F_GETFL, 0);
        if(out_flags >= 0) {
            fcntl(pipe_out[0], F_SETFL, out_flags | O_NONBLOCK);
        }

        int err_flags = fcntl(pipe_err[0], F_GETFL, 0);
        if(err_flags >= 0) {
            fcntl(pipe_err[0], F_SETFL, err_flags | O_NONBLOCK);
        }

        char* input_data = borrow input;
        int input_len = strlen(input);
        int input_written = 0;
        bool stdin_closed = false;
        bool stdout_closed = false;
        bool stderr_closed = false;
        bool child_done = false;
        int status = 0;
        time_t started_at = time(NULL);

        while(true) {
            if(gCgiTimeoutSeconds > 0 && time(NULL) - started_at >= gCgiTimeoutSeconds) {
                kill(pid, SIGKILL);
                waitpid(pid, &status, 0);
                if(!stdin_closed) {
                    close(pipe_in[1]);
                }
                if(!stdout_closed) {
                    close(pipe_out[0]);
                }
                if(!stderr_closed) {
                    close(pipe_err[0]);
                }
                if(old_sigchld != SIG_ERR) {
                    signal(SIGCHLD, old_sigchld);
                }
                return t(output.to_string(), error_output.to_string(), 2);
            }

            if(!stdin_closed) {
                if(input_written >= input_len) {
                    close(pipe_in[1]);
                    stdin_closed = true;
                }
                else {
                    int written = write(pipe_in[1], input_data + input_written, input_len - input_written);
                    if(written > 0) {
                        input_written += written;
                    }
                    else if(written < 0 && errno != EAGAIN && errno != EWOULDBLOCK) {
                        close(pipe_in[1]);
                        stdin_closed = true;
                    }
                }
            }

            char buf[BUFSIZ];
            while(!stdout_closed) {
                int size = read(pipe_out[0], buf, BUFSIZ);
                if(size > 0) {
                    output.append(buf, size);
                    if(gCgiOutputLimit > 0 && output.length() > gCgiOutputLimit) {
                        kill(pid, SIGKILL);
                        waitpid(pid, &status, 0);
                        if(!stdin_closed) {
                            close(pipe_in[1]);
                        }
                        close(pipe_out[0]);
                        if(!stderr_closed) {
                            close(pipe_err[0]);
                        }
                        if(old_sigchld != SIG_ERR) {
                            signal(SIGCHLD, old_sigchld);
                        }
                        return t(output.to_string(), error_output.to_string(), 3);
                    }
                }
                else if(size == 0) {
                    close(pipe_out[0]);
                    stdout_closed = true;
                }
                else {
                    if(errno == EAGAIN || errno == EWOULDBLOCK) {
                        break;
                    }

                    perror("read failed");
                    if(!stdin_closed) {
                        close(pipe_in[1]);
                    }
                    close(pipe_out[0]);
                    if(!stderr_closed) {
                        close(pipe_err[0]);
                    }
                    if(old_sigchld != SIG_ERR) {
                        signal(SIGCHLD, old_sigchld);
                    }
                    return t((string)null, error_output.to_string(), 1);
                }
            }

            while(!stderr_closed) {
                char errbuf[BUFSIZ];
                int size = read(pipe_err[0], errbuf, BUFSIZ);
                if(size > 0) {
                    if(!stderr_truncated) {
                        stderr_truncated = append_capped_buffer(error_output, errbuf, size, MAX_CGI_STDERR_LOG_BYTES);
                    }
                }
                else if(size == 0) {
                    close(pipe_err[0]);
                    stderr_closed = true;
                }
                else {
                    if(errno == EAGAIN || errno == EWOULDBLOCK) {
                        break;
                    }

                    if(!stdin_closed) {
                        close(pipe_in[1]);
                    }
                    if(!stdout_closed) {
                        close(pipe_out[0]);
                    }
                    close(pipe_err[0]);
                    if(old_sigchld != SIG_ERR) {
                        signal(SIGCHLD, old_sigchld);
                    }
                    return t(output.to_string(), error_output.to_string(), 1);
                }
            }

            if(!child_done) {
                pid_t wait_result = waitpid(pid, &status, WNOHANG);
                if(wait_result == pid) {
                    child_done = true;
                    if(!stdin_closed) {
                        close(pipe_in[1]);
                        stdin_closed = true;
                    }
                }
                else if(wait_result < 0) {
                    if(!stdin_closed) {
                        close(pipe_in[1]);
                    }
                    if(!stdout_closed) {
                        close(pipe_out[0]);
                    }
                    if(!stderr_closed) {
                        close(pipe_err[0]);
                    }
                    if(old_sigchld != SIG_ERR) {
                        signal(SIGCHLD, old_sigchld);
                    }
                    return t(output.to_string(), error_output.to_string(), 1);
                }
            }

            if(child_done && stdout_closed && stderr_closed) {
                break;
            }

            usleep(10000);
        }

        if(!WIFEXITED(status) || WEXITSTATUS(status) != 0) {
            if(old_sigchld != SIG_ERR) {
                signal(SIGCHLD, old_sigchld);
            }
            return t(output.to_string(), error_output.to_string(), 1);
        }

        if(old_sigchld != SIG_ERR) {
            signal(SIGCHLD, old_sigchld);
        }
    }

    return t(output.to_string(), error_output.to_string(), 0);
}

string to_lower_string(string value)
{
    var buf = new buffer();

    char* p = borrow value;
    while(*p) {
        buf.append_char(tolower((unsigned char)*p));
        p++;
    }

    return buf.to_string();
}

bool is_header_trim_char(char c)
{
    return c == ' ' || c == '\t';
}

string trim_header_value(char* head, char* tail)
{
    while(head < tail && is_header_trim_char(*head)) {
        head++;
    }

    while(tail > head && is_header_trim_char(*(tail - 1))) {
        tail--;
    }

    return create_range_string(head, tail - head);
}

bool header_name_equals_ignore_case(char* head, int len, const char* name)
{
    int name_len = strlen(name);
    if(len != name_len) {
        return false;
    }

    for(int i=0; i<len; i++) {
        if(tolower((unsigned char)head[i]) != tolower((unsigned char)name[i])) {
            return false;
        }
    }

    return true;
}

string get_header_value(string header, const char* name)
{
    char* p = borrow header;

    while(*p) {
        char* line_head = p;
        char* line_end = strstr(p, "\r\n");

        if(line_end == null) {
            line_end = p + strlen(p);
        }

        char* colon = line_head;
        while(colon < line_end && *colon != ':') {
            colon++;
        }

        if(colon < line_end && header_name_equals_ignore_case(line_head, colon - line_head, name)) {
            return trim_header_value(colon + 1, line_end);
        }

        if(*line_end == '\0') {
            break;
        }

        p = line_end + 2;
    }

    return null;
}

string header_name_to_cgi_env_name(char* head, int len)
{
    var buf = new buffer();
    buf.append_str("HTTP_");

    for(int i=0; i<len; i++) {
        char c = head[i];

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            buf.append_char(toupper((unsigned char)c));
        }
        else if(c >= '0' && c <= '9') {
            buf.append_char(c);
        }
        else if(c == '-') {
            buf.append_char('_');
        }
        else {
            return null;
        }
    }

    return buf.to_string();
}

bool header_value_contains(string header, const char* name, const char* token)
{
    string value = get_header_value(header, name);
    if(value == null) {
        return false;
    }

    string lower_value = to_lower_string(value);
    string lower_token = to_lower_string(xsprintf("%s", token));

    return strstr(lower_value, lower_token) != NULL;
}

string get_cookie_header_value(string header)
{
    return get_header_value(header, "Cookie");
}

string get_host_header_value(string header)
{
    return get_header_value(header, "Host");
}

const char* connection_header_value()
{
    if(gKeepAlive && !gCloseConnection) {
        return "keep-alive";
    }

    return "close";
}

const char* keep_alive_header_value()
{
    return "timeout=5";
}

bool header_has_chunked_transfer_encoding(string header)
{
    return header_value_contains(header, "Transfer-Encoding", "chunked");
}

bool header_has_transfer_encoding(string header)
{
    return get_header_value(header, "Transfer-Encoding") != null;
}

bool header_has_connection_close(string header)
{
    return header_value_contains(header, "Connection", "close");
}

bool header_has_connection_keep_alive(string header)
{
    return header_value_contains(header, "Connection", "keep-alive");
}

bool request_should_keep_alive(string http_version, string header)
{
    if(http_version === "1.1") {
        return !header_has_connection_close(header);
    }

    return header_has_connection_keep_alive(header);
}

bool response_has_length_or_chunked(string output)
{
    string lower_output = to_lower_string(output);
    return strstr(lower_output, "content-length:") != NULL || strstr(lower_output, "transfer-encoding: chunked") != NULL;
}

bool response_has_connection_close(string output)
{
    string lower_output = to_lower_string(output);
    return strstr(lower_output, "connection: close") != NULL;
}

string format_http_date(time_t value)
{
    struct tm tm_;
    char buf[128];

    gmtime_r(&value, &tm_);
    strftime(buf, sizeof(buf), "%a, %d %b %Y %H:%M:%S GMT", &tm_);

    return xsprintf("%s", buf);
}

string build_standard_headers(const char* extra_headers="")
{
    string date_header = format_http_date(time(NULL));
    if(gKeepAlive && !gCloseConnection) {
        return xsprintf("Date: %s\r\nServer: %s\r\nKeep-Alive: %s\r\n%s",
                        borrow date_header, gServerName, keep_alive_header_value(), extra_headers);
    }

    return xsprintf("Date: %s\r\nServer: %s\r\n%s", borrow date_header, gServerName, extra_headers);
}

bool request_accepts_gzip(string header)
{
    string accept_encoding = get_header_value(header, "Accept-Encoding");
    if(accept_encoding == null) {
        return false;
    }

    string lower_accept_encoding = to_lower_string(accept_encoding);
    return strstr(lower_accept_encoding, "gzip") != NULL;
}

bool header_has_expect_100_continue(string header)
{
    return header_value_contains(header, "Expect", "100-continue");
}

bool is_safe_host_char(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '.' || c == '-';
}

string normalize_host_name(string host_header)
{
    if(host_header == null || host_header === "") {
        return xsprintf("");
    }

    string lower_host = to_lower_string(host_header);
    char* p = borrow lower_host;

    var host_buf = new buffer();

    if(*p == '[') {
        return null;
    }

    while(*p && *p != ':' && *p != ' ' && *p != '\t') {
        if(!is_safe_host_char(*p)) {
            return null;
        }

        host_buf.append_char(*p);
        p++;
    }

    string host = host_buf.to_string();
    if(host === "") {
        return null;
    }

    return host;
}

int parse_non_negative_number(string value)
{
    if(value == null || value === "") {
        return -1;
    }

    int result = 0;
    char* p = borrow value;

    while(*p) {
        if(!isdigit((unsigned char)*p)) {
            return -1;
        }

        result = result * 10 + (*p - '0');
        p++;
    }

    return result;
}

int month_name_to_number(const char* month)
{
    if(strcmp(month, "Jan") == 0) return 0;
    if(strcmp(month, "Feb") == 0) return 1;
    if(strcmp(month, "Mar") == 0) return 2;
    if(strcmp(month, "Apr") == 0) return 3;
    if(strcmp(month, "May") == 0) return 4;
    if(strcmp(month, "Jun") == 0) return 5;
    if(strcmp(month, "Jul") == 0) return 6;
    if(strcmp(month, "Aug") == 0) return 7;
    if(strcmp(month, "Sep") == 0) return 8;
    if(strcmp(month, "Oct") == 0) return 9;
    if(strcmp(month, "Nov") == 0) return 10;
    if(strcmp(month, "Dec") == 0) return 11;

    return -1;
}

time_t parse_http_date(string value)
{
    char weekday[4] = {0};
    char month[4] = {0};
    int day = 0;
    int year = 0;
    int hour = 0;
    int minute = 0;
    int second = 0;

    if(value == null) {
        return (time_t)-1;
    }

    if(sscanf(value, "%3s, %d %3s %d %d:%d:%d GMT", weekday, &day, month, &year, &hour, &minute, &second) != 7) {
        return (time_t)-1;
    }

    int month_number = month_name_to_number(month);
    if(month_number < 0) {
        return (time_t)-1;
    }

    struct tm tm_;
    memset(&tm_, 0, sizeof(tm_));
    tm_.tm_mday = day;
    tm_.tm_mon = month_number;
    tm_.tm_year = year - 1900;
    tm_.tm_hour = hour;
    tm_.tm_min = minute;
    tm_.tm_sec = second;

    return timegm(&tm_);
}

string build_file_etag(long file_size, long modified_time)
{
    return xsprintf("\"%lx-%lx\"", modified_time, file_size);
}

bool header_matches_etag(string header_value, string etag)
{
    if(header_value == null || etag == null) {
        return false;
    }

    if(header_value === "*") {
        return true;
    }

    return strstr(header_value, etag) != NULL;
}

bool request_matches_not_modified(string header, long file_size, time_t modified_time)
{
    string if_none_match = get_header_value(header, "If-None-Match");
    string etag = build_file_etag(file_size, modified_time);

    if(if_none_match) {
        return header_matches_etag(if_none_match, etag);
    }

    string if_modified_since = get_header_value(header, "If-Modified-Since");
    if(if_modified_since) {
        time_t condition_time = parse_http_date(if_modified_since);
        if(condition_time != (time_t)-1 && modified_time <= condition_time) {
            return true;
        }
    }

    return false;
}

string build_file_path(string document_root, string relative_path);
string create_range_string(char* head, int len);
string resolve_directory_index_path(string directory_path);
string get_raw_path_from_request_target(string request_target);
bool request_target_has_trailing_slash(string request_target);
tuple2<string, string>*% split_cgi_path_info(string relative_path);
const char* get_content_type(string file_path);
bool is_readable_static_file(string file_path);

tuple3<long, long, int>*% parse_range_request(string header, long file_size)
{
    string range_value = get_header_value(header, "Range");

    if(range_value == null) {
        return t(0L, 0L, 0);
    }

    if(strncmp(range_value, "bytes=", 6) != 0) {
        return t(0L, 0L, 2);
    }

    range_value = range_value.substring(6, -1);

    if(strstr(range_value, ",") != NULL) {
        return t(0L, 0L, 2);
    }

    char* p = borrow range_value;
    char* dash = strstr(p, "-");
    if(dash == null) {
        return t(0L, 0L, 2);
    }

    string start_value = create_range_string(p, dash - p);
    string end_value = (dash + 1).to_string();

    if(start_value === "" && end_value === "") {
        return t(0L, 0L, 2);
    }

    if(file_size <= 0) {
        return t(0L, 0L, 2);
    }

    if(start_value === "") {
        int suffix_length = parse_non_negative_number(end_value);
        if(suffix_length <= 0) {
            return t(0L, 0L, 2);
        }

        long start = file_size - suffix_length;
        if(start < 0) {
            start = 0;
        }

        return t(start, file_size - 1, 1);
    }

    int start_number = parse_non_negative_number(start_value);
    if(start_number < 0 || start_number >= file_size) {
        return t(0L, 0L, 2);
    }

    long start = start_number;
    long end = file_size - 1;

    if(end_value !== "") {
        int end_number = parse_non_negative_number(end_value);
        if(end_number < 0) {
            return t(0L, 0L, 2);
        }

        end = end_number;
        if(end < start) {
            return t(0L, 0L, 2);
        }
        if(end >= file_size) {
            end = file_size - 1;
        }
    }

    return t(start, end, 1);
}

bool is_existing_directory(string path);
bool is_readable_static_file(string file_path);
string build_file_path(string document_root, string relative_path);
bool request_path_forbidden(string document_root, string file_path);

bool is_existing_directory(string path)
{
    struct stat stat_;

    if(stat(path, &stat_) != 0) {
        return false;
    }

    return S_ISDIR(stat_.st_mode);
}

string resolve_document_root(string host_header)
{
    string host = normalize_host_name(host_header);
    if(host_header && host == null) {
        return null;
    }

    if(host && host !== "") {
        string vhost_relative = xsprintf("vhosts/%s", host);
        string vhost_root = build_file_path(xsprintf("%s", gDocumentRoot), vhost_relative);
        if(is_existing_directory(vhost_root)) {
            return vhost_root;
        }
    }

    return xsprintf("%s", gDocumentRoot);
}

string build_file_path(string document_root, string relative_path)
{
    if(document_root === "." || document_root === "") {
        return relative_path;
    }

    return xsprintf("%s/%s", document_root, relative_path);
}

string canonical_existing_path(string path)
{
    char* real_path = realpath(path, NULL);
    if(real_path == NULL) {
        return null;
    }

    string result = xsprintf("%s", real_path);
    free(real_path);

    return result;
}

bool path_is_under_document_root(string document_root, string file_path)
{
    string real_root = canonical_existing_path(document_root);
    string real_file = canonical_existing_path(file_path);

    if(real_root == null || real_file == null) {
        return false;
    }

    int root_len = strlen(real_root);
    if(strcmp(real_root, real_file) == 0) {
        return true;
    }

    return strncmp(real_file, real_root, root_len) == 0 && real_file[root_len] == '/';
}

bool request_path_forbidden(string document_root, string file_path)
{
    if(access(file_path, F_OK) != 0) {
        return false;
    }

    return !path_is_under_document_root(document_root, file_path);
}

string resolve_directory_index_path(string directory_path)
{
    const char* index_names[] = {
        "index.html",
        "index.htm",
        NULL
    };

    for(int i=0; index_names[i] != NULL; i++) {
        string index_path = build_file_path(directory_path, xsprintf("%s", index_names[i]));
        if(is_readable_static_file(index_path)) {
            return index_path;
        }
    }

    return null;
}

string html_escape(string value)
{
    var buf = new buffer();

    char* p = borrow value;
    while(*p) {
        if(*p == '&') {
            buf.append_str("&amp;");
        }
        else if(*p == '<') {
            buf.append_str("&lt;");
        }
        else if(*p == '>') {
            buf.append_str("&gt;");
        }
        else if(*p == '"') {
            buf.append_str("&quot;");
        }
        else {
            buf.append_char(*p);
        }

        p++;
    }

    return buf.to_string();
}

bool is_url_unreserved_char(char c)
{
    return isalnum((unsigned char)c) || c == '-' || c == '_' || c == '.' || c == '~';
}

string url_escape_path_segment(string value)
{
    var buf = new buffer();

    char* p = borrow value;
    while(*p) {
        unsigned char c = *p;
        if(is_url_unreserved_char(c)) {
            buf.append_char(c);
        }
        else {
            char escaped[4];
            snprintf(escaped, sizeof(escaped), "%%%02X", c);
            buf.append_str(escaped);
        }

        p++;
    }

    return buf.to_string();
}

string raw_directory_path_from_target(string request_target)
{
    string raw_path = get_raw_path_from_request_target(request_target);
    if(raw_path == null || raw_path === "") {
        return xsprintf("/");
    }

    if(request_target_has_trailing_slash(request_target)) {
        return raw_path;
    }

    return xsprintf("%s/", borrow raw_path);
}

string build_autoindex_body(string directory_path, string request_target)
{
    DIR* dir = opendir(directory_path);
    if(dir == NULL) {
        return null;
    }

    string raw_path = raw_directory_path_from_target(request_target);
    string escaped_path = html_escape(raw_path);

    var body = new buffer();
    body.append_str("<!DOCTYPE html>\n<html><head><meta charset=\"UTF-8\"><title>Index of ");
    body.append_str(escaped_path);
    body.append_str("</title></head><body><h1>Index of ");
    body.append_str(escaped_path);
    body.append_str("</h1><ul>\n");

    if(raw_path !== "/") {
        body.append_str("<li><a href=\"../\">../</a></li>\n");
    }

    while(true) {
        struct dirent* entry = readdir(dir);
        if(entry == NULL) {
            break;
        }

        if(strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        string entry_name = xsprintf("%s", entry->d_name);
        string escaped_name = html_escape(entry_name);
        string href_name = url_escape_path_segment(entry_name);
        string full_path = build_file_path(directory_path, entry_name);
        bool is_dir = is_existing_directory(full_path);

        body.append_str("<li><a href=\"");
        body.append_str(raw_path);
        body.append_str(href_name);
        if(is_dir) {
            body.append_char('/');
        }
        body.append_str("\">");
        body.append_str(escaped_name);
        if(is_dir) {
            body.append_char('/');
        }
        body.append_str("</a></li>\n");
    }

    closedir(dir);

    body.append_str("</ul></body></html>\n");
    return body.to_string();
}

tuple2<string, string>*% split_cgi_path_info(string relative_path)
{
    char* head = borrow relative_path;
    char* cgi_pos = strstr(relative_path, ".cgi");

    if(cgi_pos == null) {
        return t((string)null, (string)null);
    }

    char* tail = cgi_pos + 4;
    if(*tail == '\0') {
        return t(relative_path, xsprintf(""));
    }

    if(*tail != '/') {
        return t((string)null, (string)null);
    }

    string script_path = create_range_string(head, tail - head);
    string path_info = tail.to_string();

    return t(script_path, path_info);
}

string create_range_string(char* head, int len)
{
    var buf = new buffer();
    buf.append(head, len);
    return buf.to_string();
}

int parse_hex_number(string value);

tuple3<string, int, int>*% parse_chunked_body(string body_data)
{
    var decoded_body = new buffer();

    char* p = borrow body_data;
    int consumed = 0;

    while(true) {
        char* line_end = strstr(p, "\r\n");
        if(line_end == null) {
            return t((string)null, 0, 1);
        }

        string size_line = create_range_string(p, line_end - p);
        char* size_line_head = borrow size_line;
        char* ext = strstr(size_line_head, ";");
        if(ext != null) {
            size_line = create_range_string(size_line_head, ext - size_line_head);
        }

        int chunk_size = parse_hex_number(size_line);
        if(chunk_size < 0) {
            return t((string)null, 0, 2);
        }

        consumed += (line_end - p) + 2;
        p = line_end + 2;

        if(chunk_size == 0) {
            char* trailer_end = strstr(p, "\r\n\r\n");
            if(trailer_end == null) {
                if(strncmp(p, "\r\n", 2) == 0) {
                    consumed += 2;
                    return t(decoded_body.to_string(), consumed, 0);
                }

                return t((string)null, 0, 1);
            }

            consumed += (trailer_end - p) + 4;
            return t(decoded_body.to_string(), consumed, 0);
        }

        if((int)strlen(p) < chunk_size + 2) {
            return t((string)null, 0, 1);
        }

        decoded_body.append(p, chunk_size);
        p += chunk_size;

        if(strncmp(p, "\r\n", 2) != 0) {
            return t((string)null, 0, 2);
        }

        p += 2;
        consumed += chunk_size + 2;
    }
}

void consume_request_buffer(buffer* request_buffer, int consumed_bytes)
{
    int current_len = request_buffer.length();
    if(consumed_bytes >= current_len) {
        request_buffer.reset();
        return;
    }

    string request_data = request_buffer.to_string();
    string remaining = request_data.substring(consumed_bytes, -1);

    request_buffer.reset();
    request_buffer.append_str(remaining);
}

void write_http_data(int it, const void* data, int size)
{
    write(it, data, size);
}

void write_https_data(SSL* it, const void* data, int size)
{
    SSL_write(it, data, size);
}

void set_response_body_bytes(long bytes)
{
    gResponseBodyBytes = bytes;
}

void send_continue_http(int it)
{
    write_http_data(it, "HTTP/1.1 100 Continue\r\n\r\n", 25);
}

void send_continue_https(SSL* it)
{
    write_https_data(it, "HTTP/1.1 100 Continue\r\n\r\n", 25);
}

bool can_gzip_content_type(const char* content_type)
{
    return is_text_like_content_type(content_type);
}

void send_chunk_http(int it, const unsigned char* data, int size)
{
    char chunk_head[64];
    int head_len = snprintf(chunk_head, sizeof(chunk_head), "%x\r\n", size);
    write_http_data(it, chunk_head, head_len);
    if(size > 0) {
        write_http_data(it, data, size);
    }
    write_http_data(it, "\r\n", 2);
}

void send_chunk_https(SSL* it, const unsigned char* data, int size)
{
    char chunk_head[64];
    int head_len = snprintf(chunk_head, sizeof(chunk_head), "%x\r\n", size);
    write_https_data(it, chunk_head, head_len);
    if(size > 0) {
        write_https_data(it, data, size);
    }
    write_https_data(it, "\r\n", 2);
}

bool send_gzip_chunked_http(int it, const char* body, int body_len)
{
    z_stream stream;
    memset(&stream, 0, sizeof(stream));

    if(deflateInit2(&stream, Z_DEFAULT_COMPRESSION, Z_DEFLATED, 15 + 16, 8, Z_DEFAULT_STRATEGY) != Z_OK) {
        return false;
    }

    stream.next_in = (Bytef*)body;
    stream.avail_in = body_len;

    int flush = Z_NO_FLUSH;
    while(true) {
        if(stream.avail_in == 0) {
            flush = Z_FINISH;
        }

        unsigned char outbuf[4096];
        stream.next_out = outbuf;
        stream.avail_out = sizeof(outbuf);

        int result = deflate(&stream, flush);
        int produced = sizeof(outbuf) - stream.avail_out;

        if(result != Z_OK && result != Z_STREAM_END) {
            deflateEnd(&stream);
            return false;
        }

        if(produced > 0) {
            send_chunk_http(it, outbuf, produced);
        }

        if(result == Z_STREAM_END) {
            break;
        }
    }

    send_chunk_http(it, (unsigned char*)"", 0);
    deflateEnd(&stream);
    return true;
}

bool send_gzip_chunked_https(SSL* it, const char* body, int body_len)
{
    z_stream stream;
    memset(&stream, 0, sizeof(stream));

    if(deflateInit2(&stream, Z_DEFAULT_COMPRESSION, Z_DEFLATED, 15 + 16, 8, Z_DEFAULT_STRATEGY) != Z_OK) {
        return false;
    }

    stream.next_in = (Bytef*)body;
    stream.avail_in = body_len;

    int flush = Z_NO_FLUSH;
    while(true) {
        if(stream.avail_in == 0) {
            flush = Z_FINISH;
        }

        unsigned char outbuf[4096];
        stream.next_out = outbuf;
        stream.avail_out = sizeof(outbuf);

        int result = deflate(&stream, flush);
        int produced = sizeof(outbuf) - stream.avail_out;

        if(result != Z_OK && result != Z_STREAM_END) {
            deflateEnd(&stream);
            return false;
        }

        if(produced > 0) {
            send_chunk_https(it, outbuf, produced);
        }

        if(result == Z_STREAM_END) {
            break;
        }
    }

    send_chunk_https(it, (unsigned char*)"", 0);
    deflateEnd(&stream);
    return true;
}

void send_text_response_http(int it, const char* status, const char* content_type, const char* body, int body_len, const char* extra_headers="")
{
    string standard_headers = build_standard_headers(extra_headers);
    set_response_body_bytes(gHeadRequest ? 0 : body_len);

    if(gAcceptGzip && can_gzip_content_type(content_type) && body_len > 0) {
        string header = xsprintf("HTTP/1.1 %s\r\nContent-Type: %s\r\nContent-Encoding: gzip\r\nTransfer-Encoding: chunked\r\nVary: Accept-Encoding\r\nConnection: %s\r\n%s\r\n",
                                 status, content_type, connection_header_value(), borrow standard_headers);
        write_http_data(it, header, strlen(header));

        if(gHeadRequest) {
            return;
        }

        if(send_gzip_chunked_http(it, body, body_len)) {
            return;
        }
    }

    string response_header = xsprintf("HTTP/1.1 %s\r\nContent-Type: %s\r\nContent-Length: %d\r\nConnection: %s\r\n%s\r\n",
                                      status, content_type, body_len, connection_header_value(), borrow standard_headers);
    write_http_data(it, response_header, strlen(response_header));

    if(!gHeadRequest && body_len > 0) {
        write_http_data(it, body, body_len);
    }
}

void send_text_response_https(SSL* it, const char* status, const char* content_type, const char* body, int body_len, const char* extra_headers="")
{
    string standard_headers = build_standard_headers(extra_headers);
    set_response_body_bytes(gHeadRequest ? 0 : body_len);

    if(gAcceptGzip && can_gzip_content_type(content_type) && body_len > 0) {
        string header = xsprintf("HTTP/1.1 %s\r\nContent-Type: %s\r\nContent-Encoding: gzip\r\nTransfer-Encoding: chunked\r\nVary: Accept-Encoding\r\nConnection: %s\r\n%s\r\n",
                                 status, content_type, connection_header_value(), borrow standard_headers);
        write_https_data(it, header, strlen(header));

        if(gHeadRequest) {
            return;
        }

        if(send_gzip_chunked_https(it, body, body_len)) {
            return;
        }
    }

    string response_header = xsprintf("HTTP/1.1 %s\r\nContent-Type: %s\r\nContent-Length: %d\r\nConnection: %s\r\n%s\r\n",
                                      status, content_type, body_len, connection_header_value(), borrow standard_headers);
    write_https_data(it, response_header, strlen(response_header));

    if(!gHeadRequest && body_len > 0) {
        write_https_data(it, body, body_len);
    }
}

void send_html_response_http(int it, const char* status, const char* body, const char* extra_headers="")
{
    send_text_response_http(it, status, "text/html; charset=UTF-8", body, strlen(body), extra_headers);
}

void send_html_response_https(SSL* it, const char* status, const char* body, const char* extra_headers="")
{
    send_text_response_https(it, status, "text/html; charset=UTF-8", body, strlen(body), extra_headers);
}

const char* get_configured_error_page(int status_code)
{
    switch(status_code) {
        case 400: return gErrorPage400;
        case 403: return gErrorPage403;
        case 404: return gErrorPage404;
        case 405: return gErrorPage405;
        case 408: return gErrorPage408;
        case 413: return gErrorPage413;
        case 414: return gErrorPage414;
        case 416: return gErrorPage416;
        case 431: return gErrorPage431;
        case 500: return gErrorPage500;
        case 502: return gErrorPage502;
        case 504: return gErrorPage504;
        case 505: return gErrorPage505;
    }

    return NULL;
}

string resolve_error_page_path(int status_code)
{
    const char* configured_path = get_configured_error_page(status_code);
    if(configured_path != NULL) {
        string path = xsprintf("%s", configured_path);
        if(path[0] == '/') {
            if(is_readable_static_file(path)) {
                return path;
            }
        }
        else {
            string relative_path = build_file_path(xsprintf("%s", gActiveDocumentRoot), path);
            if(is_readable_static_file(relative_path)) {
                return relative_path;
            }
        }
    }

    string automatic_path = build_file_path(xsprintf("%s", gActiveDocumentRoot), xsprintf("%d.html", status_code));
    if(is_readable_static_file(automatic_path)) {
        return automatic_path;
    }

    return null;
}

string read_whole_binary_file(string file_path)
{
    FILE* file = fopen(file_path, "rb");
    if(file == NULL) {
        return null;
    }

    var body = new buffer();
    char buf[BUFSIZ];
    while(true) {
        size_t size = fread(buf, 1, sizeof(buf), file);
        if(size > 0) {
            body.append(buf, size);
        }
        if(size < sizeof(buf)) {
            break;
        }
    }

    fclose(file);
    return body.to_string();
}

void send_error_response_http(int it, int status_code, const char* status, const char* fallback_body, const char* extra_headers="")
{
    string error_page = resolve_error_page_path(status_code);
    if(error_page != null) {
        string body = read_whole_binary_file(error_page);
        if(body != null) {
            send_text_response_http(it, status, get_content_type(error_page), borrow body, strlen(body), extra_headers);
            return;
        }
    }

    send_html_response_http(it, status, fallback_body, extra_headers);
}

void send_error_response_https(SSL* it, int status_code, const char* status, const char* fallback_body, const char* extra_headers="")
{
    string error_page = resolve_error_page_path(status_code);
    if(error_page != null) {
        string body = read_whole_binary_file(error_page);
        if(body != null) {
            send_text_response_https(it, status, get_content_type(error_page), borrow body, strlen(body), extra_headers);
            return;
        }
    }

    send_html_response_https(it, status, fallback_body, extra_headers);
}

void send_empty_response_http(int it, const char* status, const char* extra_headers="")
{
    set_response_body_bytes(0);
    string standard_headers = build_standard_headers(extra_headers);
    string response = xsprintf("HTTP/1.1 %s\r\nContent-Length: 0\r\nConnection: %s\r\n%s\r\n",
                               status, connection_header_value(), borrow standard_headers);
    write_http_data(it, response, strlen(response));
}

void send_empty_response_https(SSL* it, const char* status, const char* extra_headers="")
{
    set_response_body_bytes(0);
    string standard_headers = build_standard_headers(extra_headers);
    string response = xsprintf("HTTP/1.1 %s\r\nContent-Length: 0\r\nConnection: %s\r\n%s\r\n",
                               status, connection_header_value(), borrow standard_headers);
    write_https_data(it, response, strlen(response));
}

void send_not_found_http(int it)
{
    send_error_response_http(it, 404, "404 Not Found", "<html><body><h1>404 Not Found</h1></body></html>");
}

void send_not_found_https(SSL* it)
{
    send_error_response_https(it, 404, "404 Not Found", "<html><body><h1>404 Not Found</h1></body></html>");
}

void send_bad_request_http(int it)
{
    send_error_response_http(it, 400, "400 Bad Request", "<html><body><h1>400 Bad Request</h1></body></html>");
}

void send_bad_request_https(SSL* it)
{
    send_error_response_https(it, 400, "400 Bad Request", "<html><body><h1>400 Bad Request</h1></body></html>");
}

void send_request_timeout_http(int it)
{
    send_error_response_http(it, 408, "408 Request Timeout", "<html><body><h1>408 Request Timeout</h1></body></html>");
}

void send_request_timeout_https(SSL* it)
{
    send_error_response_https(it, 408, "408 Request Timeout", "<html><body><h1>408 Request Timeout</h1></body></html>");
}

void send_payload_too_large_http(int it)
{
    send_error_response_http(it, 413, "413 Payload Too Large", "<html><body><h1>413 Payload Too Large</h1></body></html>");
}

void send_payload_too_large_https(SSL* it)
{
    send_error_response_https(it, 413, "413 Payload Too Large", "<html><body><h1>413 Payload Too Large</h1></body></html>");
}

void send_uri_too_long_http(int it)
{
    send_error_response_http(it, 414, "414 URI Too Long", "<html><body><h1>414 URI Too Long</h1></body></html>");
}

void send_uri_too_long_https(SSL* it)
{
    send_error_response_https(it, 414, "414 URI Too Long", "<html><body><h1>414 URI Too Long</h1></body></html>");
}

void send_request_header_fields_too_large_http(int it)
{
    send_error_response_http(it, 431, "431 Request Header Fields Too Large", "<html><body><h1>431 Request Header Fields Too Large</h1></body></html>");
}

void send_request_header_fields_too_large_https(SSL* it)
{
    send_error_response_https(it, 431, "431 Request Header Fields Too Large", "<html><body><h1>431 Request Header Fields Too Large</h1></body></html>");
}

void send_http_version_not_supported_http(int it)
{
    send_error_response_http(it, 505, "505 HTTP Version Not Supported", "<html><body><h1>505 HTTP Version Not Supported</h1></body></html>");
}

void send_http_version_not_supported_https(SSL* it)
{
    send_error_response_https(it, 505, "505 HTTP Version Not Supported", "<html><body><h1>505 HTTP Version Not Supported</h1></body></html>");
}

const char* allow_header_all_methods()
{
    return "Allow: GET, HEAD, POST, OPTIONS\r\n";
}

const char* allow_header_static_methods()
{
    return "Allow: GET, HEAD, OPTIONS\r\n";
}

const char* allow_header_cgi_methods()
{
    return "Allow: GET, HEAD, POST, OPTIONS\r\n";
}

void send_method_not_allowed_http_with_allow(int it, const char* allow_header)
{
    send_error_response_http(it, 405, "405 Method Not Allowed",
                             "<html><body><h1>405 Method Not Allowed</h1></body></html>",
                             allow_header);
}

void send_method_not_allowed_https_with_allow(SSL* it, const char* allow_header)
{
    send_error_response_https(it, 405, "405 Method Not Allowed",
                              "<html><body><h1>405 Method Not Allowed</h1></body></html>",
                              allow_header);
}

void send_method_not_allowed_http(int it)
{
    send_method_not_allowed_http_with_allow(it, allow_header_all_methods());
}

void send_method_not_allowed_https(SSL* it)
{
    send_method_not_allowed_https_with_allow(it, allow_header_all_methods());
}

void send_forbidden_http(int it)
{
    send_error_response_http(it, 403, "403 Forbidden", "<html><body><h1>403 Forbidden</h1></body></html>");
}

void send_forbidden_https(SSL* it)
{
    send_error_response_https(it, 403, "403 Forbidden", "<html><body><h1>403 Forbidden</h1></body></html>");
}

void send_directory_redirect_http(int it, string location)
{
    string extra_headers = xsprintf("Location: %s\r\n", borrow location);
    send_html_response_http(it, "301 Moved Permanently",
                            "<html><body><h1>301 Moved Permanently</h1></body></html>",
                            borrow extra_headers);
}

void send_directory_redirect_https(SSL* it, string location)
{
    string extra_headers = xsprintf("Location: %s\r\n", borrow location);
    send_html_response_https(it, "301 Moved Permanently",
                             "<html><body><h1>301 Moved Permanently</h1></body></html>",
                             borrow extra_headers);
}

void send_options_response_http(int it, const char* allow_header)
{
    send_empty_response_http(it, "204 No Content", allow_header);
}

void send_options_response_https(SSL* it, const char* allow_header)
{
    send_empty_response_https(it, "204 No Content", allow_header);
}

void send_internal_server_error_http(int it)
{
    send_error_response_http(it, 500, "500 Internal Server Error", "<html><body><h1>500 Internal Server Error</h1></body></html>");
}

void send_internal_server_error_https(SSL* it)
{
    send_error_response_https(it, 500, "500 Internal Server Error", "<html><body><h1>500 Internal Server Error</h1></body></html>");
}

void send_bad_gateway_http(int it)
{
    send_error_response_http(it, 502, "502 Bad Gateway", "<html><body><h1>502 Bad Gateway</h1></body></html>");
}

void send_bad_gateway_https(SSL* it)
{
    send_error_response_https(it, 502, "502 Bad Gateway", "<html><body><h1>502 Bad Gateway</h1></body></html>");
}

void send_gateway_timeout_http(int it)
{
    send_error_response_http(it, 504, "504 Gateway Timeout", "<html><body><h1>504 Gateway Timeout</h1></body></html>");
}

void send_gateway_timeout_https(SSL* it)
{
    send_error_response_https(it, 504, "504 Gateway Timeout", "<html><body><h1>504 Gateway Timeout</h1></body></html>");
}

int send_autoindex_http(int it, string directory_path, string request_target)
{
    string body = build_autoindex_body(directory_path, request_target);
    if(body == null) {
        send_forbidden_http(it);
        return 403;
    }

    send_html_response_http(it, "200 OK", borrow body, "Cache-Control: no-store\r\n");
    return 200;
}

int send_autoindex_https(SSL* it, string directory_path, string request_target)
{
    string body = build_autoindex_body(directory_path, request_target);
    if(body == null) {
        send_forbidden_https(it);
        return 403;
    }

    send_html_response_https(it, "200 OK", borrow body, "Cache-Control: no-store\r\n");
    return 200;
}

int get_content_length(string header)
{
    string p = get_header_value(header, "Content-Length");
    if(p) {
        int content_length = parse_non_negative_number(p);
        if(content_length >= 0) {
            return content_length;
        }
    }

    return 0;
}

bool is_too_large_request(buffer* request_buffer)
{
    return request_buffer.length() > MAX_REQUEST_BYTES;
}

bool is_too_large_header(int header_size)
{
    return header_size > MAX_HEADER_BYTES;
}

bool is_too_long_uri(string request_target)
{
    return request_target != null && strlen(request_target) > MAX_URI_BYTES;
}

bool request_line_target_too_long(string header)
{
    if(header == null) {
        return false;
    }

    char* line_head = borrow header;
    char* line_end = strstr(line_head, "\r\n");
    if(line_end == null) {
        line_end = line_head + strlen(line_head);
    }

    char* method_end = line_head;
    while(method_end < line_end && *method_end != ' ') {
        method_end++;
    }
    if(method_end >= line_end) {
        return false;
    }

    char* target_head = method_end + 1;
    char* target_end = target_head;
    while(target_end < line_end && *target_end != ' ') {
        target_end++;
    }

    return target_end - target_head > MAX_URI_BYTES;
}

bool is_supported_http_version(string http_version)
{
    return http_version === "1.0" || http_version === "1.1";
}

bool is_request_timeout()
{
    return errno == EAGAIN || errno == EWOULDBLOCK;
}

void set_client_timeout(int fd)
{
    struct timeval tv;
    tv.tv_sec = 5;
    tv.tv_usec = 0;

    setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));
    setsockopt(fd, SOL_SOCKET, SO_SNDTIMEO, &tv, sizeof(tv));
}

bool is_hex_char(char c)
{
    return isxdigit((unsigned char)c) != 0;
}

int hex_char_value(char c)
{
    if(c >= '0' && c <= '9') {
        return c - '0';
    }
    else if(c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    else if(c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }

    return -1;
}

int parse_hex_number(string value)
{
    if(value == null || value === "") {
        return -1;
    }

    int result = 0;

    char* p = borrow value;
    while(*p) {
        int n = hex_char_value(*p);
        if(n < 0) {
            return -1;
        }

        result = result * 16 + n;
        p++;
    }

    return result;
}

string decode_url_path(string path)
{
    var buf = new buffer();

    char* p = borrow path;
    while(*p) {
        if(*p == '%') {
            if(!is_hex_char(*(p+1)) || !is_hex_char(*(p+2))) {
                return null;
            }

            int value = hex_char_value(*(p+1)) * 16 + hex_char_value(*(p+2));
            if(value == 0 || value == '/' || value == '\\') {
                return null;
            }

            buf.append_char(value);
            p += 3;
        }
        else if(*p == '\\') {
            return null;
        }
        else {
            buf.append_char(*p);
            p++;
        }
    }

    return buf.to_string();
}

string normalize_request_path(string raw_path)
{
    if(raw_path == null || raw_path[0] != '/') {
        return null;
    }

    string decoded_path = decode_url_path(raw_path);
    if(decoded_path == null) {
        return null;
    }

    if(decoded_path === "/") {
        return xsprintf(".");
    }

    var normalized = new buffer();

    char* p = borrow decoded_path;
    while(*p == '/') {
        p++;
    }

    while(*p) {
        char* segment_head = p;

        while(*p != '\0' && *p != '/') {
            p++;
        }

        string segment = xsprintf("");
        if(p > segment_head) {
            var segment_buf = new buffer();
            segment_buf.append(segment_head, p - segment_head);
            segment = segment_buf.to_string();
        }

        if(segment === "..") {
            return null;
        }
        else if(segment && segment !== ".") {
            if(normalized.length() > 0) {
                normalized.append_char('/');
            }
            normalized.append_str(segment);
        }

        while(*p == '/') {
            p++;
        }
    }

    if(normalized.length() == 0) {
        return xsprintf(".");
    }

    return normalized.to_string();
}

tuple2<string, string>*% parse_request_target(string request_target)
{
    if(request_target == null) {
        return t((string)null, (string)null);
    }

    string raw_path = request_target;
    string query_string = xsprintf("");
    char* p = strstr(request_target, "?");

    if(p != null) {
        raw_path = request_target.substring(0, p - request_target);
        query_string = (p + 1).to_string();
    }

    string normalized_path = normalize_request_path(raw_path);
    if(normalized_path == null) {
        return t((string)null, (string)null);
    }

    return t(normalized_path, query_string);
}

string get_raw_path_from_request_target(string request_target)
{
    if(request_target == null) {
        return null;
    }

    char* p = strstr(request_target, "?");
    if(p != null) {
        return request_target.substring(0, p - request_target);
    }

    return request_target;
}

bool request_target_has_trailing_slash(string request_target)
{
    string raw_path = get_raw_path_from_request_target(request_target);
    if(raw_path == null) {
        return false;
    }

    int len = strlen(raw_path);
    return len > 0 && raw_path[len-1] == '/';
}

string build_directory_redirect_target(string request_target)
{
    string raw_path = get_raw_path_from_request_target(request_target);
    if(raw_path == null) {
        return null;
    }

    if(request_target_has_trailing_slash(request_target)) {
        return raw_path;
    }

    char* p = strstr(request_target, "?");
    if(p != null) {
        return xsprintf("%s/%s", borrow raw_path, p);
    }

    return xsprintf("%s/", borrow raw_path);
}

tuple3<string, string, string>*% parse_request_line(string header)
{
    var request_line = header.scan("^([A-Z]+) ([^ ]+) HTTP/([0-9.]+)");
    string method = request_line[0];
    string request_target = request_line[1];
    string http_version = request_line[2];

    if(method == null || request_target == null || http_version == null) {
        return t((string)null, (string)null, (string)null);
    }

    return t(method, request_target, http_version);
}

bool is_executable_cgi(string file_path)
{
    struct stat stat_;

    if(stat(file_path, &stat_) != 0) {
        return false;
    }

    if(!S_ISREG(stat_.st_mode)) {
        return false;
    }

    return access(file_path, X_OK) == 0;
}

bool is_readable_static_file(string file_path)
{
    struct stat stat_;

    if(stat(file_path, &stat_) != 0) {
        return false;
    }

    if(!S_ISREG(stat_.st_mode)) {
        return false;
    }

    return access(file_path, R_OK) == 0;
}

void set_remote_client_info(int fd)
{
    struct sockaddr_storage address;
    socklen_t address_len = sizeof(address);

    snprintf(gRemoteAddr, sizeof(gRemoteAddr), "-");
    gRemotePort = 0;

    if(getpeername(fd, (struct sockaddr*)&address, &address_len) != 0) {
        return;
    }

    if(address.ss_family == AF_INET) {
        struct sockaddr_in* addr4 = (struct sockaddr_in*)&address;
        inet_ntop(AF_INET, &addr4->sin_addr, gRemoteAddr, sizeof(gRemoteAddr));
        gRemotePort = ntohs(addr4->sin_port);
    }
    else if(address.ss_family == AF_INET6) {
        struct sockaddr_in6* addr6 = (struct sockaddr_in6*)&address;
        inet_ntop(AF_INET6, &addr6->sin6_addr, gRemoteAddr, sizeof(gRemoteAddr));
        gRemotePort = ntohs(addr6->sin6_port);
    }
}

string sanitize_log_value(string value)
{
    if(value == null || value === "") {
        return xsprintf("-");
    }

    var buf = new buffer();
    char* p = borrow value;
    while(*p) {
        unsigned char c = *p;
        if(c == '"' || c == '\\') {
            buf.append_char('\\');
            buf.append_char(c);
        }
        else if(c < 32 || c == 127) {
            buf.append_char(' ');
        }
        else {
            buf.append_char(c);
        }
        p++;
    }

    return buf.to_string();
}

void log_access(const char* protocol, string method, string request_target, int status_code)
{
    time_t now = time(NULL);
    struct tm tm_;
    char time_buf[64];

    localtime_r(&now, &tm_);
    strftime(time_buf, sizeof(time_buf), "%d/%b/%Y:%H:%M:%S %z", &tm_);

    FILE* out = stdout;
    if(gAccessLogPath != NULL) {
        out = fopen(gAccessLogPath, "a");
        if(out == NULL) {
            out = stdout;
        }
    }

    string request_line = xsprintf("%s %s HTTP/%s", borrow method, borrow request_target,
                                   gCurrentHttpVersion != NULL ? gCurrentHttpVersion : "-");
    string referer = sanitize_log_value(xsprintf("%s", gCurrentReferer != NULL ? gCurrentReferer : "-"));
    string user_agent = sanitize_log_value(xsprintf("%s", gCurrentUserAgent != NULL ? gCurrentUserAgent : "-"));

    fprintf(out, "%s - - [%s] \"%s\" %d %ld \"%s\" \"%s\"\n",
            gRemoteAddr, time_buf, borrow request_line, status_code, gResponseBodyBytes,
            borrow referer, borrow user_agent);
    fflush(out);

    if(out != stdout) {
        fclose(out);
    }
}

void log_error_message(const char* level, string message)
{
    time_t now = time(NULL);
    struct tm tm_;
    char time_buf[64];
    localtime_r(&now, &tm_);
    strftime(time_buf, sizeof(time_buf), "%Y-%m-%d %H:%M:%S", &tm_);

    FILE* out = stderr;
    if(gErrorLogPath != NULL) {
        out = fopen(gErrorLogPath, "a");
        if(out == NULL) {
            out = stderr;
        }
    }

    fprintf(out, "[%s] %s %s\n", time_buf, level, borrow message);
    fflush(out);

    if(out != stderr) {
        fclose(out);
    }
}

void log_cgi_stderr(string script_path, string error_output)
{
    if(error_output == null || error_output === "") {
        return;
    }

    string header = xsprintf("CGI stderr from %s:", borrow script_path);
    log_error_message("error", header);

    char* p = borrow error_output;
    while(*p) {
        char* line_end = strchr(p, '\n');
        if(line_end == NULL) {
            log_error_message("cgi", xsprintf("%s", p));
            break;
        }

        string line = create_range_string(p, line_end - p);
        log_error_message("cgi", line);
        p = line_end + 1;
    }
}

tuple3<string, string, int>*% read_http_request(int it, buffer* request_buffer)
{
    bool expect_continue_sent = false;

    while(true) {
        string request = request_buffer.to_string();
        char* p = strstr(request, "\r\n\r\n");

        if(p != null) {
            int header_size = (int)(p - request);
            if(is_too_large_header(header_size)) {
                return t((string)null, (string)null, 5);
            }

            string header = request.substring(0, header_size);
            int body_offset = header_size + 4;

            if(header_has_chunked_transfer_encoding(header)) {
                string body_data = (p + 4).to_string();
                var decoded_body, consumed_body_size, chunked_status = parse_chunked_body(body_data);

                if(chunked_status == 0) {
                    consume_request_buffer(request_buffer, body_offset + consumed_body_size);
                    return t(header, decoded_body, 0);
                }
                else if(chunked_status == 2) {
                    return t((string)null, (string)null, 1);
                }
                else if(!expect_continue_sent && header_has_expect_100_continue(header)) {
                    send_continue_http(it);
                    expect_continue_sent = true;
                }
            }
            else if(header_has_transfer_encoding(header)) {
                return t((string)null, (string)null, 1);
            }
            else {
                int content_length = get_content_length(header);
                int body_size = request_buffer.length() - body_offset;

                if(body_size >= content_length) {
                    string body = create_range_string(p + 4, content_length);
                    consume_request_buffer(request_buffer, body_offset + content_length);
                    return t(header, body, 0);
                }
                else if(content_length > 0 && !expect_continue_sent && header_has_expect_100_continue(header)) {
                    send_continue_http(it);
                    expect_continue_sent = true;
                }
            }
        }

        char data[1024 * 4] = {0};
        int size = read(it, data, sizeof(data));
        if(size < 0) {
            if(is_request_timeout()) {
                return t((string)null, (string)null, 3);
            }

            perror("read");
            return t((string)null, (string)null, 1);
        }

        if(size == 0) {
            if(request_buffer.length() == 0) {
                return t((string)null, (string)null, 2);
            }

            break;
        }

        request_buffer.append(data, size);

        if(is_too_large_request(request_buffer)) {
            return t((string)null, (string)null, 4);
        }
    }
}

tuple3<string, string, int>*% read_https_request(SSL* it, buffer* request_buffer)
{
    bool expect_continue_sent = false;

    while(true) {
        string request = request_buffer.to_string();
        char* p = strstr(request, "\r\n\r\n");

        if(p != null) {
            int header_size = (int)(p - request);
            if(is_too_large_header(header_size)) {
                return t((string)null, (string)null, 5);
            }

            string header = request.substring(0, header_size);
            int body_offset = header_size + 4;

            if(header_has_chunked_transfer_encoding(header)) {
                string body_data = (p + 4).to_string();
                var decoded_body, consumed_body_size, chunked_status = parse_chunked_body(body_data);

                if(chunked_status == 0) {
                    consume_request_buffer(request_buffer, body_offset + consumed_body_size);
                    return t(header, decoded_body, 0);
                }
                else if(chunked_status == 2) {
                    return t((string)null, (string)null, 1);
                }
                else if(!expect_continue_sent && header_has_expect_100_continue(header)) {
                    send_continue_https(it);
                    expect_continue_sent = true;
                }
            }
            else if(header_has_transfer_encoding(header)) {
                return t((string)null, (string)null, 1);
            }
            else {
                int content_length = get_content_length(header);
                int body_size = request_buffer.length() - body_offset;

                if(body_size >= content_length) {
                    string body = create_range_string(p + 4, content_length);
                    consume_request_buffer(request_buffer, body_offset + content_length);
                    return t(header, body, 0);
                }
                else if(content_length > 0 && !expect_continue_sent && header_has_expect_100_continue(header)) {
                    send_continue_https(it);
                    expect_continue_sent = true;
                }
            }
        }

        char data[1024 * 4] = {0};
        int size = SSL_read(it, data, sizeof(data));
        if(size < 0) {
            if(is_request_timeout()) {
                return t((string)null, (string)null, 3);
            }

            perror("SSL_read");
            return t((string)null, (string)null, 1);
        }

        if(size == 0) {
            if(request_buffer.length() == 0) {
                return t((string)null, (string)null, 2);
            }

            break;
        }

        request_buffer.append(data, size);

        if(is_too_large_request(request_buffer)) {
            return t((string)null, (string)null, 4);
        }
    }
}

const char* get_content_type(string file_path)
{
    string ext_name = to_lower_string(xextname(file_path));

    if(ext_name === "html" || ext_name === "htm") {
        return "text/html; charset=UTF-8";
    }
    else if(ext_name === "css") {
        return "text/css; charset=UTF-8";
    }
    else if(ext_name === "js" || ext_name === "mjs") {
        return "application/javascript; charset=UTF-8";
    }
    else if(ext_name === "json" || ext_name === "map") {
        return "application/json; charset=UTF-8";
    }
    else if(ext_name === "webmanifest") {
        return "application/manifest+json; charset=UTF-8";
    }
    else if(ext_name === "xml") {
        return "application/xml; charset=UTF-8";
    }
    else if(ext_name === "rss") {
        return "application/rss+xml; charset=UTF-8";
    }
    else if(ext_name === "atom") {
        return "application/atom+xml; charset=UTF-8";
    }
    else if(ext_name === "txt" || ext_name === "text" || ext_name === "log") {
        return "text/plain; charset=UTF-8";
    }
    else if(ext_name === "csv") {
        return "text/csv; charset=UTF-8";
    }
    else if(ext_name === "md" || ext_name === "markdown") {
        return "text/markdown; charset=UTF-8";
    }
    else if(ext_name === "yaml" || ext_name === "yml") {
        return "application/yaml; charset=UTF-8";
    }
    else if(ext_name === "jpg" || ext_name === "jpeg") {
        return "image/jpeg";
    }
    else if(ext_name === "png") {
        return "image/png";
    }
    else if(ext_name === "gif") {
        return "image/gif";
    }
    else if(ext_name === "avif") {
        return "image/avif";
    }
    else if(ext_name === "webp") {
        return "image/webp";
    }
    else if(ext_name === "bmp") {
        return "image/bmp";
    }
    else if(ext_name === "tif" || ext_name === "tiff") {
        return "image/tiff";
    }
    else if(ext_name === "svg") {
        return "image/svg+xml; charset=UTF-8";
    }
    else if(ext_name === "ico") {
        return "image/x-icon";
    }
    else if(ext_name === "pdf") {
        return "application/pdf";
    }
    else if(ext_name === "wasm") {
        return "application/wasm";
    }
    else if(ext_name === "woff") {
        return "font/woff";
    }
    else if(ext_name === "woff2") {
        return "font/woff2";
    }
    else if(ext_name === "ttf") {
        return "font/ttf";
    }
    else if(ext_name === "otf") {
        return "font/otf";
    }
    else if(ext_name === "eot") {
        return "application/vnd.ms-fontobject";
    }
    else if(ext_name === "zip") {
        return "application/zip";
    }
    else if(ext_name === "gz") {
        return "application/gzip";
    }
    else if(ext_name === "tar") {
        return "application/x-tar";
    }
    else if(ext_name === "tgz") {
        return "application/gzip";
    }
    else if(ext_name === "bz2") {
        return "application/x-bzip2";
    }
    else if(ext_name === "br") {
        return "application/x-brotli";
    }
    else if(ext_name === "7z") {
        return "application/x-7z-compressed";
    }
    else if(ext_name === "mp4") {
        return "video/mp4";
    }
    else if(ext_name === "webm") {
        return "video/webm";
    }
    else if(ext_name === "ogv") {
        return "video/ogg";
    }
    else if(ext_name === "mov") {
        return "video/quicktime";
    }
    else if(ext_name === "mpeg" || ext_name === "mpg") {
        return "video/mpeg";
    }
    else if(ext_name === "mp3") {
        return "audio/mpeg";
    }
    else if(ext_name === "wav") {
        return "audio/wav";
    }
    else if(ext_name === "ogg" || ext_name === "oga") {
        return "audio/ogg";
    }

    return "application/octet-stream";
}

bool is_binary_file(string file_path)
{
    return !is_text_like_content_type(get_content_type(file_path));
}

string build_static_metadata_headers(string file_path, long file_size, time_t modified_time)
{
    string etag = build_file_etag(file_size, modified_time);
    string last_modified = format_http_date(modified_time);
    var headers = new buffer();
    headers.append_str(xsprintf("ETag: %s\r\nLast-Modified: %s\r\nAccept-Ranges: bytes\r\n",
                                borrow etag, borrow last_modified));

    if(gStaticCacheControl != NULL) {
        headers.append_str(xsprintf("Cache-Control: %s\r\n", gStaticCacheControl));
    }

    return headers.to_string();
}

bool send_file_range_http(int it, int file_fd, long body_start, long content_length)
{
    off_t offset = body_start;
    long remaining = content_length;

    while(remaining > 0) {
        ssize_t sent = sendfile(it, file_fd, &offset, remaining);
        if(sent > 0) {
            remaining -= sent;
        }
        else if(sent == 0) {
            break;
        }
        else {
            if(errno == EINTR || errno == EAGAIN || errno == EWOULDBLOCK) {
                continue;
            }

            return false;
        }
    }

    return remaining == 0;
}

bool cgi_output_is_raw_response(string output)
{
    return output.match("^HTTP/") || output.match("^Status:") || output.match("^Location:") || output.match("^Content-Type:") || output.match("^Set-Cookie:");
}

string normalize_cgi_response(string output)
{
    if(output.match("^HTTP/")) {
        return output;
    }

    if(output.match("^Status: ([^\r\n]+)")) {
        string status = output.scan("^Status: ([^\r\n]+)")[0];
        char* p = strstr(output, "\r\n");
        if(p) {
            return xsprintf("HTTP/1.1 %s\r\n%s", status, p + 2);
        }

        return xsprintf("HTTP/1.1 %s\r\n\r\n", status);
    }

    if(output.match("^Location:")) {
        return xsprintf("HTTP/1.1 302 Found\r\n%s", output);
    }

    return xsprintf("HTTP/1.1 200 OK\r\n%s", output);
}

string extract_response_headers_only(string output)
{
    char* head = borrow output;
    char* p = strstr(output, "\r\n\r\n");
    if(p != null) {
        return create_range_string(head, (p - head) + 4);
    }

    return xsprintf("%s\r\n\r\n", output);
}

int extract_response_status_code(string output)
{
    string code = output.scan("^HTTP/[0-9.]+ ([0-9][0-9][0-9])")[0];
    if(code) {
        return atoi(code);
    }

    return 200;
}

long extract_response_body_size(string output)
{
    char* p = strstr(output, "\r\n\r\n");
    if(p == null) {
        return 0;
    }

    return strlen(p + 4);
}

string insert_response_headers(string output, const char* extra_headers)
{
    char* p = strstr(output, "\r\n\r\n");
    if(p != null) {
        string head = create_range_string(borrow output, p - borrow output);
        string body = (p + 4).to_string();
        return xsprintf("%s\r\n%s\r\n%s", borrow head, extra_headers, borrow body);
    }

    return xsprintf("%s\r\n%s\r\n", borrow output, extra_headers);
}

string add_connection_management_headers(string output)
{
    var extra = new buffer();

    if(get_header_value(output, "Connection") == null) {
        extra.append_str(xsprintf("Connection: %s\r\n", connection_header_value()));
    }

    if(gKeepAlive && !gCloseConnection && get_header_value(output, "Keep-Alive") == null) {
        extra.append_str(xsprintf("Keep-Alive: %s\r\n", keep_alive_header_value()));
    }

    if(extra.length() == 0) {
        return output;
    }

    return insert_response_headers(output, extra.to_string());
}

void clear_cgi_environment()
{
    while(true) {
        bool removed_header_env = false;

        for(char** p = environ; *p; p++) {
            if(strncmp(*p, "HTTP_", 5) == 0) {
                char* eq = strstr(*p, "=");
                if(eq != null) {
                    string env_name = create_range_string(*p, eq - *p);
                    unsetenv(env_name);
                    removed_header_env = true;
                    break;
                }
            }
        }

        if(!removed_header_env) {
            break;
        }
    }

    unsetenv("REQUEST_METHOD");
    unsetenv("QUERY_STRING");
    unsetenv("CONTENT_LENGTH");
    unsetenv("CONTENT_TYPE");
    unsetenv("REQUEST_URI");
    unsetenv("SCRIPT_NAME");
    unsetenv("PATH_INFO");
    unsetenv("SERVER_PROTOCOL");
    unsetenv("GATEWAY_INTERFACE");
    unsetenv("SERVER_SOFTWARE");
    unsetenv("SERVER_PORT");
    unsetenv("SERVER_NAME");
    unsetenv("DOCUMENT_ROOT");
    unsetenv("SCRIPT_FILENAME");
    unsetenv("REQUEST_SCHEME");
    unsetenv("REMOTE_ADDR");
    unsetenv("REMOTE_PORT");
    unsetenv("HTTPS");
}

void apply_http_headers_to_cgi_environment(string header)
{
    char* p = borrow header;

    while(*p) {
        char* line_head = p;
        char* line_end = strstr(p, "\r\n");

        if(line_end == null) {
            line_end = p + strlen(p);
        }

        char* colon = line_head;
        while(colon < line_end && *colon != ':') {
            colon++;
        }

        if(colon < line_end) {
            int header_name_len = colon - line_head;

            if(!header_name_equals_ignore_case(line_head, header_name_len, "Content-Length")
                && !header_name_equals_ignore_case(line_head, header_name_len, "Content-Type"))
            {
                string env_name = header_name_to_cgi_env_name(line_head, colon - line_head);
                if(env_name != null) {
                    string header_value = trim_header_value(colon + 1, line_end);
                    setenv(env_name, header_value, 1);
                }
            }
        }

        if(*line_end == '\0') {
            break;
        }

        p = line_end + 2;
    }
}

void configure_cgi_environment(char* method, string header, string request_target, string document_root, string script_path, string script_relative_path, string path_info, string query_string, string http_version)
{
    clear_cgi_environment();

    string real_document_root = canonical_existing_path(document_root);
    string real_script_path = canonical_existing_path(script_path);
    string host_header = get_host_header_value(header);
    string server_name = normalize_host_name(host_header);
    if(server_name == null) {
        server_name = xsprintf("");
    }

    setenv("REQUEST_METHOD", method, 1);
    setenv("QUERY_STRING", query_string, 1);
    setenv("REQUEST_URI", request_target, 1);
    setenv("SCRIPT_NAME", xsprintf("/%s", borrow script_relative_path), 1);
    setenv("SERVER_PROTOCOL", xsprintf("HTTP/%s", borrow http_version), 1);
    setenv("GATEWAY_INTERFACE", "CGI/1.1", 1);
    setenv("SERVER_SOFTWARE", gServerName, 1);
    setenv("SERVER_PORT", xsprintf("%d", gIsHttps ? gHttpsPort : gHttpPort), 1);
    setenv("SERVER_NAME", server_name, 1);
    setenv("DOCUMENT_ROOT", real_document_root != null ? real_document_root : document_root, 1);
    setenv("SCRIPT_FILENAME", real_script_path != null ? real_script_path : script_path, 1);
    setenv("REQUEST_SCHEME", gIsHttps ? "https" : "http", 1);
    setenv("REMOTE_ADDR", gRemoteAddr, 1);
    setenv("REMOTE_PORT", xsprintf("%d", gRemotePort), 1);
    setenv("HTTPS", gIsHttps ? "on" : "off", 1);

    if(path_info != null && *path_info != '\0') {
        setenv("PATH_INFO", path_info, 1);
    }

    string content_length_value = get_header_value(header, "Content-Length");
    if(content_length_value != null) {
        int content_length = parse_non_negative_number(content_length_value);
        if(content_length >= 0) {
            setenv("CONTENT_LENGTH", content_length_value, 1);
        }
    }

    string content_type = get_header_value(header, "Content-Type");
    if(content_type != null) {
        setenv("CONTENT_TYPE", content_type, 1);
    }

    apply_http_headers_to_cgi_environment(header);
}

int serve_static_file_http(int it, string file_path, string header)
{
    if(!is_readable_static_file(file_path)) {
        if(access(file_path, F_OK) == 0) {
            send_forbidden_http(it);
            return 403;
        }

        send_not_found_http(it);
        return 404;
    }

    struct stat stat_;
    if(stat(file_path, &stat_) != 0) {
        send_not_found_http(it);
        return 404;
    }

    string metadata_headers = build_static_metadata_headers(file_path, stat_.st_size, stat_.st_mtime);

    if(request_matches_not_modified(header, stat_.st_size, stat_.st_mtime)) {
        send_empty_response_http(it, "304 Not Modified", borrow metadata_headers);
        return 304;
    }

    var range_start, range_end, range_status = parse_range_request(header, stat_.st_size);
    if(range_status == 2) {
        string range_headers = xsprintf("%sContent-Range: bytes */%ld\r\n", borrow metadata_headers, stat_.st_size);
        send_error_response_http(it, 416, "416 Range Not Satisfiable",
                                 "<html><body><h1>416 Range Not Satisfiable</h1></body></html>",
                                 borrow range_headers);
        return 416;
    }

    if(range_status == 1 || is_binary_file(file_path)) {
        int file_fd = open(file_path, O_RDONLY);
        if(file_fd < 0) {
            send_not_found_http(it);
            return 404;
        }

        long body_start = 0;
        long body_end = stat_.st_size - 1;
        const char* status = "200 OK";
        string extra_headers = metadata_headers;

        if(range_status == 1) {
            body_start = range_start;
            body_end = range_end;
            status = "206 Partial Content";
            extra_headers = xsprintf("%sContent-Range: bytes %ld-%ld/%ld\r\n",
                                     borrow metadata_headers, body_start, body_end, stat_.st_size);
        }

        long content_length = body_end - body_start + 1;
        string standard_headers = build_standard_headers(extra_headers);
        string response_header = xsprintf("HTTP/1.1 %s\r\nContent-Type: %s\r\nContent-Length: %ld\r\nConnection: %s\r\n%s\r\n",
                                          status, get_content_type(file_path), content_length, connection_header_value(),
                                          borrow standard_headers);
        write_http_data(it, response_header, strlen(response_header));
        set_response_body_bytes(gHeadRequest ? 0 : content_length);

        if(!gHeadRequest) {
            send_file_range_http(it, file_fd, body_start, content_length);
        }

        close(file_fd);
        return range_status == 1 ? 206 : 200;
    }

    FILE* text_file = xfopen(file_path, "r")!;
    buffer*% file_buf = text_file.fread()!;
    string file_contents = file_buf.to_string();
    text_file.fclose()!;
    string file_contents2 = parse_html(file_contents);
    send_text_response_http(it, "200 OK", get_content_type(file_path), borrow file_contents2, strlen(file_contents2), borrow metadata_headers);
    return 200;
}

int serve_static_file_https(SSL* it, string file_path, string header)
{
    if(!is_readable_static_file(file_path)) {
        if(access(file_path, F_OK) == 0) {
            send_forbidden_https(it);
            return 403;
        }
        else {
            send_not_found_https(it);
            return 404;
        }
    }

    struct stat stat_;
    if(stat(file_path, &stat_) != 0) {
        send_not_found_https(it);
        return 404;
    }

    string metadata_headers = build_static_metadata_headers(file_path, stat_.st_size, stat_.st_mtime);

    if(request_matches_not_modified(header, stat_.st_size, stat_.st_mtime)) {
        send_empty_response_https(it, "304 Not Modified", borrow metadata_headers);
        return 304;
    }

    var range_start, range_end, range_status = parse_range_request(header, stat_.st_size);
    if(range_status == 2) {
        string range_headers = xsprintf("%sContent-Range: bytes */%ld\r\n", borrow metadata_headers, stat_.st_size);
        send_error_response_https(it, 416, "416 Range Not Satisfiable",
                                  "<html><body><h1>416 Range Not Satisfiable</h1></body></html>",
                                  borrow range_headers);
        return 416;
    }

    if(range_status == 1 || is_binary_file(file_path)) {
        FILE *file = fopen(file_path, "rb");
        if(file == NULL) {
            send_not_found_https(it);
            return 404;
        }

        long body_start = 0;
        long body_end = stat_.st_size - 1;
        const char* status = "200 OK";
        string extra_headers = metadata_headers;

        if(range_status == 1) {
            body_start = range_start;
            body_end = range_end;
            status = "206 Partial Content";
            extra_headers = xsprintf("%sContent-Range: bytes %ld-%ld/%ld\r\n",
                                     borrow metadata_headers, body_start, body_end, stat_.st_size);
        }

        long content_length = body_end - body_start + 1;
        string standard_headers = build_standard_headers(extra_headers);
        string response_header = xsprintf("HTTP/1.1 %s\r\nContent-Type: %s\r\nContent-Length: %ld\r\nConnection: %s\r\n%s\r\n",
                                          status, get_content_type(file_path), content_length, connection_header_value(),
                                          borrow standard_headers);
        write_https_data(it, response_header, strlen(response_header));
        set_response_body_bytes(gHeadRequest ? 0 : content_length);

        if(!gHeadRequest) {
            fseek(file, body_start, SEEK_SET);

            long remaining = content_length;
            char buf[1024];
            while(remaining > 0) {
                size_t chunk_size = remaining > (long)sizeof(buf) ? sizeof(buf) : remaining;
                size_t bytes_read = fread(buf, 1, chunk_size, file);
                if(bytes_read == 0) {
                    break;
                }

                write_https_data(it, buf, bytes_read);
                remaining -= bytes_read;
            }
        }

        fclose(file);
        return range_status == 1 ? 206 : 200;
    }

    FILE* text_file = xfopen(file_path, "r")!;
    buffer*% file_buf = text_file.fread()!;
    string file_contents = file_buf.to_string();
    text_file.fclose()!;
    string file_contents2 = parse_html(file_contents);
    send_text_response_https(it, "200 OK", get_content_type(file_path), borrow file_contents2, strlen(file_contents2), borrow metadata_headers);
    return 200;
}

int run_post_cgi(SSL* it, string file_path, string document_root, string header, string contents, string request_target, string script_relative_path, string path_info, string query_string, string http_version)
{
    configure_cgi_environment("POST", header, request_target, document_root, file_path, script_relative_path, path_info, query_string, http_version);
    
    char* argv[] = { file_path, NULL };
    
    var output,error_output,err = xpopen(argv, contents);
    log_cgi_stderr(file_path, error_output);
    if(err == 2) {
        send_gateway_timeout_https(it);
        return 504;
    }
    else if(err == 3) {
        send_bad_gateway_https(it);
        return 502;
    }
    else if(err != 0) {
        send_internal_server_error_https(it);
        return 500;
    }
    else if(cgi_output_is_raw_response(output)) {
        string response_output = normalize_cgi_response(output);

        if(gHeadRequest) {
            response_output = extract_response_headers_only(response_output);
        }
        else if(response_has_connection_close(response_output) || !response_has_length_or_chunked(response_output)) {
            gCloseConnection = true;
        }

        response_output = add_connection_management_headers(response_output);
        set_response_body_bytes(gHeadRequest ? 0 : extract_response_body_size(response_output));
        write_https_data(it, response_output, strlen(response_output));
        return extract_response_status_code(response_output);
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        send_text_response_https(it, "200 OK", "text/html; charset=UTF-8", borrow file_contents2, strlen(file_contents2));
        return 200;
    }
}

int run_post_cgi_http(int it, string file_path, string document_root, string header, string contents, string request_target, string script_relative_path, string path_info, string query_string, string http_version)
{
    configure_cgi_environment("POST", header, request_target, document_root, file_path, script_relative_path, path_info, query_string, http_version);
    
    char* argv[] = { file_path, NULL };
    
    var output,error_output,err = xpopen(argv, contents);
    log_cgi_stderr(file_path, error_output);
    if(err == 2) {
        send_gateway_timeout_http(it);
        return 504;
    }
    else if(err == 3) {
        send_bad_gateway_http(it);
        return 502;
    }
    else if(err != 0) {
        send_internal_server_error_http(it);
        return 500;
    }
    else if(cgi_output_is_raw_response(output)) {
        string response_output = normalize_cgi_response(output);

        if(gHeadRequest) {
            response_output = extract_response_headers_only(response_output);
        }
        else if(response_has_connection_close(response_output) || !response_has_length_or_chunked(response_output)) {
            gCloseConnection = true;
        }

        response_output = add_connection_management_headers(response_output);
        set_response_body_bytes(gHeadRequest ? 0 : extract_response_body_size(response_output));
        write_http_data(it, response_output, strlen(response_output));
        return extract_response_status_code(response_output);
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        send_text_response_http(it, "200 OK", "text/html; charset=UTF-8", borrow file_contents2, strlen(file_contents2));
        return 200;
    }
}

int run_get_cgi(SSL* it, string cgi_path, string document_root, string header, string contents, string query_string, string method, string request_target, string script_relative_path, string path_info, string http_version)
{
    configure_cgi_environment(borrow method, header, request_target, document_root, cgi_path, script_relative_path, path_info, query_string, http_version);
    
    char* argv[] = { cgi_path, NULL };
    var output,error_output,err = xpopen(argv, xsprintf(""));
    log_cgi_stderr(cgi_path, error_output);

    if(err == 2) {
        send_gateway_timeout_https(it);
        return 504;
    }
    else if(err == 3) {
        send_bad_gateway_https(it);
        return 502;
    }
    else if(err != 0) {
        send_internal_server_error_https(it);
        return 500;
    }
    else if(cgi_output_is_raw_response(output)) {
        string response_output = normalize_cgi_response(output);

        if(gHeadRequest) {
            response_output = extract_response_headers_only(response_output);
        }
        else if(response_has_connection_close(response_output) || !response_has_length_or_chunked(response_output)) {
            gCloseConnection = true;
        }

        response_output = add_connection_management_headers(response_output);
        set_response_body_bytes(gHeadRequest ? 0 : extract_response_body_size(response_output));
        write_https_data(it, response_output, strlen(response_output));
        return extract_response_status_code(response_output);
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        send_text_response_https(it, "200 OK", "text/html; charset=UTF-8", borrow file_contents2, strlen(file_contents2));
        return 200;
    }
}

int run_get_cgi_http(int it, string cgi_path, string document_root, string header, string contents, string query_string, string method, string request_target, string script_relative_path, string path_info, string http_version)
{
    configure_cgi_environment(borrow method, header, request_target, document_root, cgi_path, script_relative_path, path_info, query_string, http_version);
    
    char* argv[] = { cgi_path, NULL };
    var output,error_output,err = xpopen(argv, xsprintf(""));
    log_cgi_stderr(cgi_path, error_output);

    if(err == 2) {
        send_gateway_timeout_http(it);
        return 504;
    }
    else if(err == 3) {
        send_bad_gateway_http(it);
        return 502;
    }
    else if(err != 0) {
        send_internal_server_error_http(it);
        return 500;
    }
    else if(cgi_output_is_raw_response(output)) {
        string response_output = normalize_cgi_response(output);

        if(gHeadRequest) {
            response_output = extract_response_headers_only(response_output);
        }
        else if(response_has_connection_close(response_output) || !response_has_length_or_chunked(response_output)) {
            gCloseConnection = true;
        }

        response_output = add_connection_management_headers(response_output);
        set_response_body_bytes(gHeadRequest ? 0 : extract_response_body_size(response_output));
        write_http_data(it, response_output, strlen(response_output));
        return extract_response_status_code(response_output);
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        send_text_response_http(it, "200 OK", "text/html; charset=UTF-8", borrow file_contents2, strlen(file_contents2));
        return 200;
    }
}

void initialize_modules()
{
}

void finalize_modules()
{
}

string trim_config_text(char* head)
{
    char* tail = head + strlen(head);

    while(head < tail && isspace((unsigned char)*head)) {
        head++;
    }

    while(tail > head && isspace((unsigned char)*(tail - 1))) {
        tail--;
    }

    return create_range_string(head, tail - head);
}

bool config_value_is_true(string value)
{
    string lower_value = to_lower_string(value);
    return lower_value === "1" || lower_value === "true" || lower_value === "yes" || lower_value === "on";
}

bool config_value_is_false(string value)
{
    string lower_value = to_lower_string(value);
    return lower_value === "0" || lower_value === "false" || lower_value === "no" || lower_value === "off";
}

bool parse_config_bool(string value, bool* result)
{
    if(config_value_is_true(value)) {
        *result = true;
        return true;
    }
    if(config_value_is_false(value)) {
        *result = false;
        return true;
    }

    return false;
}

const char* duplicate_option_value(string value)
{
    char* duplicated = strdup(value);
    if(duplicated == NULL) {
        fprintf(stderr, "strdup failed\n");
        exit(1);
    }

    return duplicated;
}

bool set_document_root_option(string value)
{
    if(!is_existing_directory(value)) {
        fprintf(stderr, "document root is not a directory: %s\n", borrow value);
        return false;
    }

    gDocumentRoot = duplicate_option_value(value);
    return true;
}

bool set_port_option(string value, int* port)
{
    int parsed_port = parse_non_negative_number(value);
    if(parsed_port <= 0 || parsed_port > 65535) {
        fprintf(stderr, "invalid port: %s\n", borrow value);
        return false;
    }

    *port = parsed_port;
    return true;
}

bool set_non_negative_config_int(string value, int* target, const char* name)
{
    int parsed_value = parse_non_negative_number(value);
    if(parsed_value < 0) {
        fprintf(stderr, "invalid %s: %s\n", name, borrow value);
        return false;
    }

    *target = parsed_value;
    return true;
}

bool set_error_page_option(int status_code, string path)
{
    const char* duplicated_path = duplicate_option_value(path);

    switch(status_code) {
        case 400: gErrorPage400 = duplicated_path; return true;
        case 403: gErrorPage403 = duplicated_path; return true;
        case 404: gErrorPage404 = duplicated_path; return true;
        case 405: gErrorPage405 = duplicated_path; return true;
        case 408: gErrorPage408 = duplicated_path; return true;
        case 413: gErrorPage413 = duplicated_path; return true;
        case 414: gErrorPage414 = duplicated_path; return true;
        case 416: gErrorPage416 = duplicated_path; return true;
        case 431: gErrorPage431 = duplicated_path; return true;
        case 500: gErrorPage500 = duplicated_path; return true;
        case 502: gErrorPage502 = duplicated_path; return true;
        case 504: gErrorPage504 = duplicated_path; return true;
        case 505: gErrorPage505 = duplicated_path; return true;
    }

    fprintf(stderr, "unsupported error page status: %d\n", status_code);
    return false;
}

bool set_error_page_from_value(string value, const char* source_path, int line_number)
{
    char* p = borrow value;
    while(*p && isspace((unsigned char)*p)) {
        p++;
    }

    char* code_head = p;
    while(*p && !isspace((unsigned char)*p)) {
        p++;
    }

    string code_text = create_range_string(code_head, p - code_head);
    int status_code = parse_non_negative_number(code_text);
    if(status_code < 0) {
        fprintf(stderr, "%s:%d: error_page requires a numeric status code\n", source_path, line_number);
        return false;
    }

    while(*p && isspace((unsigned char)*p)) {
        p++;
    }

    string path = trim_config_text(p);
    if(path == null || path === "") {
        fprintf(stderr, "%s:%d: error_page requires a path\n", source_path, line_number);
        return false;
    }

    return set_error_page_option(status_code, path);
}

bool set_error_page_from_key_suffix(string lower_key, string value, const char* source_path, int line_number)
{
    char* p = borrow lower_key;
    char* suffix = strstr(p, "error_page_");
    if(suffix == NULL) {
        suffix = strstr(p, "error-page-");
    }
    if(suffix == NULL) {
        return false;
    }

    suffix += 11;
    int status_code = parse_non_negative_number(xsprintf("%s", suffix));
    if(status_code < 0) {
        fprintf(stderr, "%s:%d: invalid error page status in %s\n", source_path, line_number, borrow lower_key);
        return false;
    }

    return set_error_page_option(status_code, value);
}

bool apply_config_directive(string key, string value, bool* http, const char* source_path, int line_number)
{
    string lower_key = to_lower_string(key);

    if(value == null || value === "") {
        fprintf(stderr, "%s:%d: missing value for %s\n", source_path, line_number, borrow key);
        return false;
    }

    if(lower_key === "mode") {
        string lower_value = to_lower_string(value);
        if(lower_value === "http") {
            *http = true;
            return true;
        }
        if(lower_value === "https") {
            *http = false;
            return true;
        }

        fprintf(stderr, "%s:%d: mode must be http or https\n", source_path, line_number);
        return false;
    }
    else if(lower_key === "port") {
        return set_port_option(value, *http ? &gHttpPort : &gHttpsPort);
    }
    else if(lower_key === "http_port" || lower_key === "http-port") {
        return set_port_option(value, &gHttpPort);
    }
    else if(lower_key === "https_port" || lower_key === "https-port") {
        return set_port_option(value, &gHttpsPort);
    }
    else if(lower_key === "root" || lower_key === "document_root" || lower_key === "document-root") {
        return set_document_root_option(value);
    }
    else if(lower_key === "autoindex" || lower_key === "auto_index" || lower_key === "auto-index") {
        bool enabled = false;
        if(!parse_config_bool(value, &enabled)) {
            fprintf(stderr, "%s:%d: autoindex must be on/off, true/false, yes/no, or 1/0\n", source_path, line_number);
            return false;
        }
        gAutoIndex = enabled;
        return true;
    }
    else if(lower_key === "access_log" || lower_key === "access-log") {
        string lower_value = to_lower_string(value);
        if(lower_value === "-" || lower_value === "stdout") {
            gAccessLogPath = NULL;
        }
        else {
            gAccessLogPath = duplicate_option_value(value);
        }
        return true;
    }
    else if(lower_key === "error_log" || lower_key === "error-log") {
        string lower_value = to_lower_string(value);
        if(lower_value === "-" || lower_value === "stderr") {
            gErrorLogPath = NULL;
        }
        else {
            gErrorLogPath = duplicate_option_value(value);
        }
        return true;
    }
    else if(lower_key === "cgi_timeout" || lower_key === "cgi-timeout") {
        return set_non_negative_config_int(value, &gCgiTimeoutSeconds, "cgi_timeout");
    }
    else if(lower_key === "cgi_output_limit" || lower_key === "cgi-output-limit") {
        return set_non_negative_config_int(value, &gCgiOutputLimit, "cgi_output_limit");
    }
    else if(lower_key === "cache_control" || lower_key === "cache-control") {
        string lower_value = to_lower_string(value);
        if(lower_value === "-" || lower_value === "off") {
            gStaticCacheControl = NULL;
        }
        else {
            gStaticCacheControl = duplicate_option_value(value);
        }
        return true;
    }
    else if(lower_key === "error_page" || lower_key === "error-page") {
        return set_error_page_from_value(value, source_path, line_number);
    }
    else if(lower_key.match("^error[_-]page[_-][0-9]+$")) {
        return set_error_page_from_key_suffix(lower_key, value, source_path, line_number);
    }

    fprintf(stderr, "%s:%d: unknown directive: %s\n", source_path, line_number, borrow key);
    return false;
}

tuple2<string, string>*% parse_config_line(char* line)
{
    char* comment = strchr(line, '#');
    if(comment != NULL) {
        *comment = '\0';
    }

    char* p = line;
    while(*p && isspace((unsigned char)*p)) {
        p++;
    }

    if(*p == '\0') {
        return t((string)null, (string)null);
    }

    char* key_head = p;
    while(*p && !isspace((unsigned char)*p) && *p != '=') {
        p++;
    }

    string key = create_range_string(key_head, p - key_head);

    while(*p && isspace((unsigned char)*p)) {
        p++;
    }
    if(*p == '=') {
        p++;
    }

    string value = trim_config_text(p);
    return t(key, value);
}

bool load_server_config(const char* path, bool required, bool* http)
{
    FILE* file = fopen(path, "r");
    if(file == NULL) {
        if(required) {
            perror(path);
            return false;
        }
        return true;
    }

    char line[4096];
    int line_number = 0;
    while(fgets(line, sizeof(line), file) != NULL) {
        line_number++;

        var key, value = parse_config_line(line);
        if(key == null) {
            continue;
        }

        if(!apply_config_directive(key, value, http, path, line_number)) {
            fclose(file);
            return false;
        }
    }

    fclose(file);
    return true;
}

const char* find_config_path_from_argv(int argc, char** argv, bool* explicit_config)
{
    *explicit_config = false;

    for(int i=1; i<argc; i++) {
        if(argv[i] === "-config") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-config requires a file path\n");
                return NULL;
            }

            *explicit_config = true;
            return argv[i + 1];
        }
    }

    return gConfigPath;
}

void print_usage(const char* program_name)
{
    printf("usage: %s [-config FILE] [-http|-https] [-port PORT] [-root DIR] [-autoindex] [-access-log FILE] [-error-log FILE] [-error-page CODE FILE] [-cache-control VALUE] [-cgi-timeout SEC] [-cgi-output-limit BYTES]\n", program_name);
    printf("  -config FILE load server options from FILE, default webweb.conf if present\n");
    printf("  -http        listen with plain HTTP, default port 8080\n");
    printf("  -https       listen with HTTPS, default port 443\n");
    printf("  -port PORT   override the listen port for the selected mode\n");
    printf("  -root DIR    serve files from DIR and vhosts from DIR/vhosts\n");
    printf("  -autoindex   list directories that do not have index.html or index.htm\n");
    printf("  -access-log FILE   append access logs to FILE instead of stdout\n");
    printf("  -error-log FILE    append server and CGI stderr logs to FILE instead of stderr\n");
    printf("  -error-page CODE FILE   use FILE as the response body for CODE\n");
    printf("  -cache-control VALUE    add Cache-Control to static file responses, off disables\n");
    printf("  -cgi-timeout SEC   kill CGI after SEC seconds, 0 disables timeout\n");
    printf("  -cgi-output-limit BYTES   kill CGI after stdout exceeds BYTES, 0 disables limit\n");
}

bool parse_server_options(int argc, char** argv, bool* http)
{
    int configured_port = 0;

    for(int i=1; i<argc; i++) {
        if(argv[i] === "-http") {
            *http = true;
        }
        else if(argv[i] === "-https") {
            *http = false;
        }
        else if(argv[i] === "-config") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-config requires a file path\n");
                return false;
            }

            i++;
        }
        else if(argv[i] === "-port") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-port requires a port number\n");
                return false;
            }

            configured_port = atoi(argv[++i]);
            if(configured_port <= 0 || configured_port > 65535) {
                fprintf(stderr, "invalid port: %s\n", argv[i]);
                return false;
            }
        }
        else if(argv[i] === "-root") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-root requires a directory\n");
                return false;
            }

            if(!set_document_root_option(xsprintf("%s", argv[++i]))) {
                return false;
            }
        }
        else if(argv[i] === "-autoindex") {
            gAutoIndex = true;
        }
        else if(argv[i] === "-access-log") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-access-log requires a file path\n");
                return false;
            }

            gAccessLogPath = duplicate_option_value(xsprintf("%s", argv[++i]));
        }
        else if(argv[i] === "-error-log") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-error-log requires a file path\n");
                return false;
            }

            string path = xsprintf("%s", argv[++i]);
            if(path === "-" || path === "stderr") {
                gErrorLogPath = NULL;
            }
            else {
                gErrorLogPath = duplicate_option_value(path);
            }
        }
        else if(argv[i] === "-error-page") {
            if(i + 2 >= argc) {
                fprintf(stderr, "-error-page requires a status code and file path\n");
                return false;
            }

            int status_code = parse_non_negative_number(xsprintf("%s", argv[++i]));
            if(status_code < 0) {
                fprintf(stderr, "invalid error page status: %s\n", argv[i]);
                return false;
            }

            if(!set_error_page_option(status_code, xsprintf("%s", argv[++i]))) {
                return false;
            }
        }
        else if(argv[i] === "-cache-control") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-cache-control requires a header value\n");
                return false;
            }

            string value = xsprintf("%s", argv[++i]);
            if(value === "-" || value === "off") {
                gStaticCacheControl = NULL;
            }
            else {
                gStaticCacheControl = duplicate_option_value(value);
            }
        }
        else if(argv[i] === "-cgi-timeout") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-cgi-timeout requires seconds\n");
                return false;
            }

            if(!set_non_negative_config_int(xsprintf("%s", argv[++i]), &gCgiTimeoutSeconds, "cgi-timeout")) {
                return false;
            }
        }
        else if(argv[i] === "-cgi-output-limit") {
            if(i + 1 >= argc) {
                fprintf(stderr, "-cgi-output-limit requires bytes\n");
                return false;
            }

            if(!set_non_negative_config_int(xsprintf("%s", argv[++i]), &gCgiOutputLimit, "cgi-output-limit")) {
                return false;
            }
        }
        else if(argv[i] === "-help" || argv[i] === "--help") {
            print_usage(argv[0]);
            exit(0);
        }
        else {
            fprintf(stderr, "unknown option: %s\n", argv[i]);
            print_usage(argv[0]);
            return false;
        }
    }

    if(configured_port > 0) {
        if(*http) {
            gHttpPort = configured_port;
        }
        else {
            gHttpsPort = configured_port;
        }
    }

    return true;
}

void process_http_client(int it)
{
    var request_buffer = new buffer();
    gIsHttps = false;
    set_remote_client_info(it);

    while(true) {
        set_client_timeout(it);

        gKeepAlive = false;
        gCloseConnection = false;
        gHeadRequest = false;

        string method = xsprintf("-");
        string request_target = xsprintf("-");
        int status_code = 0;
        gResponseBodyBytes = 0;
        gCurrentHttpVersion = "-";
        gCurrentReferer = "-";
        gCurrentUserAgent = "-";

        var header, contents, request_err = read_http_request(it, request_buffer);

        if(request_err == 2) {
            break;
        }

        if(request_err == 3) {
            send_request_timeout_http(it);
            log_access("HTTP", method, request_target, 408);
            break;
        }

        if(request_err == 4) {
            send_payload_too_large_http(it);
            log_access("HTTP", method, request_target, 413);
            break;
        }

        if(request_err == 5) {
            send_request_header_fields_too_large_http(it);
            log_access("HTTP", method, request_target, 431);
            break;
        }

        if(request_err != 0) {
            send_bad_request_http(it);
            log_access("HTTP", method, request_target, 400);
            break;
        }

        if(request_line_target_too_long(header)) {
            send_uri_too_long_http(it);
            log_access("HTTP", method, request_target, 414);
            break;
        }

        var parsed_method, parsed_target, http_version = parse_request_line(header);
        if(parsed_method == null || parsed_target == null || http_version == null) {
            send_bad_request_http(it);
            log_access("HTTP", method, request_target, 400);
            break;
        }

        method = parsed_method;
        request_target = parsed_target;
        gCurrentHttpVersion = duplicate_option_value(http_version);
        string referer_header = get_header_value(header, "Referer");
        string user_agent_header = get_header_value(header, "User-Agent");
        gCurrentReferer = referer_header != null ? duplicate_option_value(referer_header) : "-";
        gCurrentUserAgent = user_agent_header != null ? duplicate_option_value(user_agent_header) : "-";

        if(!is_supported_http_version(http_version)) {
            send_http_version_not_supported_http(it);
            log_access("HTTP", method, request_target, 505);
            break;
        }

        if(is_too_long_uri(parsed_target)) {
            send_uri_too_long_http(it);
            log_access("HTTP", method, request_target, 414);
            break;
        }

        gKeepAlive = request_should_keep_alive(http_version, header);
        gAcceptGzip = request_accepts_gzip(header);
        gHeadRequest = parsed_method === "HEAD";

        if(parsed_method !== "GET" && parsed_method !== "POST" && parsed_method !== "HEAD" && parsed_method !== "OPTIONS") {
            send_method_not_allowed_http(it);
            status_code = 405;
        }
        else {
            string host_header = get_host_header_value(header);
            string document_root = resolve_document_root(host_header);
            if(document_root != null) {
                gActiveDocumentRoot = duplicate_option_value(document_root);
            }

            if(http_version === "1.1" && host_header == null) {
                send_bad_request_http(it);
                status_code = 400;
            }
            else if(document_root == null) {
                send_bad_request_http(it);
                status_code = 400;
            }
            else if(parsed_method === "OPTIONS" && parsed_target === "*") {
                send_options_response_http(it, allow_header_all_methods());
                status_code = 204;
            }
            else {
                var relative_path, query_string = parse_request_target(parsed_target);

                if(relative_path == null) {
                    send_bad_request_http(it);
                    status_code = 400;
                }
                else {
                    var cgi_relative_path, path_info = split_cgi_path_info(relative_path);
                    bool cgi_request = cgi_relative_path != null;
                    string resolved_relative_path = cgi_request ? cgi_relative_path : relative_path;
                    string file_path = build_file_path(document_root, resolved_relative_path);
                    string ext_name = xextname(file_path);

                    if(request_path_forbidden(document_root, file_path)) {
                        send_forbidden_http(it);
                        status_code = 403;
                    }
                    else if(parsed_method === "OPTIONS") {
                        if(cgi_request) {
                            if(is_executable_cgi(file_path)) {
                                send_options_response_http(it, allow_header_cgi_methods());
                                status_code = 204;
                            }
                            else if(access(file_path, F_OK) == 0) {
                                send_forbidden_http(it);
                                status_code = 403;
                            }
                            else {
                                send_not_found_http(it);
                                status_code = 404;
                            }
                        }
                        else if(is_existing_directory(file_path) || is_readable_static_file(file_path)) {
                            send_options_response_http(it, allow_header_static_methods());
                            status_code = 204;
                        }
                        else if(access(file_path, F_OK) == 0) {
                            send_forbidden_http(it);
                            status_code = 403;
                        }
                        else {
                            send_not_found_http(it);
                            status_code = 404;
                        }
                    }
                    else if(parsed_method === "GET" || parsed_method === "HEAD") {
                        if(cgi_request) {
                            if(is_executable_cgi(file_path)) {
                                status_code = run_get_cgi_http(it, file_path, document_root, header, contents, query_string, parsed_method, parsed_target, cgi_relative_path, path_info, http_version);
                            }
                            else if(access(file_path, F_OK) == 0) {
                                send_forbidden_http(it);
                                status_code = 403;
                            }
                            else {
                                send_not_found_http(it);
                                status_code = 404;
                            }
                        }
                        else {
                            if(is_existing_directory(file_path)) {
                                string index_path = resolve_directory_index_path(file_path);

                                if(!request_target_has_trailing_slash(parsed_target)) {
                                    string location = build_directory_redirect_target(parsed_target);
                                    send_directory_redirect_http(it, location);
                                    status_code = 301;
                                }
                                else if(index_path != null) {
                                    status_code = serve_static_file_http(it, index_path, header);
                                }
                                else if(gAutoIndex) {
                                    status_code = send_autoindex_http(it, file_path, parsed_target);
                                }
                                else if(access(file_path, F_OK) == 0) {
                                    send_forbidden_http(it);
                                    status_code = 403;
                                }
                                else {
                                    send_not_found_http(it);
                                    status_code = 404;
                                }
                            }
                            else if(is_readable_static_file(file_path)) {
                                status_code = serve_static_file_http(it, file_path, header);
                            }
                            else if(access(file_path, F_OK) == 0) {
                                send_forbidden_http(it);
                                status_code = 403;
                            }
                            else {
                                send_not_found_http(it);
                                status_code = 404;
                            }
                        }
                    }
                    else {
                        if(!cgi_request) {
                            if(access(file_path, F_OK) == 0) {
                                send_method_not_allowed_http_with_allow(it, allow_header_static_methods());
                                status_code = 405;
                            }
                            else {
                                send_not_found_http(it);
                                status_code = 404;
                            }
                        }
                        else if(is_executable_cgi(file_path)) {
                            status_code = run_post_cgi_http(it, file_path, document_root, header, contents, parsed_target, cgi_relative_path, path_info, query_string, http_version);
                        }
                        else if(access(file_path, F_OK) == 0) {
                            send_forbidden_http(it);
                            status_code = 403;
                        }
                        else {
                            send_not_found_http(it);
                            status_code = 404;
                        }
                    }
                }
            }

            log_access("HTTP", method, request_target, status_code);
        }

        if(!gKeepAlive || gCloseConnection) {
            break;
        }
    }

    int fd = it;
    close(fd);
}

void process_https_client(SSL* it)
{
    var request_buffer = new buffer();
    gIsHttps = true;
    set_remote_client_info(SSL_get_fd(it));

    while(true) {
        set_client_timeout(SSL_get_fd(it));

        gKeepAlive = false;
        gCloseConnection = false;
        gHeadRequest = false;

        string method = xsprintf("-");
        string request_target = xsprintf("-");
        int status_code = 0;
        gResponseBodyBytes = 0;
        gCurrentHttpVersion = "-";
        gCurrentReferer = "-";
        gCurrentUserAgent = "-";

        var header, contents, request_err = read_https_request(it, request_buffer);

        if(request_err == 2) {
            break;
        }

        if(request_err == 3) {
            send_request_timeout_https(it);
            log_access("HTTPS", method, request_target, 408);
            break;
        }

        if(request_err == 4) {
            send_payload_too_large_https(it);
            log_access("HTTPS", method, request_target, 413);
            break;
        }

        if(request_err == 5) {
            send_request_header_fields_too_large_https(it);
            log_access("HTTPS", method, request_target, 431);
            break;
        }

        if(request_err != 0) {
            send_bad_request_https(it);
            log_access("HTTPS", method, request_target, 400);
            break;
        }

        if(request_line_target_too_long(header)) {
            send_uri_too_long_https(it);
            log_access("HTTPS", method, request_target, 414);
            break;
        }

        var parsed_method, parsed_target, http_version = parse_request_line(header);
        if(parsed_method == null || parsed_target == null || http_version == null) {
            send_bad_request_https(it);
            log_access("HTTPS", method, request_target, 400);
            break;
        }

        method = parsed_method;
        request_target = parsed_target;
        gCurrentHttpVersion = duplicate_option_value(http_version);
        string referer_header = get_header_value(header, "Referer");
        string user_agent_header = get_header_value(header, "User-Agent");
        gCurrentReferer = referer_header != null ? duplicate_option_value(referer_header) : "-";
        gCurrentUserAgent = user_agent_header != null ? duplicate_option_value(user_agent_header) : "-";

        if(!is_supported_http_version(http_version)) {
            send_http_version_not_supported_https(it);
            log_access("HTTPS", method, request_target, 505);
            break;
        }

        if(is_too_long_uri(parsed_target)) {
            send_uri_too_long_https(it);
            log_access("HTTPS", method, request_target, 414);
            break;
        }

        gKeepAlive = request_should_keep_alive(http_version, header);
        gAcceptGzip = request_accepts_gzip(header);
        gHeadRequest = parsed_method === "HEAD";

        if(parsed_method !== "GET" && parsed_method !== "POST" && parsed_method !== "HEAD" && parsed_method !== "OPTIONS") {
            send_method_not_allowed_https(it);
            status_code = 405;
        }
        else {
            string host_header = get_host_header_value(header);
            string document_root = resolve_document_root(host_header);
            if(document_root != null) {
                gActiveDocumentRoot = duplicate_option_value(document_root);
            }

            if(http_version === "1.1" && host_header == null) {
                status_code = 400;
                send_bad_request_https(it);
            }
            else if(document_root == null) {
                status_code = 400;
                send_bad_request_https(it);
            }
            else if(parsed_method === "OPTIONS" && parsed_target === "*") {
                send_options_response_https(it, allow_header_all_methods());
                status_code = 204;
            }
            else {
                var relative_path, query_string = parse_request_target(parsed_target);

                if(relative_path == null) {
                    send_bad_request_https(it);
                    status_code = 400;
                }
                else {
                    var cgi_relative_path, path_info = split_cgi_path_info(relative_path);
                    bool cgi_request = cgi_relative_path != null;
                    string resolved_relative_path = cgi_request ? cgi_relative_path : relative_path;
                    string file_path = build_file_path(document_root, resolved_relative_path);
                    string ext_name = xextname(file_path);

                    if(request_path_forbidden(document_root, file_path)) {
                        send_forbidden_https(it);
                        status_code = 403;
                    }
                    else if(parsed_method === "OPTIONS") {
                        if(cgi_request) {
                            if(is_executable_cgi(file_path)) {
                                send_options_response_https(it, allow_header_cgi_methods());
                                status_code = 204;
                            }
                            else if(access(file_path, F_OK) == 0) {
                                send_forbidden_https(it);
                                status_code = 403;
                            }
                            else {
                                send_not_found_https(it);
                                status_code = 404;
                            }
                        }
                        else if(is_existing_directory(file_path) || is_readable_static_file(file_path)) {
                            send_options_response_https(it, allow_header_static_methods());
                            status_code = 204;
                        }
                        else if(access(file_path, F_OK) == 0) {
                            send_forbidden_https(it);
                            status_code = 403;
                        }
                        else {
                            send_not_found_https(it);
                            status_code = 404;
                        }
                    }
                    else if(parsed_method === "GET" || parsed_method === "HEAD") {
                        if(cgi_request) {
                            if(is_executable_cgi(file_path)) {
                                status_code = run_get_cgi(it, file_path, document_root, header, contents, query_string, parsed_method, parsed_target, cgi_relative_path, path_info, http_version);
                            }
                            else if(access(file_path, F_OK) == 0) {
                                send_forbidden_https(it);
                                status_code = 403;
                            }
                            else {
                                send_not_found_https(it);
                                status_code = 404;
                            }
                        }
                        else {
                            if(is_existing_directory(file_path)) {
                                string index_path = resolve_directory_index_path(file_path);

                                if(!request_target_has_trailing_slash(parsed_target)) {
                                    string location = build_directory_redirect_target(parsed_target);
                                    send_directory_redirect_https(it, location);
                                    status_code = 301;
                                }
                                else if(index_path != null) {
                                    status_code = serve_static_file_https(it, index_path, header);
                                }
                                else if(gAutoIndex) {
                                    status_code = send_autoindex_https(it, file_path, parsed_target);
                                }
                                else if(access(file_path, F_OK) == 0) {
                                    send_forbidden_https(it);
                                    status_code = 403;
                                }
                                else {
                                    send_not_found_https(it);
                                    status_code = 404;
                                }
                            }
                            else if(is_readable_static_file(file_path)) {
                                status_code = serve_static_file_https(it, file_path, header);
                            }
                            else if(access(file_path, F_OK) == 0) {
                                send_forbidden_https(it);
                                status_code = 403;
                            }
                            else {
                                send_not_found_https(it);
                                status_code = 404;
                            }
                        }
                    }
                    else {
                        if(!cgi_request) {
                            if(access(file_path, F_OK) == 0) {
                                send_method_not_allowed_https_with_allow(it, allow_header_static_methods());
                                status_code = 405;
                            }
                            else {
                                send_not_found_https(it);
                                status_code = 404;
                            }
                        }
                        else if(is_executable_cgi(file_path)) {
                            status_code = run_post_cgi(it, file_path, document_root, header, contents, parsed_target, cgi_relative_path, path_info, query_string, http_version);
                        }
                        else if(access(file_path, F_OK) == 0) {
                            send_forbidden_https(it);
                            status_code = 403;
                        }
                        else {
                            send_not_found_https(it);
                            status_code = 404;
                        }
                    }
                }
            }

            log_access("HTTPS", method, request_target, status_code);
        }

        if(!gKeepAlive || gCloseConnection) {
            break;
        }
    }

    int fd = SSL_get_fd(it);
    SSL_shutdown(it);
    SSL_free(it);
    if(fd >= 0) {
        close(fd);
    }
}

int main(int argc, char **argv) 
{
    bool http = false;
    bool explicit_config = false;
    const char* config_path = find_config_path_from_argv(argc, argv, &explicit_config);

    if(config_path == NULL) {
        return 1;
    }

    if(!load_server_config(config_path, explicit_config, &http)) {
        return 1;
    }

    if(!parse_server_options(argc, argv, &http)) {
        return 1;
    }
    
    setlocale(LC_ALL, "");
    
    initialize_modules();

    signal(SIGCHLD, SIG_IGN);
    signal(SIGPIPE, SIG_IGN);
    
    while(true) {
        if(http) {
            var server = httpd_socket(port:gHttpPort, reuse:true);
            for(var it = server.begin(); !server.end(); it = server.next()) {
                pid_t pid = fork();
                if(pid == 0) {
                    process_http_client(it);
                    exit(0);
                }
                else if(pid < 0) {
                    process_http_client(it);
                }
            }
        }
        else {
            signal(SIGINT, handle_sigint);
            
            var server = httpsd_socket(port:gHttpsPort, reuse:true);
            for(var it = server.begin(); !server.end(); it = server.next()) {
                gSSL = it;
                pid_t pid = fork();
                if(pid == 0) {
                    process_https_client(it);
                    exit(0);
                }
                else if(pid < 0) {
                    process_https_client(it);
                }
            }
        }
    }
    
    finalize_modules();
    
    return 0;
}
