// Function pointer array compatibility: arrays of function pointers, function-type typedefs, pointer-to-array, struct members
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static int add(int a, int b) { return a + b; }
static int sub(int a, int b) { return a - b; }
static int mul(int a, int b) { return a * b; }

static void inc(int *v) { (*v)++; }
static void dbl(int *v) { (*v) *= 2; }

typedef int (*binop_fn)(int, int);
typedef int binop_t(int, int); // function type (not pointer)

static void test_basic_array(void) {
    binop_fn ops[] = { add, sub, mul };
    REQUIRE(ops[0](2, 3) == 5);
    REQUIRE((*(ops + 1))(7, 4) == 3);
    REQUIRE(ops[2](3, 4) == 12);
}

static void test_function_type_typedef(void) {
    binop_t *fns[] = { add, mul };
    REQUIRE(fns[0](1, 9) == 10);
    REQUIRE(fns[1](2, 5) == 10);
    REQUIRE(fns[0] == add);
}

static void test_pointer_to_array(void) {
    binop_fn table[2] = { sub, add };
    binop_fn (*ptbl)[2] = &table;
    REQUIRE((*ptbl)[0](9, 3) == 6);
    REQUIRE((*ptbl)[1](4, 6) == 10);

    binop_fn *flat = *ptbl;
    REQUIRE(flat[1](1, 2) == 3);
}

struct Handler {
    void (*cbs[2])(int *);
};

static void test_struct_member_array(void) {
    struct Handler h = { .cbs = { inc, dbl } };
    int v = 5;
    h.cbs[0](&v);
    REQUIRE(v == 6);
    h.cbs[1](&v);
    REQUIRE(v == 12);
}

static void test_null_and_assign(void) {
    binop_fn f = NULL;
    REQUIRE(f == NULL);
    f = sub;
    REQUIRE(f(10, 4) == 6);
}

int main(void) {
    test_basic_array();
    test_function_type_typedef();
    test_pointer_to_array();
    test_struct_member_array();
    test_null_and_assign();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
