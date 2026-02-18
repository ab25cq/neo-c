#include <neo-c.h>

int main(int argc, char** argv)
{
    span<int*>* s = null;

    int* p = s.unwrap();
    printf("%p\n", p);

    return 0;
}
