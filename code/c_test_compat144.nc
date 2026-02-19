// C11 preprocessor: #include MACRO form must allow header-name expansion.
#define COMPAT144_HDR1 <stdio.h>
#define COMPAT144_HDR2 "stdlib.h"

#include COMPAT144_HDR1
#include COMPAT144_HDR2

int main(void)
{
    puts("OK");
    return 0;
}
