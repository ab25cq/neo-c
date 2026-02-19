// C11 preprocessor: trigraphs in ??=-style directives and #if expressions.
#include <neo-c.h>

??=define PVAL 4

??=if ((PVAL ??' 1) != 5)
??=error trigraph xor in #if failed
??=endif

??=if ((1 ??! 2) != 3)
??=error trigraph or in #if failed
??=endif

int main(void)
{
    return 0;
}
