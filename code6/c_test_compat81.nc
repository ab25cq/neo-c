// C11 preprocessor: #if integer-expression semantics and defined/undefined behavior
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define V1 1
#define V2 2
#define V4 4
#define SHIFT_EXPR ((1u << 4) + (32u >> 3))
#if defined(V1) && !defined(V9) && ((V2 * V4 + 1) == 9)
#define PP_ARITH_OK 1
#else
#define PP_ARITH_OK 0
#endif

#if ((UNDEFINED_NAME + 5) == 5)
#define PP_UNDEF_ZERO 1
#else
#define PP_UNDEF_ZERO 0
#endif

#if ((SHIFT_EXPR == 20) && ((8 >> 1) == 4) && ((1 << 5) == 32))
#define PP_BITWISE_OK 1
#else
#define PP_BITWISE_OK 0
#endif

#if ((0 ? 1 : 2) == 2)
#define PP_TERNARY_OK 1
#else
#define PP_TERNARY_OK 0
#endif

#if ((0 || 0 ? 7 : 9) == 9)
#define PP_PRECEDENCE_OK 1
#else
#define PP_PRECEDENCE_OK 0
#endif

int main(void)
{
    REQUIRE(PP_ARITH_OK == 1);
    REQUIRE(PP_UNDEF_ZERO == 1);
    REQUIRE(PP_BITWISE_OK == 1);
    REQUIRE(PP_TERNARY_OK == 1);
    REQUIRE(PP_PRECEDENCE_OK == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
