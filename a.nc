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
};


int main(int argc, char** argv)
{
    sData2*% data = new sData2;
    
    return 0;
}
