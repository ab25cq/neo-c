#include <neo-c.h>

struct sData
{
    int a;
    int b;
};

using comelang;

fn fun(aaa:sData): i32
{
    printf("a %d b %d\n", aaa->a, aaa->b);
    puts("HELLO WORLD");
}

using neo-c;

int main(int argc, char** argv)
{
    sData*% data = new sData{a:111, b:222};
    fun(data);
    
    return 0;
}

