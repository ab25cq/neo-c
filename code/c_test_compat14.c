// Packed / anonymous struct+union layout checks tailored to expose neo-c gaps
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

#pragma pack(push, 1)
struct Packed {
    unsigned short a;
    unsigned char b;
    unsigned int c;
};
#pragma pack(pop)

struct Outer {
    int id;
    union {
        struct {
            short sx;
            short sy;
        };
        int combined;
    };
    struct {
        unsigned char r, g, b;
    } color;
};

struct Container {
    struct {
        int x;
        int y;
    } pos;
    union {
        struct {
            float u, v;
        };
        float uv[2];
    };
};

int main(void) {
    bool ok = true;

    REQUIRE(sizeof(struct Packed) == sizeof(unsigned short) + sizeof(unsigned char) + sizeof(unsigned int));
    REQUIRE(offsetof(struct Packed, c) == sizeof(unsigned short) + sizeof(unsigned char));

    struct Packed pk = { .a = 0x1122, .b = 0x33, .c = 0x44556677 };
    unsigned char bytes[sizeof(struct Packed)];
    memcpy(bytes, &pk, sizeof(pk));
    REQUIRE(bytes[0] == 0x22 && bytes[1] == 0x11); // little-endian assumption

    struct Outer o = { .id = 5, .sx = 10, .sy = 20 };
    REQUIRE(o.sx == 10 && o.sy == 20);
    o.combined = 0x01020304;
    REQUIRE(o.sx != 10 || o.sy != 20); // overwritten via union
    o.color.r = 1;
    o.color.g = 2;
    o.color.b = 3;
    REQUIRE(o.color.g == 2);

    struct Container c = {
        .pos = { .x = 2, .y = 4 },
        .u = 0.5f,
        .v = 1.5f
    };
    REQUIRE(c.uv[0] == 0.5f && c.uv[1] == 1.5f);
    REQUIRE(c.pos.y == 4);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
