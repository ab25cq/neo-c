#include <neo-c.h>

int main(int argc, char** argv) 
{
    var li = [1,2,3,4,5,6,7];
    
    var v1 = li.to_vector();
    
    puts(v1.to_string());
                                   
    return 0;
}

