#include <stdio.h>

var a = "int a;"
var b = "int b;"
var c = "1"

if($c * 4 == 4){
    int c;
}
if($c . 1 == 11){
    int d;
}

eval "long \{$a . $b}"

int main(int argc, char** argv)
{
    printf("a %d b %d c %d d %d\n", a, b, c, d);
    
    return 0;
}
