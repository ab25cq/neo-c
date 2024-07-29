#include <stdio.h>

int a[3] = { [1] = 2, 1, 3 };

static struct sA { int a; int b;}* gA;
int gB;

int main(int argc, char** argv)
{
    for(int i=0; i<3; i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}
