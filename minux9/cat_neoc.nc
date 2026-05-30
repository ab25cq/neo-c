#include "minux_neoc.h"

void cat_with_number(int fd)
{
    char buf[32];
    int n;
    int line_num = 1;
    bool at_line_start = true;

    while((n = minux_read(fd, buf, sizeof(buf))) > 0) {
        for(int i=0; i<n; i++) {
            if(at_line_start) {
                printf("%6d  ", line_num);
                at_line_start = false;
            }

            minux_write(1, &buf[i], 1);

            if(buf[i] == '\n') {
                line_num++;
                at_line_start = true;
            }
        }
    }
}

void cat_without_number(int fd)
{
    char buf[32];
    int n;

    while((n = minux_read(fd, buf, sizeof(buf))) > 0) {
        minux_write(1, buf, n);
    }
}

int main(int argc, char** argv)
{
    bool show_line_number = false;
    int file_start_index = 1;

    if(argc > 1 && minux_is_short_option(argv[1], 'n')) {
        show_line_number = true;
        file_start_index = 2;
    }

    if(argc == file_start_index) {
        if(show_line_number) {
            cat_with_number(0);
        }
        else {
            cat_without_number(0);
        }
    }
    else {
        for(int i=file_start_index; i<argc; i++) {
            int fd = 0;

            if(!minux_streq(argv[i], "-")) {
                fd = minux_open(argv[i], O_RDONLY, 0);
            }

            if(fd < 0) {
                printf("cat: cannot open %s\n", argv[i]);
                continue;
            }

            if(show_line_number) {
                cat_with_number(fd);
            }
            else {
                cat_without_number(fd);
            }

            if(fd != 0) {
                minux_close(fd);
            }
        }
    }

    minux_exit(0);
}
