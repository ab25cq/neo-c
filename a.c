#include <neo-c.h>

struct sData
{
    int* a;
};

int main(int argc, char** argv)
{
    sData data;
    
    *data.a = 111;
    
    return 0;
}
