// C11 atomics/fences テスト:
// - release/acquire フェンスでの共有整列
// - memory_order_relaxed + 明示フェンスでの publish/consume

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

static atomic_int g_flag = 0;
static int g_data = 0;

static atomic_bool g_ready;
static atomic_int g_value;

static void producer_release(void) {
    g_data = 42;
    atomic_thread_fence(memory_order_release);
    atomic_store_explicit(&g_flag, 1, memory_order_relaxed);
}

static int consumer_acquire(void) {
    while (atomic_load_explicit(&g_flag, memory_order_relaxed) == 0) { }
    atomic_thread_fence(memory_order_acquire);
    return g_data;
}

static void producer_relaxed(void) {
    atomic_store_explicit(&g_value, 123, memory_order_relaxed);
    atomic_thread_fence(memory_order_release);
    atomic_store_explicit(&g_ready, true, memory_order_relaxed);
}

static int consumer_relaxed(void) {
    while (!atomic_load_explicit(&g_ready, memory_order_relaxed)) { }
    atomic_thread_fence(memory_order_acquire);
    return atomic_load_explicit(&g_value, memory_order_relaxed);
}

int main(void) {
    atomic_init(&g_ready, false);
    atomic_init(&g_value, 0);
    producer_release();
    int read = consumer_acquire();
    REQUIRE(read == 42);

    producer_relaxed();
    int got = consumer_relaxed();
    REQUIRE(got == 123);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
