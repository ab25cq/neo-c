// C11 <threads.h>: TSS_DTOR_ITERATIONS and key lifecycle coverage
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdatomic.h>
#include <stdint.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#if !defined(TSS_DTOR_ITERATIONS)
#error TSS_DTOR_ITERATIONS must be defined by <threads.h>
#endif

_Static_assert(TSS_DTOR_ITERATIONS >= 1, "TSS_DTOR_ITERATIONS must be >= 1");

static tss_t g_key;
static atomic_int g_dtor_calls = 0;

static void dtor_repeat_once(void* value)
{
    if (value == NULL) {
        return;
    }
    int n = atomic_fetch_add(&g_dtor_calls, 1) + 1;
    if (n == 1) {
        // Request a second round if implementation supports reiteration.
        (void)tss_set(g_key, value);
    }
}

static int worker_set_key(void* arg)
{
    void* marker = arg;
    if (tss_get(g_key) != NULL) {
        return -1;
    }
    if (tss_set(g_key, marker) != thrd_success) {
        return -2;
    }
    if (tss_get(g_key) != marker) {
        return -3;
    }
    return 224;
}

int main(void)
{
    void* marker = (void*)(intptr_t)0x2240;

    REQUIRE(tss_create(&g_key, dtor_repeat_once) == thrd_success);
    REQUIRE(tss_get(g_key) == NULL);

    atomic_store(&g_dtor_calls, 0);
    thrd_t th;
    REQUIRE(thrd_create(&th, worker_set_key, marker) == thrd_success);
    int rc = 0;
    REQUIRE(thrd_join(th, &rc) == thrd_success);
    REQUIRE(rc == 224);

    int calls = atomic_load(&g_dtor_calls);
    REQUIRE(calls >= 1);
    REQUIRE(calls <= TSS_DTOR_ITERATIONS);

    // Main-thread value remains independent after worker-thread exit.
    REQUIRE(tss_get(g_key) == NULL);
    REQUIRE(tss_set(g_key, marker) == thrd_success);
    REQUIRE(tss_get(g_key) == marker);
    REQUIRE(tss_set(g_key, NULL) == thrd_success);
    REQUIRE(tss_get(g_key) == NULL);

    tss_delete(g_key);

    // recreate/delete path for TSS key lifecycle
    tss_t key2;
    REQUIRE(tss_create(&key2, NULL) == thrd_success);
    REQUIRE(tss_get(key2) == NULL);
    REQUIRE(tss_set(key2, (void*)(intptr_t)1) == thrd_success);
    REQUIRE(tss_get(key2) == (void*)(intptr_t)1);
    tss_delete(key2);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
