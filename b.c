#include <neo-c.h>

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void compile_err_msg(char* msg, ...)
{
    char msg2[1024];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024, msg, args);
    va_end(args);

    puts(msg2);
}

inline char*% xsprintf(char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    char* tmp;
    int len = vasprintf(&tmp, msg, args);
    va_end(args);

    return dummy_heap tmp;
}

int main()
{
    compile_err_msg("%d", 1+1);
    return 0;
}
