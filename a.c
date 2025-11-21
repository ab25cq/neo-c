#include <stdio.h>

struct sData
{
    int (*pa)[3];
};

int main(int argc, char** argv)
{
    struct sData data;
    int arr[3] = {1,2,3};
    int s = ({ data.pa = &arr; int sum = 0; for (size_t i=0;i<sizeof(arr)/sizeof(arr[0]);i++) { sum += (*data.pa)[i]; ({ printf("%d\n", (*data.pa)[i]); }) } ({ printf("sum %d\n", sum); }) sum; });
    
    printf("%d\n", s);
    
    return 0;
}
