// ISO C integer conversion and arithmetic rules
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    uint8_t u8 = 250u;
    int8_t s8 = -5;
    int promoted = u8 + s8;            // both promote to int
    REQUIRE(promoted == 245);

    unsigned int ui = 10u;
    int si = -3;
    REQUIRE((unsigned int)(ui + si) == 7u);

    int a = -5;
    int b = 2;
    REQUIRE(a / b == -2);              // truncates toward zero in C99+
    REQUIRE(a % b == -1);

    uint32_t mask = 0x80000000u;
    REQUIRE((mask >> 31) == 1u);

    uint32_t all = 0xffffffffu;
    REQUIRE((all << 1) == 0xfffffffeu);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
