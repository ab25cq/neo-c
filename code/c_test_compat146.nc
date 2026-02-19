// C11 preprocessor: #include_next should accept macro-expanded header-name.
#include <stdio.h>
#include <stdbool.h>
#include <dup.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    REQUIRE(COMPAT146_LAYER_1 == 110);
    REQUIRE(COMPAT146_LAYER_2 == 36);
    REQUIRE(COMPAT146_SUM == 146);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
