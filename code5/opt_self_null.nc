#include <neo-c.h>

int main(int argc, char** argv)
{
    optional<int*>* o = null;

    int* p = o.unwrap();
    printf("%p\n", p);

    return 0;
}
