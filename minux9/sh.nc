#define va_end(ap) __builtin_va_end(ap)
#include <neo-c.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>

typedef int pid_t;
typedef struct __minux_FILE {
    int fd;
    int flags;
    long pos;
    int eof;
    int err;
    int have_push;
    unsigned char push_ch;
    int is_mem;
    char** ms_bufp;
    size_t* ms_sizep;
    char* ms_buf;
    size_t ms_cap;
    size_t ms_len;
} FILE;

int printf(const char* fmt, ...);
int fclose(FILE* fp);
FILE* fopen(const char* path, const char* mode);
char* fgets(char* s, int size, FILE* fp);
char* readline(const char* prompt);
char* strncat(char* dest, const char* src, size_t n);
int strcmp(const char* s1, const char* s2);
int strlen(const char* s);
char* strncpy(char* s, const char* t, int n);
void* memcpy(void* dst, const void* src, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
void puts(const char* s);
void exit(int status);
void free(void* ptr);
void* malloc(size_t size);
void* calloc(size_t nmemb, size_t size);

int minux_open(const char* path, int flags, int mode);
int minux_close(int fd);
int minux_execve(const char* path, char* argv[], char* envp[]);
int minux_execved(const char* path, char* argv[], char* envp[]);
int minux_wait(int* status_ptr);
int minux_dup2(int oldfd, int newfd);
int minux_pipe(int* fds);
int minux_fork(void);
int minux_getpid(void);
int minux_opendir(const char* path);
int minux_closedir(int fd);
int minux_chdir(const char* path);
int minux_tcsetpgrp(int fildes, int pgid);

#ifndef O_WRONLY
#define O_WRONLY 1
#endif
#ifndef O_CREAT
#define O_CREAT (1<<9)
#endif
#ifndef O_TRUNC
#define O_TRUNC (1<<10)
#endif
#ifndef O_APPEND
#define O_APPEND (1<<11)
#endif

static const char* s_strchr(const char* s, int ch) {
    while (*s) { if (*s == (char)ch) return s; s++; }
    return NULL;
}

static bool sh_string_is_empty(const char* s)
{
    return s == NULL || s[0] == '\0';
}

#define BUF_SIZE 64
#define MAX_TOKEN 64
#define SH_PATH_MAX 32

static char g_cmdline[BUF_SIZE];

static void remember_cmdline(const char* command)
{
    int i = 0;

    while(command[i] && i < BUF_SIZE-1) {
        g_cmdline[i] = command[i];
        i++;
    }

    g_cmdline[i] = '\0';
}

static void build_cmdline_env(char* envbuf, int envbuf_size)
{
    int i = 0;
    const char* prefix = "MINUX_CMDLINE=";

    if(envbuf_size <= 0) {
        return;
    }

    for(int k=0; prefix[k] && i < envbuf_size-1; k++) {
        envbuf[i++] = prefix[k];
    }

    for(int k=0; g_cmdline[k] && i < envbuf_size-1; k++) {
        envbuf[i++] = g_cmdline[k];
    }

    envbuf[i] = '\0';
}

static bool make_rooted_command_path(const char* command, char* abuf, int abuf_size)
{
    int i = 0;

    if(sh_string_is_empty(command) || s_strchr(command, '/') || abuf_size < 2) {
        return false;
    }

    abuf[0] = '/';

    while(command[i] && i < abuf_size-2) {
        abuf[i+1] = command[i];
        i++;
    }

    abuf[i+1] = '\0';

    return true;
}

static void exec_minux_program(char** argv, char* envbuf, int debug_)
{
    char* envp[2];

    envp[0] = envbuf;
    envp[1] = null;

    if(debug_) {
        minux_execved(argv[0], argv, envp);
    }
    else {
        minux_execve(argv[0], argv, envp);
    }
}

static void exec_minux_program_with_root_fallback(char** argv, char* envbuf, int debug_)
{
    char abuf[64];

    exec_minux_program(argv, envbuf, debug_);

    if(make_rooted_command_path(argv[0], abuf, sizeof(abuf))) {
        argv[0] = abuf;
        exec_minux_program(argv, envbuf, debug_);
    }

    exit(126);
}

int xisalpha(char c)
{
    int result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

int xisblank(char c)
{
    return c == ' ' || c == '\t';
}

int xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

static int isdir(const char* path) {
    int fd = minux_opendir(path);
    if (fd >= 0) { minux_closedir(fd); return 1; }
    return 0;
}

struct sCommand
{
    void* argv_list;
    char redirect_file[SH_PATH_MAX];
    int redirect_append;
};

static list<long>* get_command_argv_list(struct sCommand* command)
{
    if(command == null) {
        return null;
    }

    if(command->argv_list == null) {
        command->argv_list = borrow new list<long>();
    }

    return (list<long>*)command->argv_list;
}

static struct sCommand* new_command(void)
{
    struct sCommand* command = calloc(1, sizeof(struct sCommand));

    if(command == null) {
        return null;
    }

    command->argv_list = borrow new list<long>();
    command->redirect_file[0] = '\0';
    command->redirect_append = 0;

    return command;
}

static int command_argc(struct sCommand* command)
{
    list<long>* argv_list = get_command_argv_list(command);

    if(argv_list == null) {
        return 0;
    }

    return argv_list.length();
}

static char* command_argv_at(struct sCommand* command, int index)
{
    list<long>* argv_list = get_command_argv_list(command);

    if(argv_list == null || index < 0 || index >= argv_list.length()) {
        return null;
    }

    return (char*)argv_list[index];
}

static int append_token_to_command(struct sCommand* command, char* token, int len)
{
    list<long>* argv_list = get_command_argv_list(command);

    if(argv_list == null) {
        return -1;
    }

    char* arg = malloc(len + 1);

    if(arg == null) {
        return -1;
    }

    memcpy(arg, token, len);
    arg[len] = '\0';

    argv_list.add((long)arg);

    return 0;
}

static void free_command(struct sCommand* command)
{
    if(command == null) {
        return;
    }

    list<long>* argv_list = get_command_argv_list(command);

    if(argv_list != null) {
        int argc = argv_list.length();

        for(int i=0; i<argc; i++) {
            char* arg = (char*)argv_list[i];

            if(arg != null) {
                free(arg);
            }
        }

        argv_list.reset();
    }

    free(command);
}

static void free_command_list(list<long>* commands)
{
    if(commands == null) {
        return;
    }

    int num_commands = commands.length();

    for(int i=0; i<num_commands; i++) {
        free_command((struct sCommand*)commands[i]);
    }

    commands.reset();
}

static char** make_exec_argv(struct sCommand* command)
{
    int argc = command_argc(command);
    char** argv = calloc(argc + 1, sizeof(char*));

    if(argv == null) {
        return null;
    }

    for(int i=0; i<argc; i++) {
        argv[i] = command_argv_at(command, i);
    }

    argv[argc] = null;

    return argv;
}

int run_command(int n, list<long>* commands, int debug_, int shell_pgrp)
{
    int pipes[2] = { 0, 0 };
    int num_commands = commands.length();
    struct sCommand* command = (struct sCommand*)commands[n];
    int argc = command_argc(command);
    char** argv = make_exec_argv(command);

    if(argv == null) {
        exit(1);
    }

    if(n == num_commands-1) {
        minux_tcsetpgrp(0, shell_pgrp);

        char envbuf[BUF_SIZE + 16];

        build_cmdline_env(envbuf, sizeof(envbuf));

        if(command->redirect_file[0] != '\0') {
            int fd;
            if(command->redirect_append) {
                fd = minux_open(command->redirect_file, O_APPEND|O_WRONLY|O_CREAT, 0644);
            }
            else {
                fd = minux_open(command->redirect_file, O_WRONLY|O_CREAT|O_TRUNC, 0644);
            }

            if(fd < 0) {
                puts("REDIRECT WRITE FILE CAN'T BE OPENED");
                exit(1);
            }

            minux_dup2(fd, 1);
            minux_close(fd);
        }

        exec_minux_program_with_root_fallback(argv, envbuf, debug_);
    }
    else {
        minux_pipe(pipes);

        int pid = minux_fork();

        if(pid == 0) {
            minux_close(pipes[1]);
            minux_dup2(pipes[0], 0);
            minux_close(pipes[0]);
            run_command(n+1, commands, debug_, shell_pgrp);
        }
        else {
            minux_tcsetpgrp(0, shell_pgrp);
            minux_close(pipes[0]);
            minux_dup2(pipes[1], 1);
            minux_close(pipes[1]);

            char envbuf[BUF_SIZE + 16];

            build_cmdline_env(envbuf, sizeof(envbuf));

            exec_minux_program_with_root_fallback(argv, envbuf, debug_);
        }
    }

    return 1;
}

int main(int argc, char** argv) {
    char buf[BUF_SIZE];
    char linebuf[BUF_SIZE];
    char token[MAX_TOKEN];

    printf("[sh argc=%d]\r\n", argc);

    long n;
    pid_t pid;
    int status;

    char* p;
    int m = 0;
    int i;

    buf[0] = '\0';

    int run_once = 0;
    const char* script_path = NULL;
    FILE* script_fp = NULL;
    int debug_ = 0;
    for(i=1; i<argc; i++) {
        if(strcmp(argv[i], "-c") == 0) {
            run_once = 1;
        }
        else if(run_once) {
            strncat(buf, argv[i], BUF_SIZE);
            strncat(buf, " ", BUF_SIZE);
        }
        else if(script_path == NULL) {
            script_path = argv[i];
        }
    }

    if(script_path) {
        script_fp = fopen(script_path, "r");
        if(script_fp == NULL) {
            printf("sh: can't open %s\r\n", script_path);
            exit(1);
        }
    }

    for (;;) {
        char* cmdline = NULL;
        debug_ = 0;

        if(run_once == 0 && script_fp == NULL) {
            cmdline = readline("$ ");
            if(cmdline == NULL) {
                exit(0);
            }

            if(cmdline[0] == '!') {
                debug_ = 1;
                strncpy(buf, cmdline + 1, BUF_SIZE);
            }
            else {
                strncpy(buf, cmdline, BUF_SIZE);
            }
        }
        else if(script_fp != NULL) {
            if(fgets(linebuf, sizeof(linebuf), script_fp) == NULL) {
                fclose(script_fp);
                exit(0);
            }

            strncpy(buf, linebuf, BUF_SIZE);

            int len = strlen(buf);
            while(len > 0 && (buf[len-1] == '\n' || buf[len-1] == '\r')) {
                buf[--len] = '\0';
            }

            char* head = buf;
            while(*head == ' ' || *head == '\t') {
                head++;
            }
            if(*head == '#') {
                buf[0] = '\0';
            }
            else if(head != buf) {
                memmove(buf, head, strlen(head) + 1);
            }
        }

        remember_cmdline(buf);

        if(buf[0] == '\0') {
            if(cmdline) {
                free(cmdline);
            }
            continue;
        }

        if(run_once || script_fp != null) {
            printf("[sh mode run_once=%d script=%d buf=%s]\r\n", run_once, script_fp != null, buf);
        }

        list<long>* commands = borrow new list<long>();
        struct sCommand* current = new_command();
        int token_len = 0;
        int parse_error = 0;

        if(current == null) {
            if(cmdline) {
                free(cmdline);
            }
            exit(1);
        }

        commands.add((long)current);

        p = buf;
        n = 0;

        while(1) {
            if(*p == '|') {
                if(token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }

                current = new_command();
                if(current == null) {
                    parse_error = 1;
                    break;
                }
                commands.add((long)current);
            }
            else if(*p == '>' && *(p+1) != '>') {
                if(token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }

                int ri = 0;
                while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                    if(ri >= SH_PATH_MAX-1) {
                        puts("FILE NAME IS TOO LONG");
                        parse_error = 1;
                        break;
                    }
                    current->redirect_file[ri++] = *p++;
                }
                if(parse_error) {
                    break;
                }
                current->redirect_file[ri] = '\0';
                current->redirect_append = 0;

                while(*p == ' ' || *p == '\t') {
                    p++;
                }
            }
            else if(*p == '>' && *(p+1) == '>') {
                if(token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
                p += 2;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }

                int ri = 0;
                while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                    if(ri >= SH_PATH_MAX-1) {
                        puts("FILE NAME IS TOO LONG");
                        parse_error = 1;
                        break;
                    }
                    current->redirect_file[ri++] = *p++;
                }
                if(parse_error) {
                    break;
                }
                current->redirect_file[ri] = '\0';
                current->redirect_append = 1;

                while(*p == ' ' || *p == '\t') {
                    p++;
                }
            }
            else if(*p == ' ' || *p == '\t') {
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                if(token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
            }
            else if(*p == '\0') {
                if (token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
                break;
            }
            else {
                token[token_len++] = *p;
                p++;

                if(token_len >= MAX_TOKEN-1) {
                    puts("ERR ARG NUM");
                    parse_error = 1;
                    break;
                }
            }
        }

        if(parse_error || commands.length() == 0) {
            free_command_list(commands);
            if(cmdline) {
                free(cmdline);
            }
            continue;
        }

        struct sCommand* first_command = (struct sCommand*)commands[0];

        if (commands.length() == 1 && command_argc(first_command) >= 1 && strcmp(command_argv_at(first_command, 0), "cd") == 0) {
            const char* target = "/";
            if (command_argc(first_command) >= 2 && command_argv_at(first_command, 1)[0]) {
                target = command_argv_at(first_command, 1);
            }
            int rc = minux_chdir(target);
            if (rc < 0) {
                puts("cd: failed\n");
            }
            free_command_list(commands);
            if(cmdline) {
                free(cmdline);
            }
            continue;
        }

        int shell_pgrp = minux_getpid();
        minux_tcsetpgrp(0, shell_pgrp);

        pid = minux_fork();

        if(pid == 0) {
            minux_tcsetpgrp(0, shell_pgrp);
            run_command(0, commands, debug_, shell_pgrp);
        }
        else {
            for(int k=0; k<commands.length(); k++) {
                int status;
                minux_wait(&status);
                printf("=> %d\r\n", status);
            }
        }

        free_command_list(commands);

        if(cmdline) {
            free(cmdline);
        }

        if(run_once) {
            exit(0);
        }
    }

    exit(0);
}
