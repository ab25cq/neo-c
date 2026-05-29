#include "minux_neoc.h"

#define MAX_STAGE_ARGS 32

void exec_command(char** argv2, int argc2)
{
    if(argc2 == 0) {
        printf("pipeline: empty command\n");
        minux_exit(1);
    }

    minux_execv(argv2[0], argv2);

    if(argv2[0][0] != '/') {
        char abuf[64];
        abuf[0] = '/';

        int i = 0;
        while(argv2[0][i] && i < 62) {
            abuf[i+1] = argv2[0][i];
            i++;
        }
        abuf[i+1] = '\0';

        minux_execv(abuf, argv2);
    }

    printf("pipeline: exec failed %s\n", argv2[0]);
    minux_exit(127);
}

int main(int argc, char** argv)
{
    var token_list = new list<char*>.initialize();

    for(int i=1; i<argc; i++) {
        if(argv[i] && argv[i][0]) {
            if(minux_streq(argv[i], ":")) {
                printf("pipeline: multi-stage mode is not enabled yet\n");
                minux_exit(1);
            }

            token_list.add(argv[i]);
        }
    }

    int num_tokens = token_list.length();
    char* argv2[MAX_STAGE_ARGS];

    if(num_tokens == 0) {
        printf("usage: pipeline cmd arg...\n");
        minux_exit(1);
    }

    if(num_tokens >= MAX_STAGE_ARGS) {
        printf("pipeline: too many args\n");
        minux_exit(1);
    }

    for(int i=0; i<num_tokens; i++) {
        argv2[i] = token_list[i];
    }
    argv2[num_tokens] = null;

    exec_command(argv2, num_tokens);
    minux_exit(1);
}
