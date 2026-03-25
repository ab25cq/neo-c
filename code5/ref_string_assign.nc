#include <neo-c.h>

int main(int argc, char** argv)
{
    char*% s = string("ABC");

    char*& rs = ref borrow &s;
    char*& rc = ref borrow &s;

    printf("%s %s\n", *rs, *rc);

    return 0;
}
