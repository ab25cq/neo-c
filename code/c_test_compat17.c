// Enum + GNU range designators and expression-based enumerators
#include <stdio.h>
#include <stdbool.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

enum Range {
    R0 = 0,
    R1 = 2,
    R2 = R1 + 3,   // 5
    R3 = (1 << 5)  // 32
};

static int arr[33] = {
    [R0] = 1,
    [R1 ... R2] = -1,   // GNU range designator
    [R3] = 99
};

struct Pair {
    enum Range a;
    enum Range b;
};

static struct Pair table[34] = {
    [R0] = { .a = R0, .b = R1 },
    [R2] = { .a = R2, .b = R2 },
    [R3] = { .a = R3, .b = R0 }
};

int main(void) {
    bool ok = true;

    REQUIRE(R2 == 5);
    REQUIRE(R3 == 32);

    REQUIRE(arr[R0] == 1);
    REQUIRE(arr[R1] == -1 && arr[R2] == -1);
    REQUIRE(arr[R3] == 99);

    REQUIRE(table[R0].b == R1);
    REQUIRE(table[R2].a == R2 && table[R2].b == R2);
    REQUIRE(table[R3].a == R3);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
