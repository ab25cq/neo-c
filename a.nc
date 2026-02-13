#include <neo-c.h>

int main(int argc, char** argv)
{
    var xxx = "01main.nc".read().to_string();
    
    string{} p = span xxx;
    
    printf("%c\n", *p);
    
    printf("%c\n", *p);
    
    p += 10;
    
    printf("%c\n", *p);
    
    return 0;
}


