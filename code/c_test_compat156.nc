// C11 preprocessor: #if should parse character constants and escapes.
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#if ('A' != 65) || ('\n' != 10) || ('\x41' != 65) || ('\101' != 65)
#error "compat156: basic character constant parsing failed"
#endif

#if (L'Z' != 90) || (u'Q' != 81) || (U'!' != 33)
#error "compat156: prefixed character constant parsing failed"
#endif

int main(void)
{
    REQUIRE('A' == 65);
    REQUIRE('\n' == 10);
    REQUIRE('\x41' == 65);
    REQUIRE('\101' == 65);
    REQUIRE(L'Z' == 90);
    REQUIRE(u'Q' == 81);
    REQUIRE(U'!' == 33);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
