// Pointer/array compatibility tests (non-atomic): decay, pointer arithmetic, VLA, array-of-arrays
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

static void test_decay_and_arith(void) {
    int nums[] = {1, 2, 3, 4};
    int *p = nums;                 // array-to-pointer decay
    REQUIRE(p[0] == 1 && *(p + 2) == 3);
    REQUIRE(&nums[3] - &nums[0] == 3);
}

static void test_array_of_arrays(void) {
    int mat[2][3] = { {1,2,3}, {4,5,6} };
    int (*row0)[3] = &mat[0];
    int (*row1)[3] = &mat[1];
    REQUIRE((*row0)[1] == 2);
    REQUIRE((*row1)[2] == 6);

    int (*cursor)[3] = mat;
    REQUIRE(cursor[0][0] == 1);
    cursor += 1;
    REQUIRE(cursor[0][0] == 4);
}

static void test_vla_pointer(void) {
    int n = 4;
    int vla[n];
    for (int i = 0; i < n; i++) vla[i] = i * 10;

printf("n %d\n", n);
    int (*pvla)[n] = &vla; // pointer to VLA
    REQUIRE((*pvla)[0] == 0);
    REQUIRE((*pvla)[3] == 30);

    // decay from VLA to pointer preserves length in sizeof when applied to pointer target
    size_t elems = sizeof(*pvla) / sizeof(int);
printf("sizeof(*pvla) %d sizeof(int) %d\n", sizeof(*pvla), sizeof(int));
printf("elemes %d n %d\n", elems, n);
    REQUIRE(elems == (size_t)n);
}

int add1(int x) { return x + 1; }
int mul2(int x) { return x * 2; }

static void test_function_pointer_array(void) {

    int (*ops[])(int) = { add1, mul2 };
    REQUIRE(ops[0](5) == 6);
    REQUIRE(ops[1](6) == 12);
}

int main(void) {
    test_decay_and_arith();
    test_array_of_arrays();
    test_vla_pointer();
    test_function_pointer_array();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
