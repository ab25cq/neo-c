// Packed anonymous union + zero-width bitfield
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
struct PackedBits {
    union {
        struct {
            unsigned a:3;
            unsigned :0; // force next alignment unit
            unsigned b:5;
        };
        unsigned char raw[sizeof(unsigned)];
    };
    unsigned char c;
} __attribute__((packed));
#pragma pack(pop)

int main(void) {
    bool ok = true;

    struct PackedBits pb = { .a = 5, .b = 7, .c = 0xAA };
    REQUIRE(pb.a == 5);
    REQUIRE(pb.b == 7);
    REQUIRE(pb.c == 0xAA);

    // size/layout expectations under pack(1)
    REQUIRE(sizeof(struct PackedBits) >= 2);
    REQUIRE(offsetof(struct PackedBits, c) >= 1);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
