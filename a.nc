#include <neo-c.h>

int main(int argc, char** argv) 
{
    var v = v[1,2,3,4,5];
    
    v.`iter().`filter() { it > 3 }.`filter() { it == 4 }.`each() {
        printf("%d\n", it);
    }
                                   
    return 0;
}
