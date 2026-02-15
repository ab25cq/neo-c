#include <neo-c.h>

int main(int argc, char** argv)
{
    string? str = optional s"ABC"; 
    
    
    str[0] = 'D';
    
    puts(str!);
    
    
    return 0;
}
