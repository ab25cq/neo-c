#include <neo-c.h>

int main(int argc, char** argv)
{
    char a[5] = { 'a', '\0', 'b', '\0', 'c' };
    
    raw_ptr<char>*% p = new raw_ptr<char>(a);
    
    printf("%d\n", *p);
    
    p++;
    
    printf("%d\n", *p);
   
    p++;
    
    return 0;
}

