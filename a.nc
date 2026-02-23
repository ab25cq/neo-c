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
    
    int{} p = span borrow x;
    p++;
    p++;
    p++;
    
    printf("%d\n", *p);
    
    return 0;
}
