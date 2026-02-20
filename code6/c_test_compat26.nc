// _Atomic qualifier coverage: _Atomic(T) syntax, atomic struct/pointer ops, fences
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

typedef struct {
    int lo;
    long hi;
} WidePair;

typedef _Atomic(WidePair) atomic_widepair;

static atomic_widepair g_pair;
static _Atomic(int *) g_ptr = ATOMIC_VAR_INIT(NULL);
static _Atomic unsigned long g_counter = ATOMIC_VAR_INIT(10);

static void test_atomic_struct(void) {
    atomic_init(&g_pair, (WidePair){ .lo = 1, .hi = 2 });

    WidePair wrong = { 0, 0 };
    REQUIRE(!atomic_compare_exchange_strong_explicit(
        &g_pair, &wrong, (WidePair){ .lo = 5, .hi = 6 },
        memory_order_acq_rel, memory_order_acquire));
    REQUIRE(wrong.lo == 1 && wrong.hi == 2);

    WidePair expected = { 1, 2 };
    REQUIRE(atomic_compare_exchange_strong_explicit(
        &g_pair, &expected, (WidePair){ .lo = 7, .hi = 8 },
        memory_order_acq_rel, memory_order_acquire));
    WidePair loaded = atomic_load_explicit(&g_pair, memory_order_seq_cst);
    REQUIRE(loaded.lo == 7 && loaded.hi == 8);

    REQUIRE(atomic_is_lock_free(&g_pair) == 0 || atomic_is_lock_free(&g_pair) == 1);
}

static void test_atomic_pointer(void) {
    int a = 10;
    int b = 20;
    atomic_store_explicit(&g_ptr, &a, memory_order_release);

    int *expected = &a;
    REQUIRE(atomic_compare_exchange_weak_explicit(
        &g_ptr, &expected, &b,
        memory_order_acq_rel, memory_order_acquire));

    int *now = atomic_load_explicit(&g_ptr, memory_order_acquire);
    REQUIRE(now == &b);
}

static void test_atomic_integers(void) {
    unsigned long prev = atomic_fetch_add_explicit(&g_counter, 5, memory_order_acq_rel);
    REQUIRE(prev == 10);
    REQUIRE(atomic_load_explicit(&g_counter, memory_order_relaxed) == 15);

    _Atomic(int) local = ATOMIC_VAR_INIT(3);
    int expected = 3;
    REQUIRE(atomic_compare_exchange_weak_explicit(
        &local, &expected, 9,
        memory_order_acq_rel, memory_order_acquire));
    REQUIRE(atomic_exchange_explicit(&local, 1, memory_order_seq_cst) == 9);

    atomic_signal_fence(memory_order_acq_rel);
}

int main(void) {
    test_atomic_struct();
    test_atomic_pointer();
    test_atomic_integers();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
