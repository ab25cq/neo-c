#include <neo-c.h>

struct sData;
struct sData2;

struct sData
{
    sData2*% data2;
};

struct sData2
{
    _weak sData*% data;
    int n;
    int m
};


int main(int argc, char** argv)
{
    sData2*% data = new sData2;
    
    sData2 data2;
    
    sData2& data = ref &data2;
    
    data.n = 111;
    data.m = 222;
    
    printf("n %d m %d\n", data.n, data.m);
    
    return 0;
}

