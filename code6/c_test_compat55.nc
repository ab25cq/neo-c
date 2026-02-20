#include <stdio.h>
#include <stdbool.h>
#include <complex.h>
#include <math.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    double complex z1 = 1.0 + 2.0*I;
    double complex z2 = 3.0 - 1.0*I;
    double complex z = z1 * z2;

    REQUIRE(fabs(creal(z) - 5.0) < 1e-12);
    REQUIRE(fabs(cimag(z) - 5.0) < 1e-12);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
