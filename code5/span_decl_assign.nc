#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[4] = { 1, 2, 3, 4 };
    int{} s;

    s = span x;

    printf("%d\n", s[0]);
    printf("%d\n", s[3]);

    return 0;
}
