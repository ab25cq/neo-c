#include <stdio.h>

extern int gGlobalVar;

uniq int gGlobalVar = 777;

uniq void funX(int a)
{
    printf("%d\n", a);
    printf("%d\n", gGlobalVar);
}

