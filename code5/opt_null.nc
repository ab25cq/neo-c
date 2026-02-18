#include <neo-c.h>

int main(int argc, char** argv)
{
    int* p = null;
    int? o = opt p;

    // expected runtime error: null pointer exception
    printf("%d\n", *o);

    return 0;
}
