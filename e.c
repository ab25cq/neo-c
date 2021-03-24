#include <neo-c.h>

int main()
{
    int a;
    int* b = &a;

    if(true) {
        puts("AAA");
    }

    *b = 111;

    return 0;
}
