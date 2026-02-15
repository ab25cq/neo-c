#include <neo-c.h>

list<int>*% fun()
{
    return new list<int>();
}

int main(int argc, char** argv)
{
    char*{}% p = span s"ABCDEFG";
    
    (p.memcmp("ABCEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", 10) == 0).if {
        puts("OK");
    }
    
    return 0;
}
