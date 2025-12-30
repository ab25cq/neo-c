#include <stdio.h>

var a = "int a;"
var b = "int b;"
var c = "1"

struct sData
{
    int a;
    int b;
    int c;
};

if($c * 4 == 4){
    int c;
}
if($c . 1 == 11){
    int d;
}

puts(sizeof(sData));

eval "long \{$a . $b}"

int main(int argc, char** argv)
{
    printf("a %d b %d c %d d %d\n", a, b, c, d);
    printf("size %ld\n", sizeof(struct sData));
    
    return 0;
}
