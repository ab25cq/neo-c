// C11 atomics: atomic_flag, compare_exchange, explicit memory orders
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

static atomic_flag g_flag = ATOMIC_FLAG_INIT;
static _Atomic(int) g_value = ATOMIC_VAR_INIT(0);

int main(void)
{
    REQUIRE(!atomic_flag_test_and_set_explicit(&g_flag, memory_order_acquire));
    REQUIRE(atomic_flag_test_and_set_explicit(&g_flag, memory_order_acquire));
    atomic_flag_clear_explicit(&g_flag, memory_order_release);

    atomic_store_explicit(&g_value, 7, memory_order_release);

    int expected = 7;
    REQUIRE(atomic_compare_exchange_strong_explicit(
        &g_value, &expected, 9, memory_order_acq_rel, memory_order_acquire));
    REQUIRE(atomic_load_explicit(&g_value, memory_order_relaxed) == 9);

    atomic_int local;
    atomic_init(&local, 3);
    REQUIRE(atomic_fetch_add_explicit(&local, 4, memory_order_seq_cst) == 3);
    REQUIRE(atomic_load_explicit(&local, memory_order_seq_cst) == 7);

    atomic_signal_fence(memory_order_seq_cst);
    atomic_thread_fence(memory_order_seq_cst);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
