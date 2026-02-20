// C11 <threads.h>: TSS destructor behavior on explicit thrd_exit path
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

static tss_t g_key;
static atomic_int g_dtor_calls = 0;
static int g_marker = 247;

static void dtor_count_nonnull(void* value)
{
    if (value != NULL) {
        atomic_fetch_add(&g_dtor_calls, 1);
    }
}

static int worker_exit_with_value(void* arg)
{
    (void)arg;
    if (tss_set(g_key, &g_marker) != thrd_success) {
        return -10;
    }
    if (tss_get(g_key) != &g_marker) {
        return -11;
    }
    thrd_exit(2471);
    return -12;
}

static int worker_exit_with_null(void* arg)
{
    (void)arg;
    if (tss_set(g_key, NULL) != thrd_success) {
        return -20;
    }
    if (tss_get(g_key) != NULL) {
        return -21;
    }
    thrd_exit(2472);
    return -22;
}

int main(void)
{
    REQUIRE(tss_create(&g_key, dtor_count_nonnull) == thrd_success);
    atomic_store(&g_dtor_calls, 0);

    thrd_t t1;
    REQUIRE(thrd_create(&t1, worker_exit_with_value, NULL) == thrd_success);
    int rc = 0;
    REQUIRE(thrd_join(t1, &rc) == thrd_success);
    REQUIRE(rc == 2471);
    REQUIRE(atomic_load(&g_dtor_calls) == 1);

    thrd_t t2;
    REQUIRE(thrd_create(&t2, worker_exit_with_null, NULL) == thrd_success);
    REQUIRE(thrd_join(t2, &rc) == thrd_success);
    REQUIRE(rc == 2472);
    REQUIRE(atomic_load(&g_dtor_calls) == 1);

    // Main-thread slot remains independent.
    REQUIRE(tss_get(g_key) == NULL);
    REQUIRE(tss_set(g_key, &g_marker) == thrd_success);
    REQUIRE(tss_get(g_key) == &g_marker);
    REQUIRE(tss_set(g_key, NULL) == thrd_success);
    REQUIRE(tss_get(g_key) == NULL);

    tss_delete(g_key);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
