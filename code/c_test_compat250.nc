// C11 <threads.h>: TSS destructor-iteration behavior on explicit thrd_exit
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdatomic.h>

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
static int g_marker = 250;

static void dtor_repeat(void* value)
{
    if (value == NULL) {
        return;
    }
    int n = atomic_fetch_add(&g_dtor_calls, 1) + 1;
    if (n < 3) {
        // Request another pass as long as implementation permits.
        (void)tss_set(g_key, &g_marker);
    }
    else {
        (void)tss_set(g_key, NULL);
    }
}

static int exit_worker(void* arg)
{
    (void)arg;
    if (tss_set(g_key, &g_marker) != thrd_success) {
        return -10;
    }
    if (tss_get(g_key) != &g_marker) {
        return -11;
    }
    thrd_exit(250);
    return -12;
}

int main(void)
{
    REQUIRE(tss_create(&g_key, dtor_repeat) == thrd_success);
    atomic_store(&g_dtor_calls, 0);

    thrd_t th;
    REQUIRE(thrd_create(&th, exit_worker, NULL) == thrd_success);
    int rc = 0;
    REQUIRE(thrd_join(th, &rc) == thrd_success);
    REQUIRE(rc == 250);

    int calls = atomic_load(&g_dtor_calls);
    int expected = (TSS_DTOR_ITERATIONS >= 3) ? 3 : TSS_DTOR_ITERATIONS;
    REQUIRE(calls == expected);

    // Main-thread key state remains independent and usable.
    REQUIRE(tss_get(g_key) == NULL);
    REQUIRE(tss_set(g_key, &g_marker) == thrd_success);
    REQUIRE(tss_get(g_key) == &g_marker);
    REQUIRE(tss_set(g_key, NULL) == thrd_success);
    REQUIRE(tss_get(g_key) == NULL);

    tss_delete(g_key);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
