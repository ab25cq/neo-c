#include "minux.h"

static int contains(const char *line, const char *needle) {
    int nlen = strlen(needle);
    if (nlen == 0) {
        return 1;
    }

    for (int i = 0; line[i]; i++) {
        if (memcmp(line + i, needle, nlen) == 0) {
            return 1;
        }
    }
    return 0;
}

static void write_int(int n) {
    char buf[16];
    int len = 0;

    if (n == 0) {
        write(1, "0", 1);
        return;
    }

    while (n > 0 && len < (int)sizeof(buf)) {
        buf[len++] = '0' + (n % 10);
        n /= 10;
    }

    while (len > 0) {
        write(1, &buf[--len], 1);
    }
}

static void usage(void) {
    char *msg = "usage: grep [-vn] PATTERN [FILE...]\n";
    write(2, msg, strlen(msg));
}

static int parse_option(const char *arg, int *invert, int *number) {
    if (arg[0] != '-' || arg[1] == '\0') {
        return 0;
    }

    for (int i = 1; arg[i]; i++) {
        if (arg[i] == 'v') {
            *invert = 1;
        } else if (arg[i] == 'n') {
            *number = 1;
        } else {
            return -1;
        }
    }

    return 1;
}

static int grep_fd(int fd, const char *pattern, int invert, int number) {
    char line[256];
    int len = 0;
    int matched = 0;
    int line_no = 1;
    char ch;

    while (read(fd, &ch, 1) == 1) {
        if (ch == '\r') {
            continue;
        }
        if (ch == '\n') {
            line[len] = '\0';
            if (contains(line, pattern) != invert) {
                if (number) {
                    write_int(line_no);
                    write(1, ":", 1);
                }
                write(1, line, len);
                write(1, "\n", 1);
                matched = 1;
            }
            len = 0;
            line_no++;
            continue;
        }
        if (len < (int)sizeof(line) - 1) {
            line[len++] = ch;
        }
    }

    if (len > 0) {
        line[len] = '\0';
        if (contains(line, pattern) != invert) {
            if (number) {
                write_int(line_no);
                write(1, ":", 1);
            }
            write(1, line, len);
            write(1, "\n", 1);
            matched = 1;
        }
    }

    return matched;
}

int main(int argc, char **argv) {
    int matched = 0;
    int invert = 0;
    int number = 0;
    int pattern_index = 0;
    int file_index = 0;

    if (argc < 2) {
        usage();
        exit(1);
    }

    for (pattern_index = 1; pattern_index < argc; pattern_index++) {
        int opt = parse_option(argv[pattern_index], &invert, &number);
        if (opt < 0) {
            usage();
            exit(1);
        }
        if (opt == 0) {
            break;
        }
    }

    if (pattern_index >= argc) {
        usage();
        exit(1);
    }

    file_index = pattern_index + 1;

    if (argc == file_index) {
        matched = grep_fd(0, argv[pattern_index], invert, number);
    } else {
        for (int i = file_index; i < argc; i++) {
            int fd = open(argv[i], O_RDONLY, 0);
            if (fd < 0) {
                write(2, "grep: cannot open ", 18);
                write(2, argv[i], strlen(argv[i]));
                write(2, "\n", 1);
                continue;
            }
            if (grep_fd(fd, argv[pattern_index], invert, number)) {
                matched = 1;
            }
            close(fd);
        }
    }

    exit(matched ? 0 : 1);
}
