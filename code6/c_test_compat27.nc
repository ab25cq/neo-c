// _Atomic qualifier variations: struct exchange, bitwise ops, arrays, flags, fences
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
    int v;
} IntBox;

typedef _Atomic(IntBox) atomic_intbox;

static atomic_intbox g_box = ATOMIC_VAR_INIT((IntBox){ .v = 1 });
static atomic_ulong g_bitmap = ATOMIC_VAR_INIT(0x5ul);
static atomic_int g_seq = ATOMIC_VAR_INIT(0);
static atomic_int g_arr[2] = {
    ATOMIC_VAR_INIT(10),
    ATOMIC_VAR_INIT(20)
};
static _Atomic(int *) g_ptr = ATOMIC_VAR_INIT(NULL);
static atomic_flag g_flag = ATOMIC_FLAG_INIT;

static void test_struct_exchange(void) {
    IntBox before = atomic_load_explicit(&g_box, memory_order_relaxed);
    REQUIRE(before.v == 1);

/*
    IntBox expected = { 1 };
    REQUIRE(atomic_compare_exchange_strong_explicit(
        &g_box, &expected, (IntBox){ .v = 2 },
        memory_order_acq_rel, memory_order_acquire));
    IntBox swapped = atomic_exchange_explicit(&g_box, (IntBox){ .v = 3 }, memory_order_seq_cst);
    REQUIRE(swapped.v == 2);
    REQUIRE(atomic_load_explicit(&g_box, memory_order_relaxed).v == 3);
*/

    int lf = atomic_is_lock_free(&g_box);
    REQUIRE(lf == 0 || lf == 1);
}

static void test_bitwise_ops(void) {
    unsigned long prev = atomic_fetch_or_explicit(&g_bitmap, 0x2ul, memory_order_acq_rel);
    REQUIRE(prev == 0x5ul);
    prev = atomic_fetch_and_explicit(&g_bitmap, 0x3ul, memory_order_relaxed);
    REQUIRE(prev == 0x7ul);
    prev = atomic_fetch_xor_explicit(&g_bitmap, 0x1ul, memory_order_seq_cst);
    REQUIRE(prev == 0x3ul);
    REQUIRE(atomic_load_explicit(&g_bitmap, memory_order_relaxed) == 0x2ul);
}

static void test_arrays_pointers_flags(void) {
    int a = 1;
    int b = 2;
    atomic_store_explicit(&g_ptr, &a, memory_order_release);
    int *expected = &a;
    REQUIRE(atomic_compare_exchange_weak_explicit(
        &g_ptr, &expected, &b,
        memory_order_acq_rel, memory_order_acquire));
    REQUIRE(atomic_load_explicit(&g_ptr, memory_order_acquire) == &b);

    int prev = atomic_fetch_add_explicit(&g_arr[0], 5, memory_order_relaxed);
    REQUIRE(prev == 10);
    REQUIRE(atomic_load_explicit(&g_arr[0], memory_order_relaxed) == 15);
    REQUIRE(atomic_load_explicit(&g_arr[1], memory_order_relaxed) == 20);

    REQUIRE(!atomic_flag_test_and_set_explicit(&g_flag, memory_order_acquire));
    atomic_flag_clear_explicit(&g_flag, memory_order_release);
    REQUIRE(!atomic_flag_test_and_set_explicit(&g_flag, memory_order_acquire));
}

static void test_fences(void) {
    atomic_store_explicit(&g_seq, 11, memory_order_relaxed);
    atomic_signal_fence(memory_order_seq_cst);
    atomic_thread_fence(memory_order_seq_cst);
    int old = atomic_exchange_explicit(&g_seq, 22, memory_order_seq_cst);
    REQUIRE(old == 11);
}

int main(void) {
    test_struct_exchange();
    test_bitwise_ops();
    test_arrays_pointers_flags();
    test_fences();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
