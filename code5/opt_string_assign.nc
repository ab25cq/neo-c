#include <neo-c.h>

typedef char*% string;

int main(int argc, char** argv)
{
    string s = string("XYZ");

    char*? os = opt borrow s;
    char*? oc = os;

    printf("%s %s\n", os.unwrap(), oc.unwrap());

    return 0;
}
