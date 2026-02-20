// C11 preprocessor: unsigned integer-expression edge semantics in #if.
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#if (((~0U) + 1U) == 0U) && (((~0U) != 0U)) && (((0xF0U >> 4) == 0x0FU)) && ((((3U ^ 1U) & 2U) == 2U)) && (((1U << 5) == 32U))
#define PP_UNSIGNED_EDGE_OK 1
#else
#define PP_UNSIGNED_EDGE_OK 0
#endif

int main(void)
{
    REQUIRE(PP_UNSIGNED_EDGE_OK == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
