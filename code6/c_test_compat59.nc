// C11 _Pragma and block-scope _Static_assert
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define DO_PRAGMA(x) _Pragma(#x)

static int triple(int x)
{
    return x * 3;
}

int main(void)
{
    _Static_assert(sizeof(int) >= 2, "int width");
    {
        _Static_assert(sizeof(long) >= sizeof(int), "block static assert");
    }

    DO_PRAGMA(GCC diagnostic push)
    DO_PRAGMA(GCC diagnostic ignored "-Wunused-variable")
    int intentionally_unused = triple(2);
    (void)intentionally_unused;
    DO_PRAGMA(GCC diagnostic pop)

    REQUIRE(triple(5) == 15);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
