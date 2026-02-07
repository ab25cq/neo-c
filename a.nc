#include <neo-c.h>

int main(int argc, char** argv)
{
    char ary[3] = { '1', '\0', '2' };
    
    var p = new slice<char>(ary, 3);
    
    p[0] = 'a';
    
    printf("%c\n", p[3]);
    
    return 0;
}

