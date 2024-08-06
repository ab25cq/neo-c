#include <neo-c.h>

int main(int argc, char** argv)
{
    char* it = borrow new char[12];
    
    delete it;
    
    it = borrow new char[12];
    
    delete it;
    
    it = borrow new char[14];
    
    delete it;
    
    it = borrow new char[14];
    
    return 0;
}
