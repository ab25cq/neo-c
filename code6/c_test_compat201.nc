// C11 translation phase: ??= directives and ??/ splicing in macro bodies.
#include <neo-c.h>

??=define AVAL 40
??=define BVAL 2
??=define SUM2(x, y) ((x) + ??/
(y))

int main(void)
{
    int v = SUM2(AVAL, BVAL);
    return v == 42 ? 0 : 1;
}
