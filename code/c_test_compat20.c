// Packed + anonymous members Stress Test
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

#pragma pack(push, 1)
struct PackedAnon {
    int tag;
    union {
        struct {
            unsigned char r;
            unsigned short g;
            unsigned char blue;
        };
        struct {
            unsigned short u;
            unsigned char v;
            unsigned char w;
        };
    };
    struct {
        int a;
        int b;
    };
} __attribute__((packed));
#pragma pack(pop)

static struct PackedAnon make_pa(int tag, unsigned char r, unsigned short g, unsigned char b) {
    struct PackedAnon pa = {
        .tag = tag,
        .r = r,
        .g = g,
        .blue = b,
        .a = 10,
        .b = 20
    };
    return pa;
}

int main(void) {
    bool ok = true;

    REQUIRE(sizeof(struct PackedAnon) == sizeof(int) + sizeof(unsigned char) + sizeof(unsigned short) + sizeof(unsigned char) + sizeof(int) + sizeof(int));
    REQUIRE(offsetof(struct PackedAnon, b) > offsetof(struct PackedAnon, a));

    struct PackedAnon pa = make_pa(1, 1, 0x0203, 4);
    REQUIRE(pa.tag == 1);
    REQUIRE(pa.r == 1 && pa.g == 0x0203 && pa.blue == 4);
    REQUIRE(pa.a == 10 && pa.b == 20);

    // reassign via compound literal and anonymous members
    pa = (struct PackedAnon){
        .tag = 2,
        .u = 0x1111,
        .v = 0x22,
        .w = 0x33,
        .a = -5,
        .b = -6
    };
    REQUIRE(pa.tag == 2);
    REQUIRE(pa.u == 0x1111 && pa.v == 0x22 && pa.w == 0x33);
    REQUIRE(pa.a == -5 && pa.b == -6);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
