#include <neo-c.h>

int main(int argc, char** argv)
{
    int a = 123;
    
    printf("""
\{a == 123 ? "aaa":"bbb"} 
bbbb
ccc
""");
    
    return 1;
}
