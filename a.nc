#include <neo-c.h>

int main(int argc, char** argv)
{
    char ary[3] = { '1', '\0', '2' };
    
    var p = array_to_slice(ary);
    
    p[0] = 'a';
    
    printf("%c\n", p[3]);
    
    return 0;
}

