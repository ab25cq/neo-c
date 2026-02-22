#include <neo-c.h>

int main(int argc, char** argv)
{
    int*% hp = new int;
    *hp = 123;

    int& r = ref borrow hp;

    delete hp;

    printf("%d\n", *r);

    return 0;
}
