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

struct sData3
{
    int? a;
    string? b;
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
    
    printf("p %d\n", *p);
    printf("p2 %d\n", *p2);
    
    int? p3 = opt &data.a;
    int? p4 = opt &x[0];
    int? p5 = opt &x[0];
    int%? p6 = opt new int(6);
    
    printf("p3 %d\n", *p3);
    printf("p4 %d\n", *p4);
    printf("p5 %d\n", *p5);
    printf("p6 %d\n", *p6);
    
//    int? p7 = fun();        // panic
//    printf("%d\n", *p7);
    
    string? p8 = fun2();
    puts(p8!);
    
    puts(p8.substring(0,1));
    
    struct sData3 data3;
    
//    data3.a = fun();           // panic
//    printf("%d\n", *data3.a);
    data3.b = fun2();
    
    printf("%s\n", data3.b!);
    
    return 0;
}
