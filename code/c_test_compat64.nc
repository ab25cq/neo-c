// C11 preprocessor diagnostics (non-triggering paths)
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#if 0
#error "this branch must stay inactive"
#endif

#define HAVE_PATH 1

#if defined(HAVE_PATH)
#define DIAG_VALUE 64
#else
#error "defined() branch broken"
#endif

int main(void)
{
    REQUIRE(DIAG_VALUE == 64);
    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
