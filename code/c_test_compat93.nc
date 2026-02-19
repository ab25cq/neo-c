// C11 <assert.h>: NDEBUG path should disable runtime assertion checks
#define NDEBUG
#include <assert.h>
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
    int v = 93;

    // With NDEBUG, this must be compiled away and not abort.
    assert(v == 0);
    REQUIRE(v == 93);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
