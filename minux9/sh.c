#include <stdint.h>
#include <stdarg.h>
#include "minux.h"

static const char* s_strchr(const char* s, int ch) {
    while (*s) { if (*s == (char)ch) return s; s++; }
    return NULL;
}

static int eval_line(char* buf, int debug_, int control_tty);

#define BUF_SIZE 64

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

// minimal helper: check if a path is an existing directory
static int isdir(const char* path) {
    int fd = opendir(path);
    if (fd >= 0) { closedir(fd); return 1; }
    return 0;
}



#define MAX_ARGV 32
#define MAX_ARG 32
#define MAX_COMMAND 16

#define PATH_MAX 32

static char g_cmdline[BUF_SIZE];
static int g_script_fd = -1;

static int script_readline_fd(int fd, char* out, int size)
{
    int i = 0;

    if(fd < 0 || out == NULL || size <= 1) {
        return -1;
    }

    while(i < size - 1) {
        char ch = 0;
        int nread = read(fd, &ch, 1);

        if(nread == 0) {
            if(i == 0) {
                return -1;
            }
            break;
        }
        if(nread < 0) {
            return -1;
        }

        out[i++] = ch;
        if(ch == '\n') {
            break;
        }
    }

    out[i] = '\0';
    return i;
}

static void normalize_line(char* buf)
{
    int len;
    char* head;

    len = strlen(buf);
    while(len > 0 && (buf[len-1] == '\n' || buf[len-1] == '\r')) {
        buf[--len] = '\0';
    }

    head = buf;
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

struct sCommand
{
    char argv[MAX_ARGV][MAX_ARG];
    int num_arg;
    char redirect_file[PATH_MAX];
    int redirect_append;
};

static void exec_command_argv(struct sCommand* command, int debug_)
{
    char* argv[MAX_ARGV];
    char envbuf[BUF_SIZE + 16];
    char* envp[2];
    int ei = 0;
    int j;
    const char* prefix = "MINUX_CMDLINE=";

    for(j=0; j<command->num_arg; j++) {
        argv[j] = command->argv[j];
    }
    argv[j] = (void*)0;

    for(int k=0; prefix[k]; k++) {
        envbuf[ei++] = prefix[k];
    }
    for(int k=0; g_cmdline[k] && ei < (int)sizeof(envbuf)-1; k++) {
        envbuf[ei++] = g_cmdline[k];
    }
    envbuf[ei] = '\0';
    envp[0] = envbuf;
    envp[1] = 0;

    if(command->redirect_file[0] != '\0') {
        int fd;
        if(command->redirect_append) {
            fd = open(command->redirect_file, O_APPEND|O_WRONLY|O_CREAT, 0644);
        }
        else {
            fd = open(command->redirect_file, O_WRONLY|O_CREAT|O_TRUNC, 0644);
        }

        if(fd < 0) {
            puts("REDIRECT WRITE FILE CAN'T BE OPENED");
            exit(1);
        }

        dup2(fd, 1);
        close(fd);
    }

    if(debug_) {
        execved(argv[0], argv, envp);
    }
    else {
        execve(argv[0], argv, envp);
    }
    if(argv[0] && argv[0][0] && !s_strchr(argv[0], '/')) {
        char abuf[64];
        int i = 0;

        abuf[0] = '/';
        while(argv[0][i] && i < (int)sizeof(abuf)-2) {
            abuf[i+1] = argv[0][i];
            i++;
        }
        abuf[i+1] = '\0';
        argv[0] = abuf;

        if(debug_) {
            execved(argv[0], argv, envp);
        }
        else {
            execve(argv[0], argv, envp);
        }
    }

    exit(126);
}

int run_command(int n, struct sCommand* commands, int num_commands, int debug_, int shell_pgrp)
{
    int pipes[2] = { 0, 0 };
    
    struct sCommand* command = commands + n;
    
    if(n == num_commands-1) {
        if(g_script_fd >= 0) {
            close(g_script_fd);
            g_script_fd = -1;
        }
        if(shell_pgrp >= 0) {
            tcsetpgrp(0, shell_pgrp);
        }
        exec_command_argv(command, debug_);
    }
    else {
        pipe(pipes);

        int pid = fork();

        if(pid == 0) {
            close(pipes[1]);
            dup2(pipes[0], 0);
            close(pipes[0]);
            run_command(n+1, commands, num_commands, debug_, shell_pgrp);
        }
        else {
            if(g_script_fd >= 0) {
                close(g_script_fd);
                g_script_fd = -1;
            }
            if(shell_pgrp >= 0) {
                tcsetpgrp(0, shell_pgrp);
            }
            close(pipes[0]);
            dup2(pipes[1], 1);
            close(pipes[1]);

            exec_command_argv(command, debug_);
        }
    }
    
    return 1;
}

static int eval_line(char* buf, int debug_, int control_tty)
{
    long n;
    pid_t pid;
    struct sCommand commands[MAX_COMMAND];
    int num_commands;
    int num_arg;
    char* p;

    int gi = 0;
    while (buf[gi] && gi < BUF_SIZE-1) {
        g_cmdline[gi] = buf[gi];
        gi++;
    }
    g_cmdline[gi] = '\0';

    if(buf[0] == '\0') {
        return 0;
    }

    num_commands = 0;
    num_arg = 0;
    p = buf;
    n = 0;

    commands[num_commands].redirect_file[0] = '\0';

    while(1) {
        if(*p == '|') {
            if(n > 0) {
                commands[num_commands].argv[num_arg][n] = '\0';
                num_arg++;
                if(num_arg >= MAX_ARGV) {
                    puts("ARG NUM ERROR");
                    break;
                }
            }
            p++;
            while(*p == ' ' || *p == '\t') {
                p++;
            }
            commands[num_commands].num_arg = num_arg;

            num_commands++;
            n = 0;
            num_arg = 0;
            commands[num_commands].redirect_file[0] = '\0';

            if(num_commands >= MAX_COMMAND) {
                puts("ERR MAX COMMAND");
                break;
            }
        }
        else if(*p == '>' && *(p+1) != '>') {
            if(n > 0) {
                commands[num_commands].argv[num_arg][n] = '\0';
                num_arg++;
                if(num_arg >= MAX_ARGV) {
                    puts("ARG NUM ERROR");
                    break;
                }
                n = 0;
            }
            p++;
            while(*p == ' ' || *p == '\t') {
                p++;
            }

            int i = 0;
            while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                commands[num_commands].redirect_file[i++] = *p++;

                if(i-1 >= PATH_MAX) {
                    puts("FILE NAME IS TOO LONG");
                    exit(2);
                }
            }
            commands[num_commands].redirect_file[i] = '\0';
            commands[num_commands].redirect_append = 0;

            while(*p == ' ' || *p == '\t') {
                p++;
            }
        }
        else if(*p == '>' && *(p+1) == '>') {
            if(n > 0) {
                commands[num_commands].argv[num_arg][n] = '\0';
                num_arg++;
                if(num_arg >= MAX_ARGV) {
                    puts("ARG NUM ERROR");
                    break;
                }
                n = 0;
            }
            p += 2;
            while(*p == ' ' || *p == '\t') {
                p++;
            }

            int i = 0;
            while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                commands[num_commands].redirect_file[i++] = *p++;

                if(i-1 >= PATH_MAX) {
                    puts("FILE NAME IS TOO LONG");
                    exit(2);
                }
            }
            commands[num_commands].redirect_file[i] = '\0';
            commands[num_commands].redirect_append = 1;

            while(*p == ' ' || *p == '\t') {
                p++;
            }
        }
        else if(*p == ' ' || *p == '\t') {
            while(*p == ' ' || *p == '\t') {
                p++;
            }
            if(n > 0) {
                commands[num_commands].argv[num_arg][n] = '\0';
                num_arg++;
                n = 0;
                if(num_arg >= MAX_ARGV) {
                    puts("ARG NUM ERROR");
                    break;
                }
            }
        }
        else if(*p == '\0') {
            if (n > 0) {
                commands[num_commands].argv[num_arg][n] = '\0';
                num_arg++;
                n = 0;
            }

            commands[num_commands].num_arg = num_arg;
            num_commands++;
            break;
        }
        else {
            commands[num_commands].argv[num_arg][n] = *p;
            p++;
            n++;

            if(n >= MAX_ARG) {
                puts("ERR ARG NUM");
                break;
            }
        }
    }

    if (num_commands == 1 && commands[0].num_arg >= 1 && strcmp(commands[0].argv[0], "cd") == 0) {
        const char* target = "/";
        if (commands[0].num_arg >= 2 && commands[0].argv[1][0]) {
            target = commands[0].argv[1];
        }
        if (chdir(target) < 0) {
            puts("cd: failed\n");
        }
        return 0;
    }

    {
        int shell_pgrp = -1;
        int wait_direct_shell =
            num_commands == 1
            && commands[0].num_arg >= 2
            && (strcmp(commands[0].argv[0], "sh") == 0
                || strcmp(commands[0].argv[0], "/sh") == 0)
            && strcmp(commands[0].argv[1], "-c") != 0;
        if(control_tty) {
            shell_pgrp = getpid();
            tcsetpgrp(0, shell_pgrp);
        }
        
        pid = fork();

        if(pid == 0) {
            if(shell_pgrp >= 0) {
                tcsetpgrp(0, shell_pgrp);
            }
            run_command(0, commands, num_commands, debug_, shell_pgrp);
        }
        else {
            int waits = wait_direct_shell ? 1 : num_commands;
            for(int k=0; k<waits; k++) {
                int status;
                int waited_pid;
                if(wait_direct_shell) {
                    waited_pid = waitdirect(&status);
                }
                else {
                    waited_pid = wait(&status);
                }
                if(waited_pid < 0) {
                    break;
                }
                printf("=> %d\r\n", status);
            }
        }
    }

    return 0;
}

int main(int argc, char** argv) {
    char buf[BUF_SIZE];
    char linebuf[BUF_SIZE];
    int script_fd = -1;
    
    int i;
    
    buf[0] = '\0';
    
    int run_once = 0;
    int debug_ = 0;
    const char* script_path = NULL;
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

    if(script_path != NULL) {
        script_fd = open(script_path, O_RDONLY, 0);
        if(script_fd < 0) {
            printf("sh: can't open %s\r\n", script_path);
            exit(1);
        }
        g_script_fd = script_fd;
    }

    for (;;) {
        char* cmdline = NULL;
        int control_tty = 0;
        debug_ = 0;
        
        if(run_once == 0 && script_path == NULL) {
            control_tty = 1;
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
        else if(script_path != NULL) {
            if(script_readline_fd(script_fd, linebuf, sizeof(linebuf)) < 0) {
                close(script_fd);
                g_script_fd = -1;
                exit(0);
            }
            
            strncpy(buf, linebuf, BUF_SIZE);
            normalize_line(buf);
        }

        eval_line(buf, debug_, control_tty);
        
        if(cmdline) {
            free(cmdline);
        }
        
        if(run_once) {
            exit(0);
        }
    }
    
    exit(0);
}
