// Function-pointer pointer levels and pointer-of-pointer arrays
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

typedef int (*unary_fn)(int);
typedef int *(*idx_fn)(int *);

static int inc(int x) { return x + 1; }
static int dec(int x) { return x - 1; }

static int *first(int *p) { return p; }
static int *second(int *p) { return p + 1; }

static void test_function_pointer_pointer(void) {
    unary_fn ops[2] = { inc, dec };
    unary_fn *p = ops;
    unary_fn **pp = &p;

    REQUIRE((*p)(3) == 4);
    REQUIRE((**pp)(10) == 11);
    p += 1;
    REQUIRE((*p)(7) == 6);
    REQUIRE(pp[0] == &ops[1]);
}

static void test_pointer_to_array_of_fnptr(void) {
    idx_fn pickers[2] = { first, second };
    idx_fn (*ptbl)[2] = &pickers;

    int data[3] = { 5, 6, 7 };
    int *a = (*ptbl)[0](data);
    int *b = (*ptbl)[1](data);
    REQUIRE(a && *a == 5);
    REQUIRE(b && *b == 6);
}

static void test_pointer_of_pointer_array(void) {
    int a = 1, b = 2, c = 3;
    int *plist[3] = { &a, &b, &c };
    int **pp = plist;

    REQUIRE(*pp[0] == 1);
    REQUIRE(*pp[1] == 2);
    REQUIRE(*pp[2] == 3);
    REQUIRE(&pp[2] - &pp[0] == 2);

    int **end = plist + 3;
    size_t count = (size_t)(end - pp);
    REQUIRE(count == 3);
}

int main(void) {
    test_function_pointer_pointer();
    test_pointer_to_array_of_fnptr();
    test_pointer_of_pointer_array();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
