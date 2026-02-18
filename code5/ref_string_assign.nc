#include <neo-c.h>

typedef char*% string;

int main(int argc, char** argv)
{
    string s = string("ABC");

    string& rs = ref s;
    char*%& rc = rs;

    printf("%s %s\n", rs.unwrap(), rc.unwrap());

    return 0;
}
