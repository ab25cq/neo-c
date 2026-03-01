#include <neo-c.h>


int main(int argc, char** argv) 
{
    var li = [1,2,3,4,5,6,7];
    
    var li2 = li.`iter().`filter { it > 3 }.`map { it.to_string() + "B" }.`correct();
    
    puts(li2.to_string());
                                   
    return 0;
}

