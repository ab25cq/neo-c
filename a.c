#include <neo-c.h>

class sBase
{
    new() {
        int self.a = 123;
        int self.b = 234;
    }
};

class sData extends sBase
{
    new() {
        self.super();
        int self.c = 777;
    }
    
    void show() {
        int self.d = 333;
    }
};

int main(int argc, char** argv)
{
    var data = new sData();
    data.show();
    
    printf("%d %d %d %d\n", data.a, data.b, data.c, data.d);
    
    return 0;
}
