#include <neo-c.h>

int main(){
    var a = foreach(it, [1,2,3,4,5]) {
        it
    }
    
    printf("a %d\n", a);

    var it = 1;
    
    var it = s"AAA";

    var it = t(0, 1);

    var s = s"\{it.v1} \{it.v2}";
    
    puts(s);
    
    return 0;
}

