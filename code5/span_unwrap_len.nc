#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[4] = { 1, 2, 3, 4 };
    int{} s = span x;

    int* p = s.unwrap();

    printf("%d\n", p[2]);
    printf("%d\n", s.len());

    return 0;
}
