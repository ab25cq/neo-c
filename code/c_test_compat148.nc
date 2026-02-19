// C11 preprocessor: #line should allow trailing comments.
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

#line 920 "compat148_line_directive.nc" /* trailing block comment */
static int g_line_1 = __LINE__;
static const char* g_file_1 = __FILE__;
#line 300 // trailing line comment
static int g_line_2 = __LINE__;
static const char* g_file_2 = __FILE__;
#line 1 "c_test_compat148.nc"

int main(void)
{
    REQUIRE(g_line_1 == 920);
    REQUIRE(strcmp(g_file_1, "compat148_line_directive.nc") == 0);
    REQUIRE(g_line_2 == 300);
    REQUIRE(strcmp(g_file_2, "compat148_line_directive.nc") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
