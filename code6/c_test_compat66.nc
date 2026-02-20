// C11 declaration/initializer constraints baseline
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

struct Pair {
    int x;
    int y;
};

static struct Pair g_pair = { 7, 9 };
static int g_values[3] = { 10, 20, 30 };

int main(void)
{
    REQUIRE(g_pair.x == 7);
    REQUIRE(g_pair.y == 9);
    REQUIRE(g_values[0] == 10);
    REQUIRE(g_values[2] == 30);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
