#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
    int d;
};

void fun()
{
    int xxx[2] = { 1,2 }; //{ 1,2,3,4,5,6,7,8 };
    struct sData*{} p = span xxx;
    
    printf("%d\n", p[0].a);
    printf("%d\n", p[0].b);
    printf("%d\n", p[0].c);
    printf("%d\n", p[0].d);
    
    printf("%d\n", p[1].a);
    printf("%d\n", p[1].b);
    printf("%d\n", p[1].c);
    printf("%d\n", p[1].d);
}

int main(int argc, char** argv)
{
    fun();
    
    return 0;
}


