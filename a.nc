#include <neo-c.h>

void fun()
{
    list<int>* a = borrow new list<int>();
}

int main(int argc, char** argv) 
{
    fun();
                                   
    return 0;
}
