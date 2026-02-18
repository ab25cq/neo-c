#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static int sum_ints(int count, ...)
{
    va_list ap;
    va_start(ap, count);

    int total = 0;
    for(int i = 0; i < count; i++) {
        total += va_arg(ap, int);
    }

    va_end(ap);
    return total;
}

int main(void)
{
    REQUIRE(sum_ints(0) == 0);
    REQUIRE(sum_ints(3, 10, 20, 30) == 60);
    REQUIRE(sum_ints(5, 1, 2, 3, 4, 5) == 15);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
