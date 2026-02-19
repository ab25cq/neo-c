// C11 translation phase: non-trigraph ??x sequences must remain unchanged.
#include <neo-c.h>

int main(void)
{
    const char* s = "??x ??y ??0";
    if (strcmp(s, "??x ??y ??0") != 0) return 1;
    return 0;
}
