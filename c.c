#include <stdio.h>
#include <stdlib.h>

typedef unsigned (*uop_t)(unsigned);

static unsigned rotl5(unsigned x) {
    return 0u;
}

static unsigned rotl6(unsigned x) {
    return 0u;
}

int main() {
    uop_t ops[] = { rotl5, rotl6 };
    unsigned v = 0x12345678u;
    unsigned rotated = ops[0](v);
    
    return 0;
}
