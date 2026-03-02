#include <neo-c.h>

span<int*>*% fun()
{
    var v = v[1,2,3,4,5];
    
    span<int*>*% p = span borrow v;
    
    return p;
}

int main(int argc, char** argv) 
{
    var p = fun();
    
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

