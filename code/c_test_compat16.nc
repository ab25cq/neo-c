// Enum coverage: sparse values, expressions, bitfield usage, designated init with enums
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

enum Color {
    COLOR_RED = 1,
    COLOR_GREEN = 1 << 3,    // 8
    COLOR_BLUE = COLOR_GREEN + 3 // 11
};

enum Mixed {
    MIX_NONE,
    MIX_TEN = 10,
    MIX_EXPR = MIX_TEN * 3,
    MIX_NEG = -5
};

struct FlagBits {
    enum Color c:6;
    enum Mixed m:8;
};

struct WithEnum {
    enum Color fg;
    enum Mixed mode;
};

static const struct WithEnum table[] = {
    [0] = { .fg = COLOR_RED, .mode = MIX_NONE },
    [2] = { .fg = COLOR_BLUE, .mode = MIX_EXPR },
    [5] = { .fg = COLOR_GREEN, .mode = MIX_NEG }
};

int main(void) {
    bool ok = true;

    REQUIRE(COLOR_RED == 1);
    REQUIRE(COLOR_GREEN == 8);
    REQUIRE(COLOR_BLUE == 11);

    REQUIRE(MIX_NONE == 0);
    REQUIRE(MIX_TEN == 10);
    REQUIRE(MIX_EXPR == 30);
    REQUIRE(MIX_NEG == -5);

    struct FlagBits fb = { .c = COLOR_BLUE, .m = MIX_NEG };
    REQUIRE(fb.c == COLOR_BLUE);
    REQUIRE(fb.m == MIX_NEG);

    REQUIRE(table[0].fg == COLOR_RED && table[0].mode == MIX_NONE);
    REQUIRE(table[2].fg == COLOR_BLUE && table[2].mode == MIX_EXPR);
    REQUIRE(table[5].fg == COLOR_GREEN && table[5].mode == MIX_NEG);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
