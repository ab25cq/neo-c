#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};


int main(int argc, char** argv)
{
    int x[3] = { 1, 2, 3 };
    int*% y = new int(5);
    
    int? p = opt borrow new int(5);
    
    printf("%d\n", *p);
    
    return 0;
}
