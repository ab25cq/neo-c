#include <neo-c.h>

int? make_opt()
{
    int x = 123;
    return opt &x;
}

int main(int argc, char** argv)
{
    int? o = make_opt();

    printf("%d\n", *o);

    return 0;
}
