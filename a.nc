#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

sData{} fun()
{
    vector<int>*% x = v[1,2,3];
    
    sData{} p = span borrow x;
    
    return p;
}

int main(int argc, char** argv)
{
    sData{} p = fun();
    
    printf("p.a %d\n", p.a);
    
    return 0;
}
