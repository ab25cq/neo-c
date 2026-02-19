// C11 preprocessor: #undef/redefine and function-like macro use in #if
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define CALC(x) ((x) + 1)
#undef CALC
#define CALC(x) ((x) + 2)

#define BASE 10
#undef BASE
#define BASE 20

#if (CALC(3) == 5) && (BASE == 20)
#define PP_REDEF_OK 1
#else
#define PP_REDEF_OK 0
#endif

int main(void)
{
    REQUIRE(PP_REDEF_OK == 1);
    REQUIRE(CALC(3) == 5);
    REQUIRE(BASE == 20);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
