#include <neo-c.h>
#include <neo-c-pthread.h>
#include <unistd.h>

struct sData {
    int a ;
    int b;
};

int main(int argc, char** argv)
{
    var a  = new int(5);
    
    printf("%d\n", *a);
    
    var b = new sData { a:123, b:234 };
    
    printf("%d %d\n", b.a, b.b);
    
    return 0;
}
