#include "minux_neoc.h"

int main(int argc, char** argv)
{
    if(argc == 2) {
        var arg = argv[1];

        minux_print(arg);
        minux_print("\r\n");
    }

    minux_exit(0);
}
