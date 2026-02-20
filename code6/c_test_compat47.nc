// ISO C function parameter qualifiers and VLA-style interfaces
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static void saxpy(size_t n, float a, const float x[static 1], float y[static 1])
{
    for (size_t i = 0; i < n; i++) {
        y[i] = a * x[i] + y[i];
    }
}

static int sum_vla(size_t n, const int v[static 1])
{
    int total = 0;
    for (size_t i = 0; i < n; i++) {
        total += v[i];
    }
    return total;
}

int main(void)
{
    float x[3] = { 1.0f, 2.0f, 3.0f };
    float y[3] = { 10.0f, 20.0f, 30.0f };
    saxpy(3, 2.0f, x, y);
    REQUIRE(y[0] == 12.0f);
    REQUIRE(y[1] == 24.0f);
    REQUIRE(y[2] == 36.0f);

    int nums[4] = { 4, 5, 6, 7 };
    REQUIRE(sum_vla(4, nums) == 22);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
