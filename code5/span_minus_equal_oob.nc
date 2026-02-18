#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[4] = { 1, 2, 3, 4 };
    int{} s = span x;

    s += 1;
    s -= 2;
    printf("%d\n", *s);

    return 0;
}
