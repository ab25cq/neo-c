#include <neo-c.h>

struct Foo
{
    int a ;
    int b;
};

int main(int argc, char** argv)
{
    _Complex double a;
    _Alignas(double) int x;
    _Alignas(double) struct Foo foo;
    
    return 0;
}
