// C11 constraint diagnostics (non-preprocessor baseline)
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

_Static_assert(sizeof(int) >= 2, "int width must be >= 16 bits");

int main(void)
{
    int arr[3] = { 1, 2, 3 };
    REQUIRE(arr[0] == 1);
    REQUIRE(arr[1] == 2);
    REQUIRE(arr[2] == 3);
    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
