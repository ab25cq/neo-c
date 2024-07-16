#include <neo-c.h>
#include <time.h>

int fun(int a, int b)
{
    return a + b;
}

int main(int argc, char** argv)
{
    int (*funX)(int,int) = fun;
    
    (*funX)(1,2);
    
    return 0;
}
