#include <neo-c.h>

int main(int argc, char** argv)
{
    [1,2,3,4,5,6].any { it == 6 }.to_string().puts();   // true
    
    return 0;
}
