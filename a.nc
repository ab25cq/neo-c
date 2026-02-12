#include <neo-c.h>

struct sData
{
    span<char*, string>*% a;
};

int main(int argc, char** argv)
{
    var xxx = "01main.nc".read();
    var data = new sData { a: new span<char*, string>(ref xxx, xxx.length()) };
    
    printf("%c\n", *data.a);
    
    data.a+=10;
    
    printf("%c\n", *data.a);
    
    data.a+=10;
    
    printf("%s\n", data.a.substring(0,10));
    
    return 0;
}


