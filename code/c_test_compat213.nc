// C11 preprocessor: deep macro-expanded operand chains for __has_include_next/include_next.
#include <stdio.h>
#include <stdbool.h>
#include <deep_probe.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    REQUIRE(COMPAT213_STAGE1 == 13);
    REQUIRE(COMPAT213_STAGE2 == 200);
    REQUIRE(COMPAT213_SUM == 213);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
