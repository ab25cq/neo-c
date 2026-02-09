#include <neo-c.h>

void fun(char*& p, const char* a)
{
    printf("%p %p\n", p.unwrap(), a);
    puts(p.scan(".").join("+"));
}

int main(int argc, char** argv)
{
    const char* a = "ABC";
    
    char*& p = ref a;
    
    fun(ref a, a);
    
    char* b = null;
    
    char*? p2 = optional b;
    
    p2.elif {
        puts("CATCH");
    }
    p2.if { p2.scan(".").join("+"); }
    
/*
    printf("%p %p\n", p2.unwrap(), a);
    
    printf("%c\n", *p2);
    printf("%c\n", *p);
*/
    
    return 0;
}


