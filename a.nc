#include <neo-c.h>

class aaa
{
    int a;
    int b;
};

class bbb extends aaa
{
    int c;
}


int main(int argc, char** argv)
{
    bbb*% b = new bbb;
    
    aaa*% a = b;
    
    return 1;
}
