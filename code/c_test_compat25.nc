// Mixed GCC extensions: statement expression, typeof, packed nested structs/unions
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

typedef struct __attribute__((packed)) {
    union {
        struct { unsigned short x; unsigned short y; };
        unsigned int pair;
    };
    struct __attribute__((packed)) {
        unsigned char a;
        unsigned char b;
    } bytes;
} PackedPair;

static PackedPair make_pp(unsigned short x, unsigned short y, unsigned char a, unsigned char b) {
    PackedPair p = {
        .x = x,
        .y = y,
        .bytes = { .a = a, .b = b }
    };
    return p;
}

// Statement expression returning max
#define MAX(a,b) ({ typeof(a) _A = (a); typeof(b) _B = (b); _A > _B ? _A : _B; })

int main(void) {
    bool ok = true;

    PackedPair p = make_pp(1, 2, 3, 4);
    REQUIRE(sizeof(PackedPair) == sizeof(unsigned int) + 2);
    REQUIRE(offsetof(PackedPair, bytes) == sizeof(unsigned int));
    REQUIRE(p.x == 1 && p.y == 2);
    REQUIRE(p.bytes.a == 3 && p.bytes.b == 4);

    unsigned short m = MAX(p.x, p.y);
    REQUIRE(m == 2);

    // Nested statement expression with sizeof/typeof
    int arr[3] = {1,2,3};
    int s = ({ typeof(arr) *pa = &arr; int sum = 0; for (size_t i=0;i<sizeof(arr)/sizeof(arr[0]);i++) sum += (*pa)[i]; sum; });
    REQUIRE(s == 6);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
