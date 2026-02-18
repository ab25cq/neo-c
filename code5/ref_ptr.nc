#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[3] = { 111, 222, 333 };
    int* q = &x[0];

    int& p = ref q;

    printf("%d\n", *p);

    int* r = p.unwrap();
    *r = 444;

    printf("%d\n", x[0]);

    return 0;
}
