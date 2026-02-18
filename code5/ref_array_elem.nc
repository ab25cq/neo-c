#include <neo-c.h>

int main(int argc, char** argv)
{
    int x[3] = { 111, 222, 333 };

    int& p = ref &x[0];

    printf("%d\n", *p);

    return 0;
}
