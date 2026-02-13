#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
    int d;
};

sData*{} fun()
{
    int xxx[8] = { 1,2,3,4,5,6,7,8 };
    struct sData*{} p = span xxx;
    
    return p;
}

int main(int argc, char** argv)
{
    var p = fun();
    
    printf("%d\n", p.a);
    printf("%d\n", p.b);
    printf("%d\n", p.c);
    printf("%d\n", p.d);
    
    p++;
    
    printf("%d\n", p.a);
    printf("%d\n", p.b);
    printf("%d\n", p.c);
    printf("%d\n", p.d);
    
    return 0;
}


