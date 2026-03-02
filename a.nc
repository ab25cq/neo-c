#include <neo-c.h>

struct sInfo
{
    char* commandString;
};

int main(int argc, char** argv) 
{
    int*% a = new int[3];
    
    int{} p = span borrow a;
    
    p[0] = 128;
    p[1] = 256;
    p[2] = 256;
    
    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);
                                   
    return 0;
}
