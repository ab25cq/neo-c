#include <neo-c.h>

int main(int argc, char** argv)
{
    var xxx = t(1,2,3);
    //"01main.nc".read().to_string();
    
    tuple3<int,int,int>*%{} p = span xxx;
    
    printf("%c\n", *p);
    
    return 0;
}


