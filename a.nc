#include <neo-c.h>

int main(int argc, char** argv) 
{
    var ma = ["AAA":"AAA", "BBB":"BBB"];
    
    var v1 = ma.to_vector();
    
    puts(v1.to_string());
                                   
    return 0;
}

