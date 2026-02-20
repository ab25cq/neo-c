// C11 translation phase: trigraph operator coverage in normal tokens.
#include <neo-c.h>

??=define TRI_FIVE 5

int main(void)
??<
    int a??(3??) = ??< 1, 2, 3 ??>;
    int x = (6 ??' 3);   // ^
    int y = (4 ??! 1);   // |
    int z = ??-0;        // ~

    if (a[0] != 1) return 1;
    if (a[1] != 2) return 2;
    if (a[2] != 3) return 3;
    if (x != TRI_FIVE) return 4;
    if (y != TRI_FIVE) return 5;
    if (z != ~0) return 6;
    return 0;
??>
