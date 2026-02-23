#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};


int main(int argc, char** argv)
{
    int x[3] = { 1, 2, 3 };
    
    int& p = ref x;
    
    printf("%s\n", *p);
    
    return 0;
}
