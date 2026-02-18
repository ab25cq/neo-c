#include <neo-c.h>

int main(int argc, char** argv)
{
    ref<int*>* r = null;

    int* p = r.unwrap();

    printf("%p\n", p);

    return 0;
}
