#include <neo-c.h>

void fun()
{
    defer { puts("OK"); }
    
    puts("UHO");
}

int main(int argc, char** argv)
{
    FILE* f = fopen("01main.nc", "r");
    
    puts("AAAA");
    
    defer { fclose(f); }
    
    return 0;
}
