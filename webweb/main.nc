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

static SSL* gSSL = NULL;
static bool gKeepAlive = false;
static bool gCloseConnection = false;
static bool gAcceptGzip = false;
static bool gHeadRequest = false;

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

tuple2<string, int>*% xpopen(char** argv, string input)
{
    var output = new buffer();
    
    int pipe_in[2], pipe_out[2];
    pid_t pid;

    if (pipe(pipe_in) == -1 || pipe(pipe_out) == -1) {
        perror("pipe failed");
        return t((string)null, 1);
    }

    pid = fork();

    if (pid == -1) {
        perror("fork failed");
        return t((string)null, 1);
    }

    if (pid == 0) {
        close(pipe_in[1]);
        close(pipe_out[0]);

        dup2(pipe_in[0], STDIN_FILENO);
        dup2(pipe_out[1], STDOUT_FILENO);

        close(pipe_in[0]);
        close(pipe_out[1]);

        execvp(argv[0], argv);

        perror("exec failed");
        exit(1);
    } 
    else {
        close(pipe_in[0]);
        close(pipe_out[1]);

        write(pipe_in[1], input, strlen(input));
        close(pipe_in[1]);

        while(1) {
            char buf[BUFSIZ];
            int size = read(pipe_out[0], buf, BUFSIZ);
            if(size < 0) {
                perror("read failed");
                return t((string)null, 1);
            }
            
            output.append(buf, size);

            if(size < BUFSIZ) {
                break;
            }
        }
        close(pipe_out[0]);

        int status = 0;
        waitpid(pid, &status, 0);

        if(!WIFEXITED(status) || WEXITSTATUS(status) != 0) {
            return t(output.to_string(), 1);
        }
    }

    return t(output.to_string(), 0);
}

string get_cookie_header_value(string header)
{
    return header.scan("Cookie: ([^\r\n]+)")[0];
}

string get_host_header_value(string header)
{
    return header.scan("Host: ([^\r\n]+)")[0];
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

const char* connection_header_value()
{
    if(gKeepAlive && !gCloseConnection) {
        return "keep-alive";
    }

    return "close";
}

bool header_has_chunked_transfer_encoding(string header)
{
    string lower_header = to_lower_string(header);
    return strstr(lower_header, "transfer-encoding: chunked") != NULL;
}

bool header_has_connection_close(string header)
{
    string lower_header = to_lower_string(header);
    return strstr(lower_header, "connection: close") != NULL;
}

bool header_has_connection_keep_alive(string header)
{
    string lower_header = to_lower_string(header);
    return strstr(lower_header, "connection: keep-alive") != NULL;
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
    return xsprintf("Date: %s\r\nServer: webweb/1.0\r\n%s", borrow date_header, extra_headers);
}

bool request_accepts_gzip(string header)
{
    string lower_header = to_lower_string(header);

    char* p = strstr(lower_header, "accept-encoding:");
    if(p == null) {
        return false;
    }

    char* line_end = strstr(p, "\r\n");
    if(line_end == null) {
        return strstr(p, "gzip") != NULL;
    }

    var line_buf = new buffer();
    line_buf.append(p, line_end - p);
    string line = line_buf.to_string();
    return strstr(line, "gzip") != NULL;
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
    string if_none_match = header.scan("If-None-Match: ([^\r\n]+)")[0];
    string etag = build_file_etag(file_size, modified_time);

    if(if_none_match) {
        return header_matches_etag(if_none_match, etag);
    }

    string if_modified_since = header.scan("If-Modified-Since: ([^\r\n]+)")[0];
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

tuple3<long, long, int>*% parse_range_request(string header, long file_size)
{
    string range_value = header.scan("Range: bytes=([^\r\n]+)")[0];

    if(range_value == null) {
        return t(0L, 0L, 0);
    }

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
        string vhost_root = xsprintf("vhosts/%s", host);
        if(is_existing_directory(vhost_root)) {
            return vhost_root;
        }
    }

    return xsprintf(".");
}

string build_file_path(string document_root, string relative_path)
{
    if(document_root === "." || document_root === "") {
        return relative_path;
    }

    return xsprintf("%s/%s", document_root, relative_path);
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

bool can_gzip_content_type(const char* content_type)
{
    return strncmp(content_type, "text/", 5) == 0
        || strcmp(content_type, "application/javascript; charset=UTF-8") == 0;
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

void send_empty_response_http(int it, const char* status, const char* extra_headers="")
{
    string standard_headers = build_standard_headers(extra_headers);
    string response = xsprintf("HTTP/1.1 %s\r\nContent-Length: 0\r\nConnection: %s\r\n%s\r\n",
                               status, connection_header_value(), borrow standard_headers);
    write_http_data(it, response, strlen(response));
}

void send_empty_response_https(SSL* it, const char* status, const char* extra_headers="")
{
    string standard_headers = build_standard_headers(extra_headers);
    string response = xsprintf("HTTP/1.1 %s\r\nContent-Length: 0\r\nConnection: %s\r\n%s\r\n",
                               status, connection_header_value(), borrow standard_headers);
    write_https_data(it, response, strlen(response));
}

void send_not_found_http(int it)
{
    send_html_response_http(it, "404 Not Found", "<html><body><h1>404 Not Found</h1></body></html>");
}

void send_not_found_https(SSL* it)
{
    send_html_response_https(it, "404 Not Found", "<html><body><h1>404 Not Found</h1></body></html>");
}

void send_bad_request_http(int it)
{
    send_html_response_http(it, "400 Bad Request", "<html><body><h1>400 Bad Request</h1></body></html>");
}

void send_bad_request_https(SSL* it)
{
    send_html_response_https(it, "400 Bad Request", "<html><body><h1>400 Bad Request</h1></body></html>");
}

void send_request_timeout_http(int it)
{
    send_html_response_http(it, "408 Request Timeout", "<html><body><h1>408 Request Timeout</h1></body></html>");
}

void send_request_timeout_https(SSL* it)
{
    send_html_response_https(it, "408 Request Timeout", "<html><body><h1>408 Request Timeout</h1></body></html>");
}

void send_payload_too_large_http(int it)
{
    send_html_response_http(it, "413 Payload Too Large", "<html><body><h1>413 Payload Too Large</h1></body></html>");
}

void send_payload_too_large_https(SSL* it)
{
    send_html_response_https(it, "413 Payload Too Large", "<html><body><h1>413 Payload Too Large</h1></body></html>");
}

void send_method_not_allowed_http(int it)
{
    send_html_response_http(it, "405 Method Not Allowed",
                            "<html><body><h1>405 Method Not Allowed</h1></body></html>",
                            "Allow: GET, HEAD, POST\r\n");
}

void send_method_not_allowed_https(SSL* it)
{
    send_html_response_https(it, "405 Method Not Allowed",
                             "<html><body><h1>405 Method Not Allowed</h1></body></html>",
                             "Allow: GET, HEAD, POST\r\n");
}

void send_forbidden_http(int it)
{
    send_html_response_http(it, "403 Forbidden", "<html><body><h1>403 Forbidden</h1></body></html>");
}

void send_forbidden_https(SSL* it)
{
    send_html_response_https(it, "403 Forbidden", "<html><body><h1>403 Forbidden</h1></body></html>");
}

void send_internal_server_error_http(int it)
{
    send_html_response_http(it, "500 Internal Server Error", "<html><body><h1>500 Internal Server Error</h1></body></html>");
}

void send_internal_server_error_https(SSL* it)
{
    send_html_response_https(it, "500 Internal Server Error", "<html><body><h1>500 Internal Server Error</h1></body></html>");
}

int get_content_length(string header)
{
    string p = header.scan("Content-Length: ([0-9]+)")[0];
    if(p) {
        return atoi(p);
    }

    return 0;
}

bool is_too_large_request(buffer* request_buffer)
{
    return request_buffer.length() > 1024 * 1024;
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
        return xsprintf("index.html");
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
        return xsprintf("index.html");
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

void log_access(const char* protocol, string method, string request_target, int status_code)
{
    time_t now = time(NULL);
    struct tm tm_;
    char time_buf[64];

    localtime_r(&now, &tm_);
    strftime(time_buf, sizeof(time_buf), "%Y-%m-%d %H:%M:%S", &tm_);

    printf("[%s] %s %s %s -> %d\n", time_buf, protocol, method, request_target, status_code);
    fflush(stdout);
}

tuple3<string, string, int>*% read_http_request(int it, buffer* request_buffer)
{
    while(true) {
        string request = request_buffer.to_string();
        char* p = strstr(request, "\r\n\r\n");

        if(p != null) {
            int header_size = (int)(p - request);

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
            }
            else {
                int content_length = get_content_length(header);
                int body_size = request_buffer.length() - body_offset;

                if(body_size >= content_length) {
                    string body = create_range_string(p + 4, content_length);
                    consume_request_buffer(request_buffer, body_offset + content_length);
                    return t(header, body, 0);
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
    while(true) {
        string request = request_buffer.to_string();
        char* p = strstr(request, "\r\n\r\n");

        if(p != null) {
            int header_size = (int)(p - request);

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
            }
            else {
                int content_length = get_content_length(header);
                int body_size = request_buffer.length() - body_offset;

                if(body_size >= content_length) {
                    string body = create_range_string(p + 4, content_length);
                    consume_request_buffer(request_buffer, body_offset + content_length);
                    return t(header, body, 0);
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
    string ext_name = xextname(file_path);

    if(ext_name === "jpg" || ext_name === "jpeg") {
        return "image/jpeg";
    }
    else if(ext_name === "png") {
        return "image/png";
    }
    else if(ext_name === "gif") {
        return "image/gif";
    }
    else if(ext_name === "css") {
        return "text/css; charset=UTF-8";
    }
    else if(ext_name === "js") {
        return "application/javascript; charset=UTF-8";
    }
    else if(ext_name === "txt") {
        return "text/plain; charset=UTF-8";
    }

    return "text/html; charset=UTF-8";
}

bool is_binary_file(string file_path)
{
    string ext_name = xextname(file_path);

    return ext_name === "jpg" || ext_name === "jpeg" || ext_name === "png" || ext_name === "gif";
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

    string etag = build_file_etag(stat_.st_size, stat_.st_mtime);
    string last_modified = format_http_date(stat_.st_mtime);
    string metadata_headers = xsprintf("ETag: %s\r\nLast-Modified: %s\r\nAccept-Ranges: bytes\r\n",
                                       borrow etag, borrow last_modified);

    if(request_matches_not_modified(header, stat_.st_size, stat_.st_mtime)) {
        send_empty_response_http(it, "304 Not Modified", borrow metadata_headers);
        return 304;
    }

    var range_start, range_end, range_status = parse_range_request(header, stat_.st_size);
    if(range_status == 2) {
        string range_headers = xsprintf("%sContent-Range: bytes */%ld\r\n", borrow metadata_headers, stat_.st_size);
        send_html_response_http(it, "416 Range Not Satisfiable",
                                "<html><body><h1>416 Range Not Satisfiable</h1></body></html>",
                                borrow range_headers);
        return 416;
    }

    if(range_status == 1 || is_binary_file(file_path)) {
        FILE *file = fopen(file_path, "rb");
        if(file == NULL) {
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

                write_http_data(it, buf, bytes_read);
                remaining -= bytes_read;
            }
        }

        fclose(file);
        return range_status == 1 ? 206 : 200;
    }

    string file_contents = file_path.read().to_string();
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

    string etag = build_file_etag(stat_.st_size, stat_.st_mtime);
    string last_modified = format_http_date(stat_.st_mtime);
    string metadata_headers = xsprintf("ETag: %s\r\nLast-Modified: %s\r\nAccept-Ranges: bytes\r\n",
                                       borrow etag, borrow last_modified);

    if(request_matches_not_modified(header, stat_.st_size, stat_.st_mtime)) {
        send_empty_response_https(it, "304 Not Modified", borrow metadata_headers);
        return 304;
    }

    var range_start, range_end, range_status = parse_range_request(header, stat_.st_size);
    if(range_status == 2) {
        string range_headers = xsprintf("%sContent-Range: bytes */%ld\r\n", borrow metadata_headers, stat_.st_size);
        send_html_response_https(it, "416 Range Not Satisfiable",
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

    string file_contents = file_path.read().to_string();
    string file_contents2 = parse_html(file_contents);
    send_text_response_https(it, "200 OK", get_content_type(file_path), borrow file_contents2, strlen(file_contents2), borrow metadata_headers);
    return 200;
}

int run_post_cgi(SSL* it, string file_path, string header, string contents)
{
    setenv("REQUEST_METHOD", "POST", 1);
    
    int content_length = get_content_length(header);
    if(content_length > 0) {
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    string cookie = get_cookie_header_value(header);
    if(cookie) {
        setenv("HTTP_COOKIE", cookie, 1);
    }
    
    char* argv[] = { file_path, NULL };
    
    var output,err = xpopen(argv, contents);
    if(err != 0) {
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

int run_post_cgi_http(int it, string file_path, string header, string contents)
{
    setenv("REQUEST_METHOD", "POST", 1);
    
    int content_length = get_content_length(header);
    if(content_length > 0) {
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    string cookie = get_cookie_header_value(header);
    if(cookie) {
        setenv("HTTP_COOKIE", cookie, 1);
    }
    
    char* argv[] = { file_path, NULL };
    
    var output,err = xpopen(argv, contents);
    if(err != 0) {
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

int run_get_cgi(SSL* it, string cgi_path, string header, string contents, string query_string)
{
    setenv("REQUEST_METHOD", "GET", 1);
    setenv("QUERY_STRING", query_string, 1);
    
    int content_length = get_content_length(header);
    if(content_length > 0) {
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    string cookie = get_cookie_header_value(header);
    if(cookie) {
        setenv("HTTP_COOKIE", cookie, 1);
    }
    
    char* argv[] = { cgi_path, NULL };
    var output,err = xpopen(argv, xsprintf(""));

    if(err != 0) {
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

int run_get_cgi_http(int it, string cgi_path, string header, string contents, string query_string)
{
    setenv("REQUEST_METHOD", "GET", 1);
    setenv("QUERY_STRING", query_string, 1);
    
    int content_length = get_content_length(header);
    if(content_length > 0) {
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    string cookie = get_cookie_header_value(header);
    if(cookie) {
        setenv("HTTP_COOKIE", cookie, 1);
    }
    
    char* argv[] = { cgi_path, NULL };
    var output,err = xpopen(argv, xsprintf(""));

    if(err != 0) {
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

void process_http_client(int it)
{
    var request_buffer = new buffer();

    while(true) {
        set_client_timeout(it);

        gKeepAlive = false;
        gCloseConnection = false;
        gHeadRequest = false;

        string method = xsprintf("-");
        string request_target = xsprintf("-");
        int status_code = 0;

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

        if(request_err != 0) {
            send_bad_request_http(it);
            log_access("HTTP", method, request_target, 400);
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
        gKeepAlive = request_should_keep_alive(http_version, header);
        gAcceptGzip = request_accepts_gzip(header);
        gHeadRequest = parsed_method === "HEAD";

        if(parsed_method !== "GET" && parsed_method !== "POST" && parsed_method !== "HEAD") {
            send_method_not_allowed_http(it);
            status_code = 405;
        }
        else {
            string host_header = get_host_header_value(header);
            string document_root = resolve_document_root(host_header);

            if(http_version === "1.1" && host_header == null) {
                send_bad_request_http(it);
                status_code = 400;
            }
            else if(document_root == null) {
                send_bad_request_http(it);
                status_code = 400;
            }
            else {
                var relative_path, query_string = parse_request_target(parsed_target);

                if(relative_path == null) {
                    send_bad_request_http(it);
                    status_code = 400;
                }
                else {
                    string file_path = build_file_path(document_root, relative_path);
                    string ext_name = xextname(file_path);

                    if(parsed_method === "GET" || parsed_method === "HEAD") {
                        if(ext_name === "cgi") {
                            if(parsed_method === "HEAD") {
                                send_method_not_allowed_http(it);
                                status_code = 405;
                            }
                            else if(is_executable_cgi(file_path)) {
                                status_code = run_get_cgi_http(it, file_path, header, contents, query_string);
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
                                if(is_readable_static_file(build_file_path(file_path, xsprintf("index.html")))) {
                                    status_code = serve_static_file_http(it, build_file_path(file_path, xsprintf("index.html")), header);
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
                        if(ext_name !== "cgi") {
                            if(access(file_path, F_OK) == 0) {
                                send_method_not_allowed_http(it);
                                status_code = 405;
                            }
                            else {
                                send_not_found_http(it);
                                status_code = 404;
                            }
                        }
                        else if(is_executable_cgi(file_path)) {
                            status_code = run_post_cgi_http(it, file_path, header, contents);
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

    while(true) {
        set_client_timeout(SSL_get_fd(it));

        gKeepAlive = false;
        gCloseConnection = false;
        gHeadRequest = false;

        string method = xsprintf("-");
        string request_target = xsprintf("-");
        int status_code = 0;

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

        if(request_err != 0) {
            send_bad_request_https(it);
            log_access("HTTPS", method, request_target, 400);
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
        gKeepAlive = request_should_keep_alive(http_version, header);
        gAcceptGzip = request_accepts_gzip(header);
        gHeadRequest = parsed_method === "HEAD";

        if(parsed_method !== "GET" && parsed_method !== "POST" && parsed_method !== "HEAD") {
            send_method_not_allowed_https(it);
            status_code = 405;
        }
        else {
            string host_header = get_host_header_value(header);
            string document_root = resolve_document_root(host_header);

            if(http_version === "1.1" && host_header == null) {
                status_code = 400;
                send_bad_request_https(it);
            }
            else if(document_root == null) {
                status_code = 400;
                send_bad_request_https(it);
            }
            else {
                var relative_path, query_string = parse_request_target(parsed_target);

                if(relative_path == null) {
                    send_bad_request_https(it);
                    status_code = 400;
                }
                else {
                    string file_path = build_file_path(document_root, relative_path);
                    string ext_name = xextname(file_path);

                    if(parsed_method === "GET" || parsed_method === "HEAD") {
                        if(ext_name === "cgi") {
                            if(parsed_method === "HEAD") {
                                send_method_not_allowed_https(it);
                                status_code = 405;
                            }
                            else if(is_executable_cgi(file_path)) {
                                status_code = run_get_cgi(it, file_path, header, contents, query_string);
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
                                if(is_readable_static_file(build_file_path(file_path, xsprintf("index.html")))) {
                                    status_code = serve_static_file_https(it, build_file_path(file_path, xsprintf("index.html")), header);
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
                        if(ext_name !== "cgi") {
                            if(access(file_path, F_OK) == 0) {
                                send_method_not_allowed_https(it);
                                status_code = 405;
                            }
                            else {
                                send_not_found_https(it);
                                status_code = 404;
                            }
                        }
                        else if(is_executable_cgi(file_path)) {
                            status_code = run_post_cgi(it, file_path, header, contents);
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
    for(int i=1; i<argc; i++) {
        if(argv[i] === "-http") {
            http = true;
        }
    }
    
    setlocale(LC_ALL, "");
    
    initialize_modules();

    signal(SIGCHLD, SIG_IGN);
    
    while(true) {
        if(http) {
            var server = httpd_socket(port:8080, reuse:true);
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
            
            var server = httpsd_socket(reuse:true);
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
