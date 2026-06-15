#include <neo-c.h>

void leak_from_helper()
{
    int* value = borrow new int;
    *value = 123;
}

int main()
{
    leak_from_helper();
    return 0;
}
