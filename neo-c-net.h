#ifndef __COMELANG_NET_H__
#define __COMELANG_NET_H__

#include <neo-c.h>

using c
{
#include <unistd.h>
#include <arpa/inet.h>
#ifdef __LINUX__
#include <endian.h>
#endif
#ifdef __MAC__
#include <libkern/OSByteOrder.h>
#endif
#include <openssl/ssl.h>
#include <openssl/err.h>
}

using neo-c-net;

typedef int socket_fd;

uniq int socket_fd::write(socket_fd self, string str)
{
    return write(self, str, str.length());
}

uniq int server_socket(int port=8080, int socket_family=AF_INET, int socket_type=SOCK_STREAM, int protocol=0, bool reuse=false, void* parent, void (*block)(void* parent, socket_fd it, bool* break_, bool* reconnection))
{
    socket_fd sock = socket(socket_family, socket_type, protocol);
    if(sock <0) die("socket failed");
    
#ifndef __ANDROID__
    if(reuse) {
        int opt = 1;
        if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
            close(sock);
            die(s"setsockopt");
        }
    }
#endif

    struct sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(port);
    
    int addrlen = sizeof(address);
    
    if (bind(sock, (struct sockaddr*)&address, sizeof(address)) < 0) {
        close(sock);
        die(s"Unable to bind");
    }

    if (listen(sock, 3) < 0) {
        close(sock);
        die(s"Unable to listen");
    }
    
    socket_fd new_socket = accept(sock, (struct sockaddr *)&address, (socklen_t*)&addrlen);

    while (1) {
        bool reconnection = false;
        bool break_ = false;
        block(parent, new_socket, &break_, &reconnection);
        
        if(reconnection) {
            close(new_socket);
            new_socket = accept(sock, (struct sockaddr *)&address, (socklen_t*)&addrlen);
        }
        
        if(break_) {
            break;
        }
    }
    
    close(new_socket);
    
    close(sock);
    
    return 0;
}

uniq int client_socket(int port=8080, char* address="127.0.0.1", void* parent, void (*block)(void* parent, socket_fd it, bool* break_))
{
    int sock = 0;
    struct sockaddr_in serv_addr;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        die(s"socket");
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);

    if (inet_pton(AF_INET, address, &serv_addr.sin_addr) <= 0) {
        close(sock);
        die(s"Invalid address/ Address not supported");
    }
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        close(sock);
        die(s"Connection Failed");
    }
    
    bool break_ = false;
    while(1) {
        
        bool break_ = false;
        block(parent, sock, &break_);
        
        if(break_) {
            break;
        }
    }

    close(sock);
    
    return 0;
}

uniq string client_socket2(int port, char* data, char* address="127.0.0.1")
{
    int sock = 0;
    struct sockaddr_in serv_addr;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        die(s"Socket creation error");
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);

    if (inet_pton(AF_INET, address, &serv_addr.sin_addr) <= 0) {
        close(sock);
        die(s"Invalid address/ Address not supported");
    }
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        close(sock);
        die(s"Connection Failed");
    }
    
    if(write(sock, data, strlen(data)) < 0) {
        close(sock);
        die(s"Write Failed");
    }
    
    buffer*% buf = new buffer();
    
    char buf2[1024] = { '\0' };

    int size = read(sock, buf2, 1024);
    
    if(size < 0) {
        close(sock);
        die(s"Read Failed");
    }
    
    buf.append(buf2, size);

    close(sock);
    
    return buf.to_string();
}

uniq int httpd_socket(int port=8080, int socket_family=AF_INET, int socket_type=SOCK_STREAM, int protocol=0, bool reuse=false, void* parent, void (*block)(void* parent, socket_fd it, bool* break_))
{
    socket_fd sock = socket(socket_family, socket_type, protocol);
    if(sock < 0) die("socket failed");
    
#ifndef __ANDROID__
    if(reuse) {
        int opt = 1;
        if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
            close(sock);
            die(s"setsockpt failed");
        }
    }
#endif

    struct sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(port);
    
    int addrlen = sizeof(address);
    
    if (bind(sock, (struct sockaddr*)&address, sizeof(address)) < 0) {
        close(sock);
        die(s"Unable to bind");
    }

    if (listen(sock, 3) < 0) {
        close(sock);
        die(s"Unable to listen");
    }

    while (1) {
        socket_fd new_socket = accept(sock, (struct sockaddr *)&address, (socklen_t*)&addrlen);
        
        bool break_ = false;
        block(parent, new_socket, &break_);
        
        close(new_socket);
        
        if(break_) {
            break;
        }
    }
    
    close(sock);
    
    return 0;
}

uniq void ERR_print_errors_fp(FILE* f)
{
/*
unsigned long err = ERR_get_error();  // エラーコードを取得
char err_str[256];  // エラーメッセージを格納するためのバッファ
ERR_error_string_n(err, err_str, sizeof(err_str));  // エラーメッセージを文字列に変換
fprintf(f, "OpenSSL Error: %s\n", err_str);  // エラーメッセージを標準エラーに出力
*/
}

uniq int httpsd_socket(int port=443, bool reuse=false, void* parent, void (*block)(void* parent, SSL* it, bool* break_))
{
    int sock;
    SSL_CTX *ctx;

    SSL_load_error_strings();   
    OpenSSL_add_ssl_algorithms();
    
    const SSL_METHOD *method;

    method = SSLv23_server_method();

    ctx = SSL_CTX_new(method);
    if (!ctx) {
        //ERR_print_errors_fp(stdout);
        die(s"Unable to create SSL context");
    }

    if (SSL_CTX_use_certificate_file(ctx, "cert.pem", SSL_FILETYPE_PEM) <= 0) {
        //ERR_print_errors_fp(stdout);
        die(s"SSL_CTX_use_certificate_file");
    }

    if (SSL_CTX_use_PrivateKey_file(ctx, "key.pem", SSL_FILETYPE_PEM) <= 0 ) {
        //ERR_print_errors_fp(stdout);
        die(s"SSL_CTX_use_PrivateKey_file");
    }

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        die(s"Unable to create socket");
    }

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
        die(s"Unable to bind");
    }

    if (listen(sock, 1) < 0) {
        die(s"Unable to listen");
    }

    while (1) {
        struct sockaddr_in addr;
        uint len = sizeof(addr);
        int client = accept(sock, (struct sockaddr*)&addr, &len);

        if (client < 0) {
            die(s"Unable to accept");
        }

        SSL *ssl = SSL_new(ctx);
        SSL_set_fd(ssl, client);

        if (SSL_accept(ssl) <= 0) {
            ERR_print_errors_fp(stdout);
        } else {
            bool break_ = false;
            block(parent, ssl, &break_);
            
            if(break_) {
                break;
            }
        }

        SSL_shutdown(ssl);
        SSL_free(ssl);
        close(client);
    }

    close(sock);
    SSL_CTX_free(ctx);
    EVP_cleanup();
    
    return 0;
}

#endif
