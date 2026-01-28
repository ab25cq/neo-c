#include <neo-c.h>

int fun(int*% aaa)
{
    return 0;
}

int main(int argc, char** argv)
{
    int a = 111;
    int*% b = new int;
    
    fun(b);
    
    
    return 0;
}
