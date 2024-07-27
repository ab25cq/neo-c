#include <stdarg.h>

int print(char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    int x = va_arg(ap, int);
    va_end(ap);
}

int main(int argc, char** argv)
{
    
    return 0;
}
