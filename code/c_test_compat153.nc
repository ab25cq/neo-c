// C11 preprocessor: #line should accept large (non-overflowing) line numbers.
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#line 1000000 "compat153_big_line.nc"
static int g_line = __LINE__;
static const char* g_file = __FILE__;
#line 1 "c_test_compat153.nc"

int main(void)
{
    REQUIRE(g_line == 1000000);
    REQUIRE(g_file[0] != '\0');

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
