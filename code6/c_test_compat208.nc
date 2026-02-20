// C11 translation phases: trigraph + ??/ splice across directive keywords.
#include <neo-c.h>

??=de??/
fine VAL208 208

??=i??/
f VAL208 != 208
??=error split #if directive keyword via ??/ failed
??=endif

int main(void)
{
    return VAL208 == 208 ? 0 : 1;
}
