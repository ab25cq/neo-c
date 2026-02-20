// C11 preprocessor compatibility edge coverage
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

#define STR1(x) #x
#define STR(x) STR1(x)
#define CAT1(a, b) a##b
#define CAT(a, b) CAT1(a, b)

#define EMPTY()
#define DEFER(id) id EMPTY()
#define EXPAND(...) __VA_ARGS__
#define RET42() 42

#define FLAG_ALPHA 1

#if defined(FLAG_ALPHA) && !defined(FLAG_BETA)
#define PP_DEFINED_OK 1
#else
#define PP_DEFINED_OK 0
#endif

#if 0
#define PP_ELIF_VALUE -1
#elif 1
#define PP_ELIF_VALUE 77
#else
#define PP_ELIF_VALUE -2
#endif

#define TO_UNDEF 9
#undef TO_UNDEF
#ifdef TO_UNDEF
#define PP_UNDEF_OK 0
#else
#define PP_UNDEF_OK 1
#endif

#line 700 "compat_line_override.nc"
static int g_line_value = __LINE__;
static const char* g_file_value = __FILE__;
#line 1 "c_test_compat62.nc"

int main(void)
{
    int CAT(local_, value) = 5;

    REQUIRE(local_value == 5);
    REQUIRE(PP_DEFINED_OK == 1);
    REQUIRE(PP_ELIF_VALUE == 77);
    REQUIRE(PP_UNDEF_OK == 1);

    REQUIRE(EXPAND(DEFER(RET42)()) == 42);
    REQUIRE(strcmp(STR(FLAG_ALPHA), "1") == 0);
    REQUIRE(strcmp(STR(CAT(12, 3)), "123") == 0);

    REQUIRE(g_line_value == 700);
    REQUIRE(strcmp(g_file_value, "compat_line_override.nc") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
