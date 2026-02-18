#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[4] = { 11, 22, 33, 44 };

    int{} s = span x;

    printf("%d\n", s[0]);
    printf("%d\n", s[3]);

    s[1] = 99;

    printf("%d\n", x[1]);

    return 0;
}
