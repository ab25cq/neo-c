#include <neo-c.h>

void putchar(char c)
{
    (void)c;
}

int firmware_entry()
{
    int32_t value = 70000L;
    puts("neo-c micro16");
    return sizeof(void*) == 2 && sizeof(size_t) == 2 && sizeof(value) == 4 ? 0 : 1;
}
