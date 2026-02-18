// ISO C preprocessor and constant-expression compatibility
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
#define SUM3(a, b, c) ((a) + (b) + (c))
#define CALL_SUM3(...) SUM3(__VA_ARGS__)
#define ANSWER 12

enum {
    CAT(VALUE_, A) = 12,
    CAT(VALUE_, B) = 30
};

_Static_assert(VALUE_A == 12, "VALUE_A mismatch");
_Static_assert(VALUE_B == 30, "VALUE_B mismatch");

#if !defined(__STDC_VERSION__) || (__STDC_VERSION__ < 199901L)
#error "C99 or later is required"
#endif

int main(void)
{
    REQUIRE(strcmp(STR(ANSWER), "12") == 0);
    REQUIRE(strcmp(STR(VALUE_A), "VALUE_A") == 0);
    REQUIRE(strcmp(STR(hello_world), "hello_world") == 0);
    REQUIRE(CALL_SUM3(1, 2, 3) == 6);
    REQUIRE(CAT(VALUE_, A) + CAT(VALUE_, B) == 42);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
