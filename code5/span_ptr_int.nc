#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[3] = { 5, 6, 7 };
    int* p = x;

    int{} s = span p;

    printf("%d\n", s[0]);
    printf("%d\n", s[1]);

    return 0;
}
