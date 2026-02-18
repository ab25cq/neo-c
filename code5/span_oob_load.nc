#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[4] = { 1, 2, 3, 4 };
    int{} s = span x;

    printf("%d\n", s[4]);

    return 0;
}
