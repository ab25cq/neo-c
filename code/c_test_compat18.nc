// Enum edge cases: anonymous enum in struct, case ranges with enum values (GNU), and designators
#include <stdio.h>
#include <stdbool.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

struct Holder {
    enum {
        H0 = 1,
        H1,
        H4 = 4
    } anon;
    int value;
};

static const int lookup[5] = {
    [H0] = 10,
    [H4] = 40
};

static int classify(int v) {
    switch (v) {
        case H0 ... H1: return 1;      // GNU case range with enum values
        case H4:        return 4;
        default:        return 0;
    }
}

int main(void) {
    bool ok = true;

    struct Holder h = { .anon = H1, .value = 7 };
    REQUIRE(h.anon == H1);
    REQUIRE(lookup[H0] == 10);
    REQUIRE(lookup[H4] == 40);

    REQUIRE(classify(H0) == 1);
    REQUIRE(classify(H1) == 1);
    REQUIRE(classify(H4) == 4);
    REQUIRE(classify(99) == 0);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
