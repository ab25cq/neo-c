#include "minux_neoc.h"

bool isdir(const char* path)
{
    struct stat st;

    if(minux_stat(path, &st) < 0) {
        return false;
    }

    return st.type == T_DIR;
}

int mkdir_p(const char* path, int mode)
{
    if(minux_string_is_empty(path)) {
        return -1;
    }

    char accum[256];
    int ap = 0;
    const char* s = path;

    accum[0] = '\0';

    if(*s == '/') {
        accum[ap++] = '/';
        accum[ap] = '\0';

        while(*s == '/') {
            s++;
        }
    }

    while(*s) {
        char name[64];
        int ni = 0;

        while(s[0] && s[0] != '/' && ni < sizeof(name)-1) {
            name[ni++] = *s++;
        }

        name[ni] = '\0';

        while(*s == '/') {
            s++;
        }

        if(ni == 0) {
            continue;
        }

        if(!(ap == 1 && accum[0] == '/')) {
            if(ap < sizeof(accum)-1) {
                accum[ap++] = '/';
            }
        }

        for(int k=0; k<ni && ap < sizeof(accum)-1; k++) {
            accum[ap++] = name[k];
        }

        accum[ap] = '\0';

        if(isdir(accum)) {
            continue;
        }

        if(minux_mkdir(accum, mode) < 0) {
            return -1;
        }
    }

    return 0;
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
                    minux_println("mkdir: invalid option");
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
        minux_println("mkdir: missing operand");
        return 1;
    }

    for(int i=first_path; i<argc; i++) {
        const char* path = argv[i];

        if(minux_string_is_empty(path)) {
            minux_println("mkdir: invalid path");
            errs = true;
            continue;
        }

        int rc = parents ? mkdir_p(path, 0755) : minux_mkdir(path, 0755);

        if(rc < 0) {
            minux_println("mkdir: failed");
            errs = true;
        }
    }

    return errs ? 1 : 0;
}
