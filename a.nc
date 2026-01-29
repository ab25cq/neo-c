#include <neo-c.h>

#if true
int a;
#endif

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv) 
{
    var a = if(1 == 1) { [new sData { a:111, b:222}:s"AAA", new sData { a:777, b:777 }:s"BBB"] };
    
    puts(a.to_string());
    
    (1, false);
    
    return 0;
}

