#include <neo-c.h>

using safe;

#module XXX
{
    struct data {
        int a;
    };
}

XXX

int main(int argc, char** argv)
{
    int a[2];
    
    int b = a[1];
    
    return 0;
}

