// C11 <iso646.h>: alternative operator macros
#include <iso646.h>
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    int a = 6 bitand 3;
    int b = 4 bitor 1;
    int c = 5 xor 1;
    int d = compl 0;
    int e = 7;
    e and_eq 3;
    int f = 4;
    f or_eq 1;
    int g = 5;
    g xor_eq 1;

    REQUIRE((1 and 1) == 1);
    REQUIRE((1 or 0) == 1);
    REQUIRE((not 0) == 1);
    REQUIRE(a == 2);
    REQUIRE(b == 5);
    REQUIRE(c == 4);
    REQUIRE(d == -1);
    REQUIRE(e == 3);
    REQUIRE(f == 5);
    REQUIRE(g == 4);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
