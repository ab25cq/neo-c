#include <neo-c.h>

struct sData
{
    int a;
    int b;
};

int gValue;

struct sData data = (struct sData) { .a=111, .b=222 };

void fun(int*& p)
{
    printf("%d\n", *p);
}

int*& fun2()
{
printf("fun2 %p\n", neo_current_frame.stacktop);
    int a = 111;
    
    var p = ref &a;
    
printf("&a %p\n", &a);
    
    fun(p);
    
    printf("%d\n", *p);
    
    return p;
}

int main(int argc, char** argv)
{
printf("main %p\n", neo_current_frame.stacktop);
    var p = fun2();
    
    printf("%d\n", *p);
    
    return 0;
}


