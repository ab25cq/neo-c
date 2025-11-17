#include <stdio.h>

#define CHOOSE(x) __builtin_choose_expr( (x) > 0, "positive", "not positive" )

int main() {
    printf("%s\n", CHOOSE(5));   // → positive
    printf("%s\n", CHOOSE(-1));  // → not positive
    
    return 0;
}
