#include <neo-c.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    struct sData b;
    struct sData* a = &b;
    
    *a = (struct sData) {
        1, 2
    };
    
    return 0;
}
