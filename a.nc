#include <neo-c.h>

int main(int argc, char** argv)
{
    var xxx = t(1,2,3,4);
    //var xxx = "01main.nc".read();
    
    long*%{} p = span xxx;
    //char*%{} p = span xxx;
    
    printf("%d\n", *p);
    
    p++;
    
    printf("%d\n", *p);
    
    p++;
    
    printf("%d\n", *p);
    
    p++;
    
    printf("%d\n", *p);
    
    return 0;
}


