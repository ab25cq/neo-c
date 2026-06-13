#include <neo-c.h>

void putchar(char c)
{
    (void)c;
}

int firmware_entry()
{
    puts("neo-c micro32");
    return sizeof(void*) == 4 && sizeof(size_t) == 4 ? 0 : 1;
}
