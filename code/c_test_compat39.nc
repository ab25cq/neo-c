// pragma pack(push/pop, id) compatibility
#include <stdio.h>
#include <stdbool.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

#pragma pack(push, outer, 1)
struct P1 {
    char c;
    int i;
};

#pragma pack(push, inner, 2)
struct P2 {
    char c;
    int i;
};

#pragma pack(pop, outer)
struct P3 {
    char c;
    int i;
};

#pragma pack(push, 1)
#pragma pack(push, keep)
struct P4 {
    char c;
    int i;
};

#pragma pack(pop, keep)
struct P5 {
    char c;
    int i;
};

#pragma pack(pop)
struct P6 {
    char c;
    int i;
};

int main(void) {
    bool ok = true;

    REQUIRE(sizeof(struct P1) == 5);
    REQUIRE(sizeof(struct P2) == 6);
    REQUIRE(sizeof(struct P3) == 8);

    REQUIRE(sizeof(struct P4) == 5);
    REQUIRE(sizeof(struct P5) == 5);
    REQUIRE(sizeof(struct P6) == 8);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
