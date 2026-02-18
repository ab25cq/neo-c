#include <neo-c.h>

int main(int argc, char** argv)
{
    int x = 10;
    int* p = &x;

    int& r = ref p;

    printf("%d\n", *r);

    int* q = r.unwrap();
    *q = 20;

    printf("%d\n", x);

    return 0;
}
