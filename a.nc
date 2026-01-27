#include <neo-c.h>


int fun()
{
    stackframe();
}

int fun2()
{
    fun();
}

int main(int argc, char** argv)
{
    fun2();
    
    return 0;
}
