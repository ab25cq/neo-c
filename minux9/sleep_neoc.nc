#include "minux_neoc.h"

int main(int argc, char** argv)
{
    var sec = 0;

    for(int i=1; i<argc; i++) {
        sec = atoi(argv[i]);
    }

    sleep(sec);

    minux_exit(0);
}
