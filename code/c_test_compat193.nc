// C11 preprocessor: stringize preserves literal internals and normalizes token gaps/comments.
#include <neo-c.h>

#define STR(x) #x
#define X 123

int main(void)
{
    if (strcmp(STR("a  b"), "\"a  b\"") != 0) return 1;
    if (strcmp(STR(a/*cmt*/b), "a b") != 0) return 2;
    if (strcmp(STR(  abc   def  ), "abc def") != 0) return 3;
    if (strcmp(STR('x'), "'x'") != 0) return 4;
    if (strcmp(STR(X), "X") != 0) return 5;
    return 0;
}
