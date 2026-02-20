// C11 anonymous struct/union and designated initializers
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

struct PairBox {
    int tag;
    union {
        struct {
            int x;
            int y;
        };
        long long raw;
    };
};

int main(void)
{
    _Static_assert(offsetof(struct PairBox, x) == offsetof(struct PairBox, raw),
                   "anonymous member offset mismatch");

    struct PairBox a = { .tag = 1, .x = 11, .y = 22 };
    REQUIRE(a.tag == 1);
    REQUIRE(a.x == 11);
    REQUIRE(a.y == 22);

    struct PairBox b = (struct PairBox){ .tag = 2, .y = 77, .x = 66 };
    REQUIRE(b.tag == 2);
    REQUIRE(b.x == 66);
    REQUIRE(b.y == 77);

    b.raw = 123456789LL;
    REQUIRE(b.raw == 123456789LL);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
