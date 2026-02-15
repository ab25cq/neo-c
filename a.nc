#include <neo-c.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    list<sData?>*% li = new list<sData?>();
    
    li.add(optional new sData { a:111, b:222 });
    li.add(optional null);
    
    printf("%d %d\n", li[0].a, li[0].b);
    li[1]!.if { printf("%d %d\n", li[1].a, li[1].b); }
    
    return 0;
}
