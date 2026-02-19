// C11 preprocessor: mixed integer-constant suffix evaluation in #if.
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#if ((1ULL + 2UL + 3U + 4) == 10ULL) && ((((~0ULL) + 1ULL) == 0ULL)) && (((0xFFu & 0377u) == 255u)) && (((5ULL % 3ULL) == 2ULL))
#define PP_SUFFIX_MIX_OK 1
#else
#define PP_SUFFIX_MIX_OK 0
#endif

int main(void)
{
    REQUIRE(PP_SUFFIX_MIX_OK == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
