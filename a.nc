#include <neo-c.h>

struct sData
{
    int a;
    const char* b;
};

int main(int argc, char** argv) 
{
    [new sData { a:777, b:"AAA"}, new sData { a:111, b:"BBB"}, new sData { a:333, b:"CCC" } ].sort().to_string().puts();
    
    return 0;
}

