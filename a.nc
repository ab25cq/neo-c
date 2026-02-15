#include <neo-c.h>

list<int>*% fun()
{
    return new list<int>();
}

int main(int argc, char** argv)
{
    list<int>*%& p = ref [1,2,3];
    
    puts(p.to_string());
    
    return 0;
}
