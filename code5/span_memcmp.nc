#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[4] = { 10, 20, 30, 40 };
    int y[2] = { 10, 20 };

    int{} s = span x;

    printf("%d\n", s.memcmp(y, sizeof(y)) == 0);

    return 0;
}
