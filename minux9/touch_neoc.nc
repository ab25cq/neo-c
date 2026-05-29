#include "minux_neoc.h"

int main(int argc, char** argv)
{
    if(argc < 2) {
        minux_println("usage: touch FILE...");
        minux_exit(1);
    }

    for(int i=1; i<argc; i++) {
        const char* path = argv[i];

        if(minux_string_is_empty(path)) {
            continue;
        }

        int fd = minux_open(path, O_WRONLY | O_CREAT, 0644);

        if(fd < 0) {
            minux_print("touch: failed: ");
            minux_println(path);
            continue;
        }

        minux_close(fd);
        minux_utimes(path, 0xFFFFFFFFU, 0xFFFFFFFFU);
    }

    minux_exit(0);
}
