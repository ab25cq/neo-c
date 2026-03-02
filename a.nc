#include <neo-c.h>

struct sInfo
{
    char* commandString;
};

int main(int argc, char** argv) 
{
    int a[2];
    
    int{} p = span &a;
    
    p[0] = 128;
    p[1] = 256;
    p[2] = 365;
    
    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
                                   
    return 0;
}
