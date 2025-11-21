// Struct/union corner cases: anonymous struct within union, designated init, and compound literal assignment
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

union U {
    struct {
        int x;
        int y;
    };
    struct {
        int w;
        int h;
    } dims;
};

struct Wrapper {
    int tag;
    union {
        union U u;
        struct {
            int a;
            int b;
        };
    };
};

static struct Wrapper make_wrapper(int tag, int a, int b) {
    struct Wrapper w = { .tag = tag, .u = { .x = a, .y = b } };
    return w;
}

int main(void) {
    bool ok = true;

    union U u = { .x = 3, .y = 4 };
    REQUIRE(u.x == 3 && u.y == 4);
    u.dims.w = 10;
    REQUIRE(u.x == 10); // aliasing through overlapping structs

    struct Wrapper w = make_wrapper(1, 7, 8);
    REQUIRE(w.tag == 1);
    REQUIRE(w.u.x == 7 && w.u.y == 8);

    // compound literal assignment into anonymous union
    w = (struct Wrapper){ .tag = 2, .u = { .x = 5, .y = 6 } };
    REQUIRE(w.tag == 2 && w.u.y == 6);

    // direct access to anonymous members inside anonymous union
    w.a = 11;
    w.b = 12;
    REQUIRE(w.a == 11 && w.b == 12);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
