// Typedef + multi-level pointers: typedefed pointer/array, pointer-to-pointer-to-typedef
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

typedef int *int_ptr;
typedef int_ptr *int_ptr_ptr;
typedef int arr2[2];
typedef arr2 *arr2_ptr;

static void test_typedef_pointer_levels(void) {
    int a = 10, b = 20;
    int_ptr p = &a;
    int_ptr_ptr pp = &p;
    REQUIRE(**pp == 10);
    *pp = &b;
    REQUIRE(**pp == 20);
}

static void test_typedef_array_pointer(void) {
    int grid[2][2] = { {1, 2}, {3, 4} };
    arr2_ptr row = grid;      // points to first row
    REQUIRE((*row)[0] == 1);
    row += 1;
    REQUIRE((*row)[1] == 4);
}

static void test_pointer_to_typedef_array_pointer(void) {
    int data[3][2] = { {5, 6}, {7, 8}, {9, 10} };
    arr2_ptr r0 = &data[0];
    arr2_ptr r1 = &data[1];
    arr2_ptr r2 = &data[2];
puts("AAA");

    arr2_ptr rows[3] = { r0, r1, r2 };
    arr2_ptr *prows = rows;      // pointer to array of arr2_ptr
    REQUIRE((*prows[0])[1] == 6);
    REQUIRE((*prows[2])[0] == 9);
puts("BBB");

    arr2_ptr *prow2 = &prows[1];
    REQUIRE((*prow2)[0][0] == 7);
    *prow2 = r0;
    REQUIRE((*prows[1])[0] == 5);
    
}
int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }

static void test_function_pointer_typedef_levels(void) {
    typedef int (*binop_fn)(int, int);
    typedef binop_fn *binop_fn_ptr;

    binop_fn ops[2] = { add, sub };
    binop_fn_ptr p = ops;
    binop_fn_ptr *pp = &p;
    REQUIRE((*pp)[0](2, 3) == 5);
    *pp = ops + 1;
    REQUIRE((*pp)[0](9, 4) == 5);
}

int main(void) {
    test_typedef_pointer_levels();
    test_typedef_array_pointer();
    test_pointer_to_typedef_array_pointer();
/*
    test_function_pointer_typedef_levels();
*/

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
