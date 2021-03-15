#include <neo-c.h>

void fun()
{
    vector<int>*% v = new vector<int>.initialize();

    v.push_back(1);
    v.push_back(2);
}

int main()
{
    char* str = borrow string("AAA");
    fun();
    return 0;
}
