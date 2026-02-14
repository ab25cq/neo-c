#include <neo-c.h>

int main(int argc, char** argv)
{
    string? p = optional xsprintf("1 + 1 = %d", 1+1);
    
    puts(p.substring(0,2));
    
    return 0;
}
