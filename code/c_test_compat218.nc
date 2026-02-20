// C11 preprocessor: valid token-paste with empty arguments should work.
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define CAT(a, b) a##b
#define CAT3(a, b, c) a##b##c

int main(void)
{
    int a = CAT(12, 34);
    int b = CAT(, 56);
    int c = CAT(78, );
    int d = CAT3(, 9, 9);

    REQUIRE(a == 1234);
    REQUIRE(b == 56);
    REQUIRE(c == 78);
    REQUIRE(d == 99);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
