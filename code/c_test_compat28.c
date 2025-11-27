// _Atomic pointers/arrays: pointer swaps, array elements, compare-exchange on slots
#include <stdio.h>
#include <stdbool.h>
#include <stdatomic.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static _Atomic(int *) g_head = ATOMIC_VAR_INIT(NULL);
static _Atomic(int *) g_ptrs[2] = {
    ATOMIC_VAR_INIT(NULL),
    ATOMIC_VAR_INIT(NULL)
};

static _Atomic(int) g_counts[2] = {
    ATOMIC_VAR_INIT(3),
    ATOMIC_VAR_INIT(7)
};

static void test_atomic_pointer_swap(void) {
    int a = 1;
    int b = 2;
    atomic_store_explicit(&g_head, &a, memory_order_release);
    int *old = atomic_exchange_explicit(&g_head, &b, memory_order_acq_rel);
    REQUIRE(old == &a);
    REQUIRE(atomic_load_explicit(&g_head, memory_order_acquire) == &b);

    int *expected = &b;
    REQUIRE(atomic_compare_exchange_strong_explicit(
        &g_head, &expected, &a,
        memory_order_acq_rel, memory_order_acquire));
    REQUIRE(atomic_load_explicit(&g_head, memory_order_relaxed) == &a);
}

static void test_atomic_pointer_array(void) {
    int x = 10;
    int y = 20;
    atomic_store_explicit(&g_ptrs[0], &x, memory_order_release);
    atomic_store_explicit(&g_ptrs[1], &y, memory_order_release);

    int *p0 = atomic_load_explicit(&g_ptrs[0], memory_order_acquire);
    int *p1 = atomic_load_explicit(&g_ptrs[1], memory_order_acquire);
    REQUIRE(p0 && *p0 == 10);
    REQUIRE(p1 && *p1 == 20);

    int *expected = &y;
    REQUIRE(atomic_compare_exchange_weak_explicit(
        &g_ptrs[1], &expected, &x,
        memory_order_acq_rel, memory_order_acquire));
    REQUIRE(atomic_load_explicit(&g_ptrs[1], memory_order_relaxed) == &x);
}

static void test_atomic_array_elements(void) {
    int prev0 = atomic_fetch_add_explicit(&g_counts[0], 5, memory_order_relaxed);
    REQUIRE(prev0 == 3);
    REQUIRE(atomic_load_explicit(&g_counts[0], memory_order_relaxed) == 8);

    int expected = 7;
    REQUIRE(atomic_compare_exchange_strong_explicit(
        &g_counts[1], &expected, 11,
        memory_order_acq_rel, memory_order_acquire));
    REQUIRE(atomic_load_explicit(&g_counts[1], memory_order_relaxed) == 11);
}

int main(void) {
    test_atomic_pointer_swap();
    test_atomic_pointer_array();
    test_atomic_array_elements();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
