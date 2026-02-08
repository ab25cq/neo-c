#include <neo-c.h>

int main(int argc, char** argv)
{
    var p = s"aaa".to_slice();
    
    p[2] = 'a';
    
    printf("%c\n", p[2]);
    
    return 0;
}

