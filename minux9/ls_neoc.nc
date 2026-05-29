#include "minux_neoc.h"

int main(int argc, char** argv)
{
    const char* argpath = "";

    for(int i=1; i<argc; i++) {
        if(argv[i] && argv[i][0] == '-' && argv[i][1]) {
        }
        else if(!minux_string_is_empty(argv[i])) {
            argpath = argv[i];
        }
    }

    if(argpath[0]) {
        struct stat stf;
        minux_stat(argpath, &stf);
        printf("%s %d\r\n", argpath, stf.size);
        minux_exit(0);
    }

    int dfd = minux_opendir(argpath);
    if(dfd < 0) {
        printf("opendir failed\n");
        minux_exit(1);
    }

    struct dirent ents[32];

    while(true) {
        int n = minux_readdir(dfd, ents, 32);

        if(n < 0) {
            printf("readdir error\n");
            break;
        }

        if(n == 0) {
            break;
        }

        for(int i=0; i<n; i++) {
            int len = minux_dirent_name_len(&ents[i]);

            if(len == 0) {
                continue;
            }

            minux_printn(ents[i].name, len);
            minux_print("\n");
        }
    }

    minux_closedir(dfd);
    minux_exit(0);
}
