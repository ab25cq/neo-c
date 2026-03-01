#include <neo-c.h>

int main(){
    var a = foreach(it, [1,2,3,4,5]) {
        it
    }
    
    printf("a %d\n", a);
    
    return 0;
}

