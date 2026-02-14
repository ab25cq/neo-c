#include <neo-c.h>

int*% fun()
{
    return new int[3];
}


int main(int argc, char** argv)
{
    int*%{} p = span fun();
    
    p[0] = 123;
    p[1] = 123;
    p[2] = 123;
    
    printf("%d %d %d\n", p[0], p[1], p[2]);
    
    return 0;
}
