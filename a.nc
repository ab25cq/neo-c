#include <neo-c.h>

class sData
{
    int a;
    int b;
    
    void show() {
        puts(s"a \{self.a} b \{self.b}");
    }
}

class sData2 extends sData
{
    int c;
    
    void show() {
        puts(s"a \{self.a} b \{self.b} c \{self.c}");
    }
}

interface IShow
{
    void show();
}

int main(int argc, char** argv) 
{
    var data2 = new sData2 { a:111, b:222, c:333 };
    
    sData*% data = data2;
    
    puts(s"\{data2}");
    
    puts("interface");
    
    IShow*% idata[2];
    idata[0] = data implements IShow;
    idata[1] = data2 implements IShow;
    
    for(int i=0; i<2; i++) {
        idata[i].show();
    }
                                    
    return 0;
}

