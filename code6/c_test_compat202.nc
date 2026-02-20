// C11 translation phase: ??/ splice occurs before // comment removal.
#include <neo-c.h>

int main(void)
{
    int x = 0;
    // This line should swallow the next physical line after ??/ conversion. ??/
    x = 99;
    x += 2;

    return x == 2 ? 0 : 1;
}
