#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

int main(void) {
/*
    int arr[5] = {1,2,3,4,5};
    int (*aaa)[5] = &arr;
    printf("%d\n", (*aaa)[2]);
    
    printf("%ld\n", sizeof(*aaa));
    printf("%ld\n", sizeof(aaa));
    
    int x = 1, y = 2, z = 3;
    int *aaa[5] = {&x, &y, &z, NULL, NULL};
    printf("%d\n", *aaa[1]); // 2
*/
    
    int mat[5][3] = {0};
    int ((*aaa)[5])[3] = &mat;   // 2次元配列全体へのポインタ
      
    (*aaa)[2][1] = 42;           // mat[2][1] に書き込む
    
    printf("%d\n", (*aaa)[2][1]);
    
    return 0;
}
