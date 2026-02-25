#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

int main(int argc, char** argv)
{
    var x = v[1,2,3];
    
    sData{} p = span borrow x;
    
    printf("p.a %d\n", p.a);
    
    return 0;
}
