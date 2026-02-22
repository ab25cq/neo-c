#include <neo-c.h>

int main(int argc, char** argv)
{
    int*% hp = new int;
    *hp = 777;

    int? o = opt borrow hp;

    delete hp;

    printf("%d\n", *o);

    return 0;
}
