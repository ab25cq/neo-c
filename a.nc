#include <neo-c.h>

int main(int argc, char** argv) 
{
    int v[5] = { 1,2,3,4,5 };
    
    int& p = ref v;
    
    printf("%d\n", *p);
    p++;
    
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;
                                   
    return 0;
}

