// C11 <float.h>: floating-point limits macros sanity
#include <float.h>
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    REQUIRE(FLT_RADIX >= 2);
    REQUIRE(FLT_MANT_DIG > 0);
    REQUIRE(DBL_MANT_DIG >= FLT_MANT_DIG);
    REQUIRE(DBL_MAX > 1.0);
    REQUIRE(DBL_MIN > 0.0);
    REQUIRE(FLT_EPSILON > 0.0f);
    REQUIRE(LDBL_MAX >= DBL_MAX);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
