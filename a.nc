#include <assert.h>
    
int loop() 
{
    return (2, 1);
}

struct sData
{
    int a;
    int b;
    
    union {
        int c;
        int d;
    };
};


int main(int argc, char** argv)
{
    struct sData data;
    
    data.a = 111;
    data.b = 222;
    
    return 0;
}
