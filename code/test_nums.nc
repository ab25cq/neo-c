#include <neo-c.h>
#include <stdio.h>

static double dabs(double x)
{
    return x < 0.0 ? -x : x;
}

int main(void)
{
    double a = 1e3;
    double b = 1.0E3;
    double c = 1.25e-2;
    double e = 12.5e2;
    double g = 1e+2;
    double h = 2e-3;
    double n = -1e2;
    double j = 0e0;
    double k = 9.99E1;
    float f = 1.5f;
    float f2 = 1.25F;
    float f3 = 2.0F;
    double d = 3.0;
    int hex = 0x1f;
    int hex2 = 0XABCD;
    int hex3 = 0xAB'CD;
    int bin = 0b1010;
    int bin2 = 0B1101;
    int bin3 = 0b10'10;
    int oct = 077;
    int oct2 = 07'7;
    int dec_sep = 1'234'567;
    unsigned int ui = 42U;
    unsigned int ui2 = 0u;
    unsigned long ul = 42UL;
    unsigned long ul2 = 42LU;
    long l1 = 123l;
    unsigned long long ull = 42ULL;
    unsigned long long ull2 = 1'000'000ULL;
    unsigned long long ull3 = 0xFF'FFULL;
    long long ll = -42LL;
    const double eps = 1e-9;

    xassert("a == 1000.0", dabs(a - 1000.0) < eps);
    xassert("b == 1000.0", dabs(b - 1000.0) < eps);
    xassert("c == 0.0125", dabs(c - 0.0125) < eps);
    xassert("e == 1250.0", dabs(e - 1250.0) < eps);
    xassert("g == 100.0", dabs(g - 100.0) < eps);
    xassert("h == 0.002", dabs(h - 0.002) < eps);
    xassert("n == -100.0", dabs(n + 100.0) < eps);
    xassert("j == 0.0", dabs(j - 0.0) < eps);
    xassert("k == 99.9", dabs(k - 99.9) < eps);
    xassert("f == 1.5", dabs((double)f - 1.5) < eps);
    xassert("f2 == 1.25", dabs((double)f2 - 1.25) < eps);
    xassert("f3 == 2.0", dabs((double)f3 - 2.0) < eps);
    xassert("d == 3.0", dabs(d - 3.0) < eps);
    xassert("hex == 0x1f", hex == 0x1f);
    xassert("hex2 == 0xABCD", hex2 == 0xABCD);
    xassert("hex3 == 0xABCD", hex3 == 0xABCD);
    xassert("bin == 10", bin == 10);
    xassert("bin2 == 13", bin2 == 13);
    xassert("bin3 == 10", bin3 == 10);
    xassert("oct == 63", oct == 63);
    xassert("oct2 == 63", oct2 == 63);
    xassert("dec_sep == 1234567", dec_sep == 1234567);
    xassert("ui == 42U", ui == 42U);
    xassert("ui2 == 0U", ui2 == 0U);
    xassert("ul == 42UL", ul == 42UL);
    xassert("ul2 == 42LU", ul2 == 42LU);
    xassert("l1 == 123L", l1 == 123L);
    xassert("ull == 42ULL", ull == 42ULL);
    xassert("ull2 == 1000000ULL", ull2 == 1000000ULL);
    xassert("ull3 == 0xFFFFULL", ull3 == 0xFFFFULL);
    xassert("ll == -42LL", ll == -42LL);

    printf("ok: %g %g %g %g %g %g %g %g %g %f %f %f %g %d %d %d %d %d %d %u %u %lu %lu %ld %llu %llu %llu %lld\n",
        a, b, c, e, g, h, n, j, k, f, f2, f3, d, hex, hex2, hex3, bin, bin2, bin3, dec_sep, ui, ui2, ul, ul2, l1, ull, ull2, ull3, ll);

    return 0;
}

#if defined(NEGATIVE_TESTS)
int bad1 = 0x;
int bad2 = 0b;
int bad3 = 09;
double bad4 = 1e;
double bad5 = 1.0E;
int bad6 = 0b102;
double bad7 = 1e+;
#endif
