// Function pointer array variations: designated init, pointer arithmetic, pointer-to-function-pointer, mixed signatures
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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
static int square(int a, int b) { (void)b; return a * a; }

typedef const char *(*strpick_fn)(const char *, int);

static const char *head(const char *s, int n) {
    return n <= 0 ? s : (n < (int)strlen(s) ? s : s);
}

static const char *skip(const char *s, int n) {
    if (n < 0) n = 0;
    return (size_t)n < strlen(s) ? s + n : s + strlen(s);
}

static void test_designated_init(void) {
    binop_fn dispatch[4] = {
        [2] = mul,
        [0] = add,
        [3] = sub
    };
    REQUIRE(dispatch[0](2, 3) == 5);
    REQUIRE(dispatch[2](3, 4) == 12);
    REQUIRE(dispatch[3](9, 2) == 7);
    REQUIRE(dispatch[1] == NULL);
}

static void test_pointer_arithmetic_and_assignment(void) {
    binop_fn ops[3];
    binop_fn *p = ops;
    p[0] = add;
    *(p + 1) = square;
    p[2] = sub;
    REQUIRE(p[0](1, 2) == 3);
    REQUIRE(p[1](5, 0) == 25);
    REQUIRE(p[2](8, 3) == 5);
    REQUIRE(&p[2] - &p[0] == 2);
}

static void test_pointer_to_array(void) {
    static binop_fn table[2] = { mul, sub };
    binop_fn (*ptbl)[2] = &table;
    REQUIRE((*ptbl)[0](3, 3) == 9);
    REQUIRE((*ptbl)[1](10, 6) == 4);
}

static void test_function_pointer_arrays_mixed_return(void) {
    strpick_fn picks[] = { head, skip };
    const char *s = "neo-c";
    REQUIRE(strcmp(picks[0](s, 2), "neo-c") == 0);
    REQUIRE(strcmp(picks[1](s, 2), "o-c") == 0);
}

static binop_fn *select_op(binop_fn *ops, size_t n, size_t idx) {
    return idx < n ? &ops[idx] : NULL;
}

static void test_selector(void) {
    binop_fn ops[] = { add, sub, mul };
    binop_fn *slot = select_op(ops, 3, 1);
    REQUIRE(slot && (*slot)(6, 4) == 2);
    slot = select_op(ops, 3, 4);
    REQUIRE(slot == NULL);
}

int main(void) {
    test_designated_init();
    test_pointer_arithmetic_and_assignment();
    test_pointer_to_array();
    test_function_pointer_arrays_mixed_return();
    test_selector();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
