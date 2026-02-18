// C11 preprocessor: include_next / __has_include_next coverage
#include <stdio.h>
#include <stdbool.h>

#if !__has_include(<dup.h>)
#error "compat75: dup.h not found in include paths"
#endif

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
    REQUIRE(DUP_LAYER_1 == 100);
    REQUIRE(DUP_LAYER_2 == 23);
    REQUIRE(DUP_SUM == 123);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
