#include <neo-c.h>

int main(int argc, char** argv)
{
    int x = 9;
    int? o = opt &x;

    printf("%d\n", *o);

    return 0;
}
