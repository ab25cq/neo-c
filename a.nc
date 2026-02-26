#include <neo-c.h>

struct A;
struct B;

struct A
{
    list<struct B*%>*% b;
    int x;
};

struct B
{
    list<struct A*%>*% a;
    int y;
};

int main(int argc, char** argv) 
{
    struct B*% b = new B;
                                    
    return 0;
}

