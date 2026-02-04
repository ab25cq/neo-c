//#include <neo-c.h>
#include <assert.h>
    
int loop() 
{
    return (2, 1);
}


int main(int argc, char** argv)
{
    int a = loop();
    
    assert(a == 1);
    
    return 0;
}
