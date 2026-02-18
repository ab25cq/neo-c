#include <neo-c.h>

int main(int argc, char** argv)
{
    int x = 9;
    int y = 42;

    int? o = opt &x;
    printf("%d\n", *o);

    o = opt &y;
    printf("%d\n", *o.unwrap());

    return 0;
}
