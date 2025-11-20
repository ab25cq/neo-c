// Type definition tests: struct/union/enum initializers and assignments
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

struct Vec3 {
    int x, y, z;
};

struct Matrix3 {
    struct Vec3 rows[3];
};

union Number {
    int i;
    double d;
    unsigned char bytes[8];
};

enum Status {
    STATUS_NONE,
    STATUS_READY = 4,
    STATUS_DONE
};

struct Node {
    enum Status status;
    struct Vec3 pos;
    union Number value;
};

_Static_assert(sizeof(struct Vec3) == sizeof(int) * 3, "Vec3 size");
_Static_assert(offsetof(struct Matrix3, rows) == 0, "rows at offset 0");

static bool approx(double a, double b, double eps) {
    double diff = a - b;
    if (diff < 0) diff = -diff;
    return diff <= eps;
}

int main(void) {
    bool ok = true;

    struct Matrix3 mat = {
        .rows = {
            { .x = 1, .y = 0, .z = 0 },
            { .x = 0, .y = 1, .z = 0 },
            { .x = 0, .y = 0, .z = 1 }
        }
    };
    REQUIRE(mat.rows[1].y == 1 && mat.rows[2].z == 1);

    union Number num = { .d = 3.5 };
    REQUIRE(approx(num.d, 3.5, 1e-12));
    num.i = 10;
    REQUIRE(num.i == 10);

    struct Node node = {
        .status = STATUS_READY,
        .pos = { .x = 2, .y = 3, .z = 4 },
        .value.i = 44
    };
    REQUIRE(node.status == STATUS_READY);
    REQUIRE(node.pos.y == 3);
    REQUIRE(node.value.i == 44);

    struct Node copy = node;
    copy.status = STATUS_DONE;
    copy.value.d = 8.5;
    REQUIRE(node.status == STATUS_READY);
    REQUIRE(copy.status == STATUS_DONE);
    REQUIRE(approx(copy.value.d, 8.5, 1e-12));

    struct Node arr[2] = {
        [0] = node,
        [1] = {
            .status = STATUS_NONE,
            .pos = { 7, 8, 9 },
            .value.bytes = { 1, 2, 3, 4, 5, 6, 7, 8 }
        }
    };
    REQUIRE(arr[1].pos.z == 9);
    REQUIRE(arr[1].value.bytes[3] == 4);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
