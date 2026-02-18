#include <neo-c.h>

int{} make_span()
{
    int x[4] = { 1, 2, 3, 4 };
    return span x;
}

int main(int argc, char** argv)
{
    int{} s = make_span();

    printf("%d\n", s[0]);

    return 0;
}
