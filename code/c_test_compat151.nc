// C11 preprocessor: after #line with filename, #line number-only keeps that filename.
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

#line 410 "compat151_virtual_file.nc"
static int g_line_1 = __LINE__;
static const char* g_file_1 = __FILE__;
#line 920
static int g_line_2 = __LINE__;
static const char* g_file_2 = __FILE__;
#line 1 "c_test_compat151.nc"

int main(void)
{
    REQUIRE(g_line_1 == 410);
    REQUIRE(g_line_2 == 920);
    REQUIRE(strcmp(g_file_1, "compat151_virtual_file.nc") == 0);
    REQUIRE(strcmp(g_file_2, "compat151_virtual_file.nc") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
