#include <neo-c.h>


int main(int argc, char** argv)
{
    int a[3] = { 1, 2, 3 };
    
    printf("%d\n", sizeof(a));
    
    int*{} p = span a;
    
    printf("%d\n", *p);
    
    p[2] = 3;
    
    printf("%d\n", p[2]);
    
    return 0;
}
