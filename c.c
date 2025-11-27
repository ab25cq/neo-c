#include <stdio.h>
#include <stdlib.h>

struct Bits {
    unsigned a:3;
    signed b:5;
};

struct anonymous_typeX2 {
    int v;
};

struct anonymous_typeX2 fun()
{
    struct anonymous_typeX2 x;
    return x;
}

int main() {
    struct anonymous_typeX2 x;
    if(        !(((struct anonymous_typeX2)fun()).v==3)        ) {
    }
    
    return 0;
}
