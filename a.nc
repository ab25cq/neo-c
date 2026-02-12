#include <neo-c.h>

int gValue;

struct sData
{
    string? a;
};

void fun(string? p)
{
    printf("%c\n", *p);
}

string? fun2()
{
    var data = new sData { a:optional s"ABC" };
    
    var p = data.a;
    
    fun(p);
    
    printf("%c\n", *p);
    
    return p;
}

int main(int argc, char** argv)
{
    var p = fun2();
    
//    printf("%c\n", *p);
    
    return 0;
}


