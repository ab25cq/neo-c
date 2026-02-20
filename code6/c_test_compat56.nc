// C11/C17 header compatibility: stdalign/stdnoreturn/uchar
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdalign.h>
#include <stdnoreturn.h>
#include <uchar.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

noreturn static void never_returns(int code)
{
    (void)code;
    for (;;) {
    }
}

struct AlignedBox {
    alignas(32) unsigned char bytes[32];
};

int main(void)
{
    _Static_assert(sizeof(char16_t) == 2, "char16_t size");
    _Static_assert(sizeof(char32_t) == 4, "char32_t size");

    struct AlignedBox box;
    REQUIRE(alignof(struct AlignedBox) >= 32);
    REQUIRE(((uintptr_t)&box % alignof(struct AlignedBox)) == 0);

    char16_t s16[] = u"AZ";
    char32_t s32[] = U"AZ";
    char16_t c16 = u'A';
    char32_t c32 = U'Z';
    REQUIRE(s16[0] == 65);
    REQUIRE(s16[1] == 90);
    REQUIRE(s32[0] == 65);
    REQUIRE(s32[1] == 90);
    REQUIRE(c16 == 65);
    REQUIRE(c32 == 90);

    void (*fp)(int) = never_returns;
    REQUIRE(fp != NULL);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
