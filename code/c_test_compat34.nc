// Function pointer arrays: 2D tables, const arrays, struct members, selector returning slot pointers
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

typedef int (*binop_fn)(int, int);

static int add(int a, int b) { return a + b; }
static int sub(int a, int b) { return a - b; }
static int mul(int a, int b) { return a * b; }
static int max2(int a, int b) { return a > b ? a : b; }
static int min2(int a, int b) { return a < b ? a : b; }

static void test_two_dimensional(void) {
    binop_fn table[2][2] = {
        { add, sub },
        { mul, max2 }
    };
    REQUIRE(table[0][0](3, 4) == 7);
    REQUIRE(table[0][1](9, 2) == 7);
    REQUIRE(table[1][0](2, 5) == 10);
    REQUIRE(table[1][1](2, 5) == 5);

    binop_fn (*prow)[2] = table;
    REQUIRE(prow[1][0](3, 3) == 9);
    REQUIRE(prow[1][1](1, 6) == 6);

    binop_fn *flat = &table[0][0];
    REQUIRE(flat[3](4, 8) == 8); // table[1][1]
}

static void test_const_arrays(void) {
    static binop_fn const pipeline[] = { sub, add, mul };
    const binop_fn *p = pipeline;
    REQUIRE(p[0](7, 4) == 3);
    REQUIRE(p[1](1, 9) == 10);
    REQUIRE(p[2](3, 5) == 15);
}

struct Slots {
    binop_fn slots[3];
};

static void test_struct_member(void) {
    struct Slots s = { .slots = { max2, min2, add } };
    binop_fn *ps = s.slots;
    int x = ps[0](9, 1);
    int y = ps[1](9, 1);
    int z = ps[2](9, 1);
    REQUIRE(x == 9);
    REQUIRE(y == 1);
    REQUIRE(z == 10);
}

static binop_fn *select_slot(binop_fn (*tbl)[2], int row, int col) {
    return &tbl[row][col];
}

static void test_selector(void) {
    binop_fn grid[2][2] = { { min2, max2 }, { add, mul } };
    binop_fn *p = select_slot(grid, 1, 0);
    REQUIRE((*p)(2, 9) == 11);
    p = select_slot(grid, 0, 1);
    REQUIRE((*p)(5, 2) == 5);
}

static void test_assignment_array(void) {
    binop_fn ops[2];
    ops[0] = max2;
    ops[1] = min2;
    REQUIRE(ops[0](4, 7) == 7);
    REQUIRE(ops[1](4, 7) == 4);
}

int main(void) {
    test_two_dimensional();
    test_const_arrays();
    test_struct_member();
    test_selector();
    test_assignment_array();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
