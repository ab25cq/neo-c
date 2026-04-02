#include <neo-c.h>

int bad_plain()
{
    return missing_plain_value;
}

int main()
{
    return bad_plain();
}
