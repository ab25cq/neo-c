#include <neo-c.h>

int main(int argc, char** argv)
{
    int* p = null;
    int? o = opt p;

    int* q = o.unwrap();
    printf("%p\n", q);

    return 0;
}
