#include <neo-c.h>

int gValue;

struct sData
{
    span<string, string>*% a;
};

int main(int argc, char** argv)
{
    var xxx = s"ABC";
    var data = new sData { a: new span<string>(ref xxx, 3) };
    
    printf("%c\n", *data.a);
    
    data.a+=10;
    
    return 0;
}


