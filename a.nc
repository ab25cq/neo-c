#include <neo-c.h>

int main(int argc, char** argv)
{
    string a = s"ABC";
    
    string? b = optional s"ABC";
    
    b.scan(".").to_string().puts();
    
    return 0;
}


