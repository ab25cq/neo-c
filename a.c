#include <neo-c.h>

class sBase
{
    int a;
    int b;
    
    new() {
        self.a = 123;
        self.b = 234;
    }
};

class sData extends sBase
{
    new() {
        self.super();
    }
};

int main(int argc, char** argv)
{
    var data = new sData();
    
    printf("%d %d\n", data.a, data.b);
    
    return 0;
}
