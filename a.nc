#include <neo-c.h>

void fun(char*& p, const char* a)
{
    printf("%p %p\n", p, a);
}

int main(int argc, char** argv)
{
    const char* a = "ABC";
    
    char*& p = ref a;
    
    fun(ref a, a);
    
    char*? p2 = optional a;
    
    printf("%p %p\n", p2.unwrap(), a);
    
    return 0;
}


