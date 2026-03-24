#include <neo-c.h>

int main(int argc, char** argv)
{
    var a = [1,2,3,4,5].`filter { it > 2 }.`collect();
    
    a.each {
        printf("%d\n", it);
    }
    return 0;
}
