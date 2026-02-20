// C11 translation phase compatibility: trigraph replacement basics.
#include <neo-c.h>

??=define TRI_NUM 77

int main(void)
??<
    int a??(3??) = ??< TRI_NUM, 2, 3 ??>;
    int b = 1 ??! 2;
    int c = ??-1;

    if (a[0] != 77) return 1;
    if (a[1] != 2) return 2;
    if (b != 3) return 3;
    if (c != (~1)) return 4;
    return 0;
??>
