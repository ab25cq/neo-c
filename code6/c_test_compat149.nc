// C11 preprocessor: #line filename should accept escaped quotes.
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

#line 77 "compat149_escaped_\\\"name\\\".nc"
static int g_line = __LINE__;
static const char* g_file = __FILE__;
#line 1 "c_test_compat149.nc"

int main(void)
{
    REQUIRE(g_line == 77);
    REQUIRE(strcmp(g_file, "compat149_escaped_\\\"name\\\".nc") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
