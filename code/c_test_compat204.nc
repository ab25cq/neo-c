// C11 translation phase: trigraph replacement also affects literals before tokenization.
#include <neo-c.h>

int main(void)
{
    const char* s1 = "A??/nB";   // -> "A\nB"
    const char* s2 = "??/??/";   // -> "\\"
    char c = '??/n';             // -> '\n'

    if (s1[0] != 'A') return 1;
    if (s1[1] != '\n') return 2;
    if (s1[2] != 'B') return 3;
    if (s1[3] != '\0') return 4;

    if (s2[0] != '\\') return 5;
    if (s2[1] != '\0') return 6;

    if (c != '\n') return 7;
    return 0;
}
