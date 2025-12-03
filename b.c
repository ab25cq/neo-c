#include <neo-c.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#undef va_start
#define va_start(ap, last) __builtin_va_start(ap, last)
#include <limits.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>
#include <ctype.h>
#include <curses.h>
#include <unistd.h>
#include <curses.h>
#include <unistd.h>
#include <signal.h>

struct sData
{
    struct {
        int a;
        int b;
    };
    
    int c;
};


int main(int argc, char** argv)
{
    struct sData data;
    
    int x = data.a + data.b;

    return 0;
}
