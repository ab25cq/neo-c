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
    var a = [new sData { a:111, b:222}, new sData { a:777, b:777 }].sort();
    
    puts(a.to_string());
    
    return 0;
}

