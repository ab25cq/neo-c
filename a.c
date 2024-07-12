#include <neo-c.h>

static __inline unsigned long long __DOUBLE_BITS(double __f)
{
    union {double __f; unsigned long long __i;} __u;
    __u.__f = __f;
    return __u.__i;
}


int main(int argc, char** argv)
{
    union { int a; int b; } data;
    
    return 0;
}
