// Alignment, _Atomic, and designated initializer edge cases
#include <stdio.h>
#include <stdbool.h>
#include <stdalign.h>
#include <stdatomic.h>
#include <stddef.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

struct Pair {
    int a;
    int b;
};

struct PackedAligned {
    alignas(16) int x;
    //int count;
    _Atomic int count;
    union {
        struct { int lx, ly; };
        int pair[2];
    };
};

struct ColorBox {
    struct {
        unsigned char r, g, b;
    };
    union {
        struct { float u, v; };
        float uv[2];
    };
};

int main(void) {
    bool ok = true;

    struct PackedAligned pa = {
        .x = 4,
        .count = 1,
        .lx = 7,
        .ly = 8
    };
    REQUIRE((_Alignof(struct PackedAligned) % 16) == 0);
    REQUIRE(atomic_fetch_add_explicit(&pa.count, 2, memory_order_relaxed) == 1);
    REQUIRE(atomic_load_explicit(&pa.count, memory_order_relaxed) == 3);
    REQUIRE(pa.pair[0] == 7 && pa.pair[1] == 8);

    struct Pair arr[3] = {
        [1].b = 5,
        [2] = { .a = 9, .b = 10 }
    };
    REQUIRE(arr[0].a == 0 && arr[0].b == 0);
    REQUIRE(arr[1].a == 0 && arr[1].b == 5);
    REQUIRE(arr[2].a == 9 && arr[2].b == 10);

    struct ColorBox box = {
        .r = 1, .g = 2, .b = 3,
        .u = 0.25f, .v = 0.75f
    };
    REQUIRE(box.uv[0] == 0.25f && box.uv[1] == 0.75f);
    REQUIRE(box.g == 2);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
