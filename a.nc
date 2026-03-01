#include <neo-c.h>


impl list<T>
{
    iter enumerate() {
        `it = t(i, it);
    }
}

int main(int argc, char** argv) 
{
    var li = [1,2,3,4,5,6,7];
    
    var li2 = li.`iter().`take(3).`enumerate().`map { s"\{it.v1} \{it.v2}" }.`collect();
    
    puts(li2.to_string());
                                   
    return 0;
}

