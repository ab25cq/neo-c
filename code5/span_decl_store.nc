#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[4] = { 1, 2, 3, 4 };
    int{} s;

    s = span x;
    s[1] = 99;

    printf("%d\n", x[1]);

    return 0;
}
