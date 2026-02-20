// C11 preprocessor: #line with line-number only should keep current file name.
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#line 1 "c_test_compat150.nc"
#line 1500
static int g_line = __LINE__;
static const char* g_file = __FILE__;
#line 1 "c_test_compat150.nc"

int main(void)
{
    REQUIRE(g_line == 1500);
    REQUIRE(strcmp(g_file, "c_test_compat150.nc") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
