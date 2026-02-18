#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[4] = { 10, 20, 30, 40 };
    int{} s = span x;

    int* p = s + 1;
    int* q = s + 3;
    int* r = q - 2;

    printf("%d\n", *p);
    printf("%d\n", *r);

    return 0;
}
