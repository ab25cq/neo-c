// C11 translation phase: ??/ at end-of-line should behave like backslash-newline splice.
#include <neo-c.h>

??=define TRI_SPLICE 120 ??/
+ 3

int main(void)
{
    int a = TRI_SPLICE;
    int b = 1 ??/
+ 2;

    if (a != 123) return 1;
    if (b != 3) return 2;
    return 0;
}
