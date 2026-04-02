#include <neo-c.h>

int bad_default_fun(int n = "ABC")
{
    return n;
}

int main()
{
    return bad_default_fun();
}
