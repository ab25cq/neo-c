#include <neo-c.h>

int main(int argc, char** argv)
{
    asm volatile (
        "ldr r0, =R4; \n"
        "str r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
    
    return 1;
}
