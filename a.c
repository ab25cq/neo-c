#include <neo-c.h>

struct sData
{
    int* a;
};


int main(int argc, char** argv)
{
    sData data;
    
    int b = 123;
    
    *data.a = b;
    
    return 0;
}
