#include <stdio.h>

int main()
{
    int a[128];

    int* p = a;
    p++;

    if(p-a == 1) printf("%ld\n", p - a);

    return 0;
}
