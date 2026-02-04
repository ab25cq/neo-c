#include <stdio.h>
#include <stddef.h>

__attribute__((noreturn)) void die(void) __attribute__((cold));

struct __attribute__((packed)) Packed {
    char a;
    int b;
};

int g1 __attribute__((aligned(16))) = 0;

__attribute__((noreturn)) void die(void) __attribute__((cold))
{
    for(;;) {
    }
}

int main(void)
{
    struct Packed p = {0};
    printf("packed=%zu aligned=%d\n", sizeof(p), g1);
    return 0;
}
