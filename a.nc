#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

sData gData = { 1, 2, 3 };

sData{} fun()
{
    sData{} p = span &gData;
    
    return p;
}    

int main(int argc, char** argv) 
{
    var p = fun();
    
    printf("%d %d %d\n", p!.a, p!.b, p!.c);
                                   
    return 0;
}
