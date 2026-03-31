#include <neo-c-net.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>

static SSL* gSSL = NULL;

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

void send_not_found_http(int it)
{
    const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html; charset=UTF-8\r\n\r\n"
                            "<html><body><h1>404 Not Found</h1></body></html>";
    write(it, not_found, strlen(not_found));
}

void send_not_found_https(SSL* it)
{
    const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html; charset=UTF-8\r\n\r\n"
                            "<html><body><h1>404 Not Found</h1></body></html>";
    SSL_write(it, not_found, strlen(not_found));
}

void send_bad_request_http(int it)
{
    const char *bad_request = "HTTP/1.1 400 Bad Request\r\nContent-Type: text/html; charset=UTF-8\r\n\r\n"
                              "<html><body><h1>400 Bad Request</h1></body></html>";
    write(it, bad_request, strlen(bad_request));
}

void send_bad_request_https(SSL* it)
{
    const char *bad_request = "HTTP/1.1 400 Bad Request\r\nContent-Type: text/html; charset=UTF-8\r\n\r\n"
                              "<html><body><h1>400 Bad Request</h1></body></html>";
    SSL_write(it, bad_request, strlen(bad_request));
}

void serve_static_file_http(int it, string file_path)
{
    FILE *file = fopen(file_path, "rb");
    if (file == NULL) {
        send_not_found_http(it);
        return;
    }

    if(is_binary_file(file_path)) {
        struct stat stat_;
        if(stat(file_path, &stat_) != 0) {
            fclose(file);
            send_not_found_http(it);
            return;
        }

        char response_header[1024];
        snprintf(response_header, sizeof(response_header),
                 "HTTP/1.1 200 OK\r\n"
                 "Content-Type: %s\r\n"
                 "Content-Length: %ld\r\n"
                 "Connection: close\r\n"
                 "\r\n", get_content_type(file_path), stat_.st_size);
        write(it, response_header, strlen(response_header));

        size_t bytes_read;
        char buf[1024];

        while((bytes_read = fread(buf, 1, sizeof(buf), file)) > 0) {
            write(it, buf, bytes_read);
        }

        fclose(file);
    }
    else {
        fclose(file);

        string file_contents = file_path.read().to_string();
        string file_contents2 = parse_html(file_contents);
        string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: %s\r\nContent-Length: %ld\r\n\r\n%s",
                                   get_content_type(file_path), strlen(file_contents2), file_contents2);
        write(it, response, strlen(response));
    }
}

void serve_static_file_https(SSL* it, string file_path)
{
    FILE *file = fopen(file_path, "rb");
    if (file == NULL) {
        send_not_found_https(it);
        return;
    }

    if(is_binary_file(file_path)) {
        struct stat stat_;
        if(stat(file_path, &stat_) != 0) {
            fclose(file);
            send_not_found_https(it);
            return;
        }

        char response_header[1024];
        snprintf(response_header, sizeof(response_header),
                 "HTTP/1.1 200 OK\r\n"
                 "Content-Type: %s\r\n"
                 "Content-Length: %ld\r\n"
                 "Connection: close\r\n"
                 "\r\n", get_content_type(file_path), stat_.st_size);
        SSL_write(it, response_header, strlen(response_header));

        char buf[1024];
        size_t bytes_read;
        while ((bytes_read = fread(buf, 1, sizeof(buf), file)) > 0) {
            SSL_write(it, buf, bytes_read);
        }

        fclose(file);
    }
    else {
        fclose(file);

        string file_contents = file_path.read().to_string();
        string file_contents2 = parse_html(file_contents);
        string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: %s\r\nContent-Length: %ld\r\n\r\n%s",
                                   get_content_type(file_path), strlen(file_contents2), file_contents2);
        SSL_write(it, response, strlen(response));
    }
}

void run_post_cgi(SSL* it, string file_path, string header, string contents)
{
    setenv("REQUEST_METHOD", "POST", 1);
    
    string p = header.scan("Content-Length: ([0-9]+)")[0];
    if(p) {
        int content_length = atoi(p);
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    p = get_cookie_header_value(header);
    if(p) {
        setenv("HTTP_COOKIE", p, 1);
    }
    
    char* argv[] = { file_path, NULL };
    
    var output,err = xpopen(argv, contents);
    if(err != 0) {
        send_not_found_https(it);
    }
    else if(output.match("Location:")) {
        SSL_write(it, output, strlen(output));
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        
        string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html; charset=UTF-8\r\nContent-Length: %ld\r\nConnection: close\r\n\r\n%s",
                                   strlen(file_contents2), file_contents2);
        SSL_write(it, response, strlen(response));
    }
}

void run_post_cgi_http(int it, string file_path, string header, string contents)
{
    setenv("REQUEST_METHOD", "POST", 1);
    
    string p = header.scan("Content-Length: ([0-9]+)")[0];
    if(p) {
        int content_length = atoi(p);
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    p = get_cookie_header_value(header);
    if(p) {
        setenv("HTTP_COOKIE", p, 1);
    }
    
    char* argv[] = { file_path, NULL };
    
    var output,err = xpopen(argv, contents);
    if(err != 0) {
        send_not_found_http(it);
    }
    else if(output.match("Location:")) {
        write(it, output, strlen(output));
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        
        string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html; charset=UTF-8\r\nContent-Length: %ld\r\nConnection: close\r\n\r\n%s",
                                   strlen(file_contents2), file_contents2);
        write(it, response, strlen(response));
    }
}

void run_get_cgi(SSL* it, string cgi_path, string header, string contents, string query_string)
{
    setenv("REQUEST_METHOD", "GET", 1);
    setenv("QUERY_STRING", query_string, 1);
    
    string p = header.scan("Content-Length: ([0-9]+)")[0];
    if(p) {
        int content_length = atoi(p);
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    p = get_cookie_header_value(header);
    if(p) {
        setenv("HTTP_COOKIE", p, 1);
    }
    
    char* argv[] = { cgi_path, NULL };
    var output,err = xpopen(argv, xsprintf(""));

    if(err != 0) {
        send_not_found_https(it);
    }
    else if(output.match("Location:")) {
        SSL_write(it, output, strlen(output));
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        
        string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html; charset=UTF-8\r\nContent-Length: %ld\r\nConnection: close\r\n\r\n%s",
                                   strlen(file_contents2), file_contents2);
        SSL_write(it, response, strlen(response));
    }
}

void run_get_cgi_http(int it, string cgi_path, string header, string contents, string query_string)
{
    setenv("REQUEST_METHOD", "GET", 1);
    setenv("QUERY_STRING", query_string, 1);
    
    string p = header.scan("Content-Length: ([0-9]+)")[0];
    if(p) {
        int content_length = atoi(p);
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    p = get_cookie_header_value(header);
    if(p) {
        setenv("HTTP_COOKIE", p, 1);
    }
    
    char* argv[] = { cgi_path, NULL };
    var output,err = xpopen(argv, xsprintf(""));

    if(err != 0) {
        send_not_found_http(it);
    }
    else if(output.match("Location:")) {
        write(it, output, strlen(output));
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        
        string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html; charset=UTF-8\r\nContent-Length: %ld\r\nConnection: close\r\n\r\n%s",
                                   strlen(file_contents2), file_contents2);
        write(it, response, strlen(response));
    }
}

void initialize_modules()
{
}

void finalize_modules()
{
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
    
    while(true) {
        if(http) {
            httpd_socket(port:8080, reuse:true).`iter().`for_each {
                char data[1024*2*2*2] = {0};
                int size = read(it, data, 1024*2*2*2-1);
                
                if(size < 0) {
                    puts("read");
                    exit(2);
                }
                
                if(size == 0) {
                    continue;
                }

                data[size] = '\0';
                
                char* p = strstr(data, "\r\n\r\n");
                
                if(p == null) {
                    send_bad_request_http(it);
                    continue;
                }
                
                int header_size = p - data;

                var buf = new buffer();
                buf.append(data, header_size);
                
                var header = buf.to_string();
                
                int body_size = size - ((p + 4) - data);

                var buf2 = new buffer();
                buf2.append(p + 4, body_size);
                
                var contents = buf2.to_string();
        
                if(header.match("^GET ")) {
                    string str = header.scan("GET (.+) HTTP")[0];
                    
                    if(str === "/") {
                        str = s"/index.html";
                    }
                    
                    string file_path = str.substring(1,-1);  // remove /

                    if(strstr(file_path, "..") != NULL) {
                        send_not_found_http(it);
                    }
                    else {
                        string request_path = file_path;
                        string query_string = xsprintf("");
                        char* p2 = strstr(file_path, "?");

                        if(p2 != NULL) {
                            char* query_head = p2 + 1;
                            query_string = query_head.to_string();

                            var request_path_buf = new buffer();
                            request_path_buf.append(file_path, p2 - file_path);
                            request_path = request_path_buf.to_string();
                        }

                        string ext_name = xextname(request_path);

                        if(ext_name === "cgi") {
                            run_get_cgi_http(it, request_path, header, contents, query_string);
                        }
                        else {
                            serve_static_file_http(it, request_path);
                        }
                    }
                }
                else if(header.match("^POST ")) {
                    string str = header.scan("POST (.+) HTTP")[0];
                    
                    if(str === "/") {
                        str = s"/index.html";
                    }
                    
                    string file_path = str.substring(1,-1);

                    if(strstr(file_path, "..") != NULL) {
                        send_not_found_http(it);
                    }
                    else {
                        run_post_cgi_http(it, file_path, header, contents);
                    }
                }
                else {
                    send_not_found_http(it);
                }
            };
        }
        else {
            signal(SIGINT, handle_sigint);
            
            httpsd_socket(reuse:true).`iter().`for_each {
                gSSL = it;
        
                char data[1024*2*2] = {0};
                int size = SSL_read(it, data, 1024*2*2-1);
                
                data[size] = '\0';
                if(size < 0) {
                    puts("read");
                    exit(2);
                }
                
                if(size == 0) {
                    continue;
                }
                
                char* p = strstr(data, "\r\n\r\n");

                if(p == null) {
                    send_bad_request_https(it);
                    continue;
                }
                
                int header_size = p - data;

                var buf = new buffer();
                buf.append(data, header_size);
                
                var header = buf.to_string();
                
                int body_size = size - ((p + 4) - data);

                var buf2 = new buffer();
                buf2.append(p + 4, body_size);
                
                var contents = buf2.to_string();
        
                if(header.match("^GET ")) {
                    string str = header.scan("GET (.+) HTTP")[0];
                    
                    if(str === "/") {
                        str = s"/index.html";
                    }
                    
                    string file_path = str.substring(1,-1);  // remove /

                    if(strstr(file_path, "..") != NULL) {
                        send_not_found_https(it);
                    }
                    else {
                        string request_path = file_path;
                        string query_string = xsprintf("");
                        char* p2 = strstr(file_path, "?");

                        if(p2 != NULL) {
                            char* query_head = p2 + 1;
                            query_string = query_head.to_string();

                            var request_path_buf = new buffer();
                            request_path_buf.append(file_path, p2 - file_path);
                            request_path = request_path_buf.to_string();
                        }

                        string ext_name = xextname(request_path);

                        if(ext_name === "cgi") {
                            run_get_cgi(it, request_path, header, contents, query_string);
                        }
                        else {
                            serve_static_file_https(it, request_path);
                        }
                    }
                }
                else if(header.match("^POST ")) {
                    string str = header.scan("POST (.+) HTTP")[0];
                    
                    if(str === "/") {
                        str = s"/index.html";
                    }
                    
                    string file_path = str.substring(1,-1);

                    if(strstr(file_path, "..") != NULL) {
                        send_not_found_https(it);
                    }
                    else {
                        run_post_cgi(it, file_path, header, contents);
                    }
                }
                else {
                    send_not_found_https(it);
                }
            };
        }
    }
    
    finalize_modules();
    
    return 0;
}
