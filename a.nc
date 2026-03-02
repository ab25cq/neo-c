#include <neo-c.h>

int main(int argc, char** argv) 
{
    var li = [1,2,3,4,5,6,7];
    
    var li2 = li.`iter().`take(3).`find { it > 2 }.`map { it.to_string() + "B" }.`collect();
    
    puts(li2.to_string());
                                   
    return 0;
}

