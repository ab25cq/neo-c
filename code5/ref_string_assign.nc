#include <neo-c.h>

typedef char*% string;

int main(int argc, char** argv)
{
    string s = string("ABC");

    char*& rs = ref borrow &s;
    char*& rc = rs;

    printf("%s %s\n", *rs, *rc);

    return 0;
}
