#include <neo-c.h>

int*% aaa() 
{
    return new int(5);
}


int main(int argc, char** argv)
{
    int*% a = aaa();
    return 0;
}
