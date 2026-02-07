#include <neo-c.h>


int main(int argc, char** argv)
{
    char a[5] = { 'a', '\0', 'b', '\0', 'c' };
    
    smart_pointer<char>*% p = new smart_pointer<char>(a, 5);
    
    printf("%d\n", *p);
    
    p++;
    
    printf("%d\n", *p);
   
    p++;
    
    return 0;
}

