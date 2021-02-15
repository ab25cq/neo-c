#include "common.h"
#include <signal.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <libgen.h>

char* gVersion = "1.0.1";

int main(int argc, char** argv)
{
    int i;

    setlocale(LC_ALL, "");

    bool opt_c = false;
    char source[BUFSIZ];
    bool no_load_fudamental_classes = false;
    char sname[PATH_MAX];
    xstrncpy(sname, "", PATH_MAX);

    for(i=1; i<argc; i++) {
        if(strcmp(argv[i], "-core") == 0) {
            no_load_fudamental_classes = true;
        }
        else if(strcmp(argv[i], "-c") == 0) {
            opt_c = true;

            if(i+1 < argc) {
                xstrncpy(source, argv[i+1], BUFSIZ);
                i++;
            }
            else {
                opt_c = false;
            }
        }
        else if(strcmp(argv[i], "--version") == 0 || strcmp(argv[i], "-version") == 0 || strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "-V") == 0)
        {
            printf("sevenstars lang version %s\n", gVersion);
            exit(0);
        }
        else {
            xstrncpy(sname, argv[i], PATH_MAX);
        }
    }

    if(sname[0] != '\0') {
        set_signal();

        char* p = sname + strlen(sname);

        while(p >= sname) {
            if(*p == '.') {
                break;
            }
            else {
                p--;
            }
        }

        if(p < sname) {
            p = NULL;
        }

        char* ext_sname = p;

        clover3_init(no_load_fudamental_classes);

        if(!compiler(sname)) {
            fprintf(stderr, "sevenstars can't compile %s\n", argv[i]);
            clover3_final();
            return 1;
        }

        clover3_final();
    }
    else if(opt_c) {
        set_signal();

        char* p = sname + strlen(sname);

        while(p >= sname) {
            if(*p == '.') {
                break;
            }
            else {
                p--;
            }
        }

        if(p < sname) {
            p = NULL;
        }

        char* ext_sname = p;

        clover3_init(no_load_fudamental_classes);

        if(!compiler2(string(source).to_buffer())) {
            fprintf(stderr, "sevenstars can't compile %s\n", argv[i]);
            clover3_final();
            return 1;
        }

        clover3_final();
    }
    else {
        set_signal_shell();

        var types = new vector<sCLType*%>.initialize();

        clover3_init(no_load_fudamental_classes);

        heap_init(HEAP_INIT_SIZE, HEAP_HANDLE_INIT_SIZE);
        shell(types);
        heap_final();

        clover3_final();
    }

    return 0;
}
