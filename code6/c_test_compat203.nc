// C11 translation phase: ??/ splice with block-comment boundaries.
#include <neo-c.h>

??=define TRI_BLOCK_EXPR 10 ??/
/*joined*/ + 1

int main(void)
{
    int a = 1 ??/
/*spliced block comment*/ + 2;
    int b = TRI_BLOCK_EXPR;

    if (a != 3) return 1;
    if (b != 11) return 2;
    return 0;
}
