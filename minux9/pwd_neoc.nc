#include "minux_neoc.h"

int main(int argc, char** argv)
{
    char buf[256];

    var n = minux_getcwd_user(buf, sizeof(buf));

    if(n < 0) {
        minux_println("pwd: getcwd failed");
        minux_exit(1);
    }

    if(n == 0 || buf[0] == '\0') {
        buf[0] = '/';
        buf[1] = '\0';
        n = 1;
    }

    minux_printn(buf, n);
    minux_print("\n");

    minux_exit(0);
}
