#include <neo-c.h>

void fun()
{
    int* a = borrow new int;
    *a = 123;

    printf("%d\n", *a);
}
                            
int main(int argc, char** argv) 
{
    fun();
                                    
    return 0;
}
