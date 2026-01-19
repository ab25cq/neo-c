// Pointer indirection depth tests: **p adjustments, pointer-to-array pointers, triple pointers
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static void test_double_pointer_shift(void) {
    int nums[4] = {1, 2, 3, 4};
    int *p = nums;
    int **pp = &p;
    REQUIRE(**pp == 1);
    *pp += 2; // shift underlying pointer
    REQUIRE(**pp == 3);
    REQUIRE(p == &nums[2]);
}

static void test_pointer_array_via_double_pointer(void) {
    int a = 5, b = 6, c = 7;
    int *list[3] = { &a, &b, &c };
    int **pp = list;
    REQUIRE(*pp[0] == 5);
    REQUIRE(*pp[2] == 7);
    pp[1] = &a; // mutate through double pointer
    REQUIRE(*list[1] == 5);
}

static void test_triple_pointer_store(void) {
    int x = 10;
    int *px = &x;
    int **ppx = &px;
    int ***pppx = &ppx;
    REQUIRE(***pppx == 10);
    ***pppx = 15;
    REQUIRE(x == 15);
}

static void test_pointer_to_array_pointer(void) {
    int mat[2][2] = { {1, 2}, {3, 4} };
    int (*row)[2] = &mat[0];
    int (**prow)[2] = &row;
    REQUIRE((**prow)[0] == 1);
    *prow = &mat[1];
    REQUIRE((**prow)[1] == 4);
    REQUIRE(row == &mat[1]);
}

static void test_pointer_to_pointer_to_array_element(void) {
    int mat[2][3] = { {9, 8, 7}, {6, 5, 4} };
    int *first_row = mat[0];
    int **pp = &first_row;
    REQUIRE(*(*pp + 1) == 8);
    *pp = mat[1];
    REQUIRE(*(*pp + 2) == 4);
}

int main(void) {
    test_double_pointer_shift();
    test_pointer_array_via_double_pointer();
    test_triple_pointer_store();
    test_pointer_to_array_pointer();
    test_pointer_to_pointer_to_array_element();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
