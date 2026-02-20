// C11 preprocessor extension coverage: __has_include_next search-order behavior.
#include <stdio.h>
#include <stdbool.h>
#include <probe.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    REQUIRE(COMPAT158_STAGE1 == 1);
    REQUIRE(COMPAT158_STAGE2 == 2);
    REQUIRE(COMPAT158_SUM == 3);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
