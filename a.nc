#include <stdio.h>

struct sTask
{
    int sp;
};

int main(int argc, char** argv)
{
    struct sTask task;
    
    __asm volatile(
        "mrs  r0, psp          \n"   // r0 = PSP

        // push r4-r7 (Thumb-1 OK)
        "sub  r0, r0, #16      \n"
        "stmia r0!, {r4-r7}    \n"
        "sub  r0, r0, #16      \n"   // stmiaで進む分を戻して「先頭」にする

        // store r8-r11 (Thumb-1: mov経由)
        "mov  r1, r8           \n"
        "str  r1, [r0, #16]    \n"
        "mov  r1, r9           \n"
        "str  r1, [r0, #20]    \n"
        "mov  r1, r10          \n"
        "str  r1, [r0, #24]    \n"
        "mov  r1, r11          \n"
        "str  r1, [r0, #28]    \n"

        // now r0 points to start of saved block (32 bytes)
        "str  r0, [%0]         \n"   // task->sp = r0
        :
        : "r"(&task->sp)
        : "r0", "r1", "memory"
    );
    
    return 1;
}
