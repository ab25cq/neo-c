#include <neo-c.h>

int main(int argc, char** argv)
{
    int* p = null;

    int& r = ref p;

    printf("%d\n", *r);

    return 0;
}
