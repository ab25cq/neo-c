#include <stdio.h>

var a = "int a;"
var b = "int b;"
var c = "1"

if(@c == 1){
    int c;
}

eval "long \{@a + @b}"

int main(int argc, char** argv)
{
    printf("a %d b %d c %d\n", a, b, c);
    
    return 0;
}
