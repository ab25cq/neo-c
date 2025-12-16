#include <neo-c.h>

record int fun(int aaa, char* bbb)
{
    stackframe();
}

int gA = 123;

if !defined(gA) || defined(fun) {
    int X = 1;
}
else {
    int X = 2;
}

record long*% fun2()
{
    fun(111, "BBB");
    
    return new long[128];
}


int main(int argc, char** argv)
{
    fun(111, "BBB");
    long* a = fun2();
    long*% b = new long[128];
    long*% c = new long[128];
    
    *b = 2;
    *a = 1;
    
    printf("%d %d\n", *a, *b);
    printf("%d %d\n", *a, *b);
    printf("%x %x %x\n", a, b, c);
    
    printf("X %d\n",X );
    printf("gA %d\n", gA);
    
    return 0;
}
