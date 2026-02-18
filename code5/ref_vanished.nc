#include <neo-c.h>

int& make_ref()
{
    int x = 123;
    return ref &x;
}

int main(int argc, char** argv)
{
    int& r = make_ref();

    printf("%d\n", *r);

    return 0;
}
