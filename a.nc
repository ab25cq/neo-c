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
    struct data* d;
    
    int* a;
    
    d = a;
    
    return 0;
}

