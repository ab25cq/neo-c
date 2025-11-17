#include <stdio.h>
#include <stdlib.h>

int main() {
    int **a, *b;
    int accum = 0;
    for (int i = 0, j = 5; i < 3; i++, j--) {
        accum += i + j;
    }
//    printf("%d\n", accum);
/*
    if(accum == (0+5) + (1+4) + (2+3)) {
        puts("OK");
    }
*/
    
    return 0;
}
