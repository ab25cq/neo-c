// C11 preprocessor: predefined macros and #line behavior
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

#if defined(__STDC__) && (__STDC__ == 1)
#define PP_STDC_OK 1
#else
#define PP_STDC_OK 0
#endif

#line 850 "compat85_line_directive.nc"
static int g_line_at_define = __LINE__;
static const char* g_file_at_define = __FILE__;
#line 1 "c_test_compat85.nc"

#define STR1(x) #x
#define STR(x) STR1(x)

int main(void)
{
    REQUIRE(PP_STDC_OK == 1);
    REQUIRE(strlen(__FILE__) > 0);

    REQUIRE(g_line_at_define == 850);
    REQUIRE(strcmp(g_file_at_define, "compat85_line_directive.nc") == 0);

#line 850 "compat85_line_directive.nc"
    int local_line = __LINE__;
    const char* local_file = __FILE__;
#line 1 "c_test_compat85.nc"

    REQUIRE(local_line == 850);
    REQUIRE(strcmp(local_file, "compat85_line_directive.nc") == 0);

    REQUIRE(STR(__LINE__)[0] >= '0' && STR(__LINE__)[0] <= '9');
    REQUIRE(strcmp(__FILE__, "c_test_compat85.nc") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
