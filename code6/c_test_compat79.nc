// C11 preprocessor: variadic macros, nested-arg commas, and rescan paths
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

#define PASS(...) __VA_ARGS__
#define SECOND(a, b) b
#define TAKE_SECOND(a, b, c) b
#define VSUM(a, b, ...) ((a) + (b) + (__VA_ARGS__))
#define BUILD_NAME(x) CAT(x, _value)
#define SELECT_FMT(tag) CAT(FMT_, tag)
#define FMT_INT "%d"
#define FMT_PAIR "%d,%d"
#define KEYVAL(name, ...) STR(name) ":" STR(__VA_ARGS__)

static int BUILD_NAME(global) = 79;

int main(void)
{
    // Comma inside nested parentheses must stay within the first argument.
    int local = SECOND((1, 2), 5);
    REQUIRE(local == 5);

    REQUIRE(VSUM(1, 2, 3) == 6);
    REQUIRE(VSUM(4, 5, 6 + 7) == 22);

    REQUIRE(global_value == 79);

    REQUIRE(strcmp(STR(PASS(hello world)), "hello world") == 0);
    REQUIRE(strcmp(STR(TAKE_SECOND(alpha, beta, gamma)), "beta") == 0);
    REQUIRE(strcmp(KEYVAL(mode, fast), "mode:fast") == 0);

    int a = 0;
    int b = 0;
    int c = 0;
    REQUIRE(sscanf("12", SELECT_FMT(INT), &a) == 1);
    REQUIRE(a == 12);
    REQUIRE(sscanf("3,4", SELECT_FMT(PAIR), &b, &c) == 2);
    REQUIRE(b == 3);
    REQUIRE(c == 4);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
