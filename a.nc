#include <neo-c.h>

int main(int argc, char** argv)
{
    [1,2,3,4,5].`iter().`filter { it > 2 }.`each {
        printf("%d\n", it);
    }
    
    return 0;
}
