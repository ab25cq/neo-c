#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};

impl sData
{
    void fun(sData* self) {
        puts("AAA");
    }
}

sData%* fun()
{
    sData*% data = new sData { a:111, b:222, c:333 };
    
    return data;
}    

int main(int argc, char** argv) 
{
    var p = fun();
    
    delete p;
    
    p.a = 111;
    
    printf("%d\n", p.a);
                                   
    return 0;
}
