#include <neo-c.h>

#module FUN(o) {
    int a = o;
    printf("%d\n", a);
}

int main(int argc, char** argv) 
{
    FUN(3)
    
    return 0;
}

