#include <neo-c.h>

struct sData
{
    int a;
    int b;
};

struct sData2
{
    string a;
    string b;
};

int? fun()
{
    sData%? dataX = opt new sData { a:111, b:222 };
    
    int? p7 = opt &dataX.a;
    
    return p7;
}

string? fun2()
{
    sData2%? dataX = opt new sData2 {a:s"AAA", b:s"BBB" };
    
    string? p8 = opt dataX.a;
    
    return p8;
}

int main(int argc, char** argv)
{
    struct sData data = { .a=111, .b=222 };
    
    int x[3] = { 111, 222, 333 };
    
    int& p = ref &data.a;
    int& p2 = ref &x[0];
    
    printf("%d\n", *p);
    printf("%d\n", *p2);
    
    int? p3 = opt &data.a;
    int? p4 = opt &x[0];
    int? p5 = opt &x[0];
    int%? p6 = opt new int(6);
    
    
    printf("%d\n", *p3);
    printf("%d\n", *p4);
    printf("%d\n", *p5);
    printf("%d\n", *p6);
    
    int? p7 = fun();
    printf("%d\n", *p7);
    
    string? p8 = fun2();
    puts(p8!);
    
    puts(p8.substring(0,1));
    
    return 0;
}
