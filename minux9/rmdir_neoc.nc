#include "minux_neoc.h"

void strip_trailing_slashes(char* path)
{
    int n = 0;

    while(path[n]) {
        n++;
    }

    while(n > 1 && path[n-1] == '/') {
        path[--n] = '\0';
    }
}

void dirname_buf(const char* path, char* out, int outsz)
{
    int n = 0;

    while(path[n] && n < outsz-1) {
        out[n] = path[n];
        n++;
    }

    out[n] = '\0';
    strip_trailing_slashes(out);

    int i = n-1;
    while(i > 0 && out[i] != '/') {
        i--;
    }

    if(i == 0) {
        out[1] = '\0';
        return;
    }

    out[i] = '\0';
}

int main(int argc, char** argv)
{
    bool parents = false;
    int first_path = 1;
    bool errs = false;

    for(int i=1; i<argc; i++) {
        if(argv[i] && argv[i][0] == '-' && argv[i][1]) {
            for(int k=1; argv[i][k]; k++) {
                if(argv[i][k] == 'p') {
                    parents = true;
                }
                else {
                    minux_println("rmdir: invalid option");
                    return 1;
                }
            }
        }
        else {
            first_path = i;
            break;
        }
    }

    if(argc <= first_path) {
        minux_println("rmdir: missing operand");
        return 1;
    }

    for(int i=first_path; i<argc; i++) {
        const char* path = argv[i];

        if(minux_string_is_empty(path)) {
            minux_println("rmdir: invalid path");
            errs = true;
            continue;
        }

        if(minux_rmdir(path) < 0) {
            minux_println("rmdir: failed");
            errs = true;
            continue;
        }

        if(parents) {
            char cur[256];
            int n = 0;

            while(path[n] && n < sizeof(cur)-1) {
                cur[n] = path[n];
                n++;
            }
            cur[n] = '\0';

            while(true) {
                strip_trailing_slashes(cur);

                if(cur[0] == '/' && cur[1] == '\0') {
                    break;
                }

                dirname_buf(cur, cur, sizeof(cur));

                if(cur[0] == '/' && cur[1] == '\0') {
                    break;
                }

                if(minux_rmdir(cur) < 0) {
                    break;
                }
            }
        }
    }

    return errs ? 1 : 0;
}
