#include <neo-c.h>
    
int, int loop() 
{
    return t(1, 2);
}


int main(int argc, char** argv)
{
    var a, b = loop();
    
    puts(s"\{a} \{b}");
    
    return 0;
}
