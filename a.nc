#include <neo-c.h>

struct sData
{
    int& m;
};

struct sData2
{
    int*% n;
};

sData*% fun()
{
    sData2*% data2 = new sData2;
    
    data2->n = new int(777);
    
    sData*% data = new sData;
    
    data.m = ref borrow data2.n;
    
    return data;
}

int main(int argc, char** argv)
{
    var data = fun();
    
    printf("%d\n", *data.m);
    
    return 0;
}

