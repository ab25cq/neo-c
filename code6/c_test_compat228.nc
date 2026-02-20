// C11 <threads.h>: stricter TSS destructor iteration progression
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
static int g_marker = 1;

static void dtor_progress(void* value)
{
    if (value == NULL) {
        return;
    }
    int n = atomic_fetch_add(&g_dtor_calls, 1) + 1;
    if (n < 3) {
        // Force another round (if available) by re-storing non-null.
        (void)tss_set(g_key, &g_marker);
    }
    else {
        (void)tss_set(g_key, NULL);
    }
}

static int worker_set_tss(void* arg)
{
    (void)arg;
    if (tss_set(g_key, &g_marker) != thrd_success) {
        return -1;
    }
    if (tss_get(g_key) != &g_marker) {
        return -2;
    }
    return 228;
}

int main(void)
{
    REQUIRE(tss_create(&g_key, dtor_progress) == thrd_success);
    atomic_store(&g_dtor_calls, 0);

    thrd_t th;
    REQUIRE(thrd_create(&th, worker_set_tss, NULL) == thrd_success);
    int rc = 0;
    REQUIRE(thrd_join(th, &rc) == thrd_success);
    REQUIRE(rc == 228);

    int calls = atomic_load(&g_dtor_calls);
    int expected = (TSS_DTOR_ITERATIONS >= 3) ? 3 : TSS_DTOR_ITERATIONS;
    REQUIRE(calls == expected);

    // key still usable after destructor iteration sequence
    REQUIRE(tss_get(g_key) == NULL);
    REQUIRE(tss_set(g_key, &g_marker) == thrd_success);
    REQUIRE(tss_get(g_key) == &g_marker);
    REQUIRE(tss_set(g_key, NULL) == thrd_success);
    REQUIRE(tss_get(g_key) == NULL);

    tss_delete(g_key);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
