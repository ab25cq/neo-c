// C11 preprocessor: defined-operator details and function-like expression expansion
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define PNUM 6
#define PPLUS2(x) ((x) + 2)
#define ALIAS_MACRO UNDEFINED_TARGET
#define REAL_FLAG 1

// In defined(), the operand identifier itself is checked.
#if defined(ALIAS_MACRO)
#define PP_DEFINED_ALIAS 1
#else
#define PP_DEFINED_ALIAS 0
#endif

#if defined(UNDEFINED_TARGET)
#define PP_DEFINED_TARGET 1
#else
#define PP_DEFINED_TARGET 0
#endif

#if (PPLUS2(PNUM) == 8) && defined REAL_FLAG
#define PP_FUNC_EXPR_OK 1
#else
#define PP_FUNC_EXPR_OK 0
#endif

#if ((0 && defined(MISSING_A)) || (1 && !defined(MISSING_B)))
#define PP_LOGICAL_DEFINED_OK 1
#else
#define PP_LOGICAL_DEFINED_OK 0
#endif

#if ((0x10 - 010) == 8)
#define PP_RADIX_OK 1
#else
#define PP_RADIX_OK 0
#endif

int main(void)
{
    REQUIRE(PP_DEFINED_ALIAS == 1);
    REQUIRE(PP_DEFINED_TARGET == 0);
    REQUIRE(PP_FUNC_EXPR_OK == 1);
    REQUIRE(PP_LOGICAL_DEFINED_OK == 1);
    REQUIRE(PP_RADIX_OK == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
