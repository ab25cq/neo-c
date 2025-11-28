// Pointer/array + qualifiers: const/volatile pointers, restrict, compound literals, designated init arrays, pointer casts
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

static void test_const_volatile_pointers(void) {
    int x = 5;
    const int *pc = &x;
    volatile int *pv = &x;
    const volatile int *pcv = &x;
    REQUIRE(*pc == 5);
    *pv = 7;
    REQUIRE(*pcv == 7);
}

static void test_restrict_arith(void) {
    int a[3] = {1, 2, 3};
    int b[3] = {0, 0, 0};
    int *restrict pa = a;
    int *restrict pb = b;
    for (int i = 0; i < 3; i++) pb[i] = pa[i] * 2;
    REQUIRE(pb[0] == 2 && pb[2] == 6);
}

static void test_compound_literals(void) {
    int *p = (int[]){ 9, 8, 7 };
    REQUIRE(p[0] == 9 && p[2] == 7);
    struct Pair { int x, y; };
    const struct Pair *pp = &(struct Pair){ .x = 4, .y = 6 };
    REQUIRE(pp->x == 4 && pp->y == 6);
}

static void test_designated_array(void) {
    int arr[6] = {
        [2] = 10,
        [4] = 20,
        [0] = 1
    };
    REQUIRE(arr[0] == 1);
    REQUIRE(arr[1] == 0);
    REQUIRE(arr[2] == 10);
    REQUIRE(arr[4] == 20);
}

static void test_pointer_casts(void) {
    char buf[4] = {1, 0, 0, 0};
    int *ip = (int *)(void *)buf; // allowed via void*
    // rely on host endianness only to check same address
    REQUIRE((void *)ip == (void *)buf);

    const char *cs = buf;
    void *vp = (void *)cs; // drop const through explicit cast
    REQUIRE(vp == (void *)buf);
}

int main(void) {
    test_const_volatile_pointers();
    test_restrict_arith();
    test_compound_literals();
    test_designated_array();
    test_pointer_casts();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
