#include <neo-c.h>

int main(int argc, char** argv)
{
    int x = 33;
    int* p = &x;

    int? o = opt p;

    printf("%d\n", *o);
    printf("%d\n", *o.unwrap());

    return 0;
}
