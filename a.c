#include <stdio.h>

struct sData
{
    long buf2[4];
};

puts(alignof(sData));

int main(int argc, char** argv)
{
    printf("size %ld\n", _Alignof(struct sData));
    
    return 0;
}
