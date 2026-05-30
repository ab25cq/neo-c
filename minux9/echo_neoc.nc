#include "minux_neoc.h"

int main(int argc, char** argv)
{
    for(int i=1; i<argc; i++) {
        if(i > 1) {
            minux_print(" ");
        }
        minux_print(argv[i]);
    }
    minux_print("\n");

    minux_exit(0);
}
