// C11 <threads.h>: clearing TSS to NULL suppresses destructor on thread exit
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
static int g_marker = 238;

static void dtor_count_nonnull(void* value)
{
    if (value != NULL) {
        atomic_fetch_add(&g_dtor_calls, 1);
    }
}

static int worker_clear_before_exit(void* arg)
{
    (void)arg;
    if (tss_set(g_key, &g_marker) != thrd_success) {
        return -10;
    }
    if (tss_get(g_key) != &g_marker) {
        return -11;
    }
    if (tss_set(g_key, NULL) != thrd_success) {
        return -12;
    }
    if (tss_get(g_key) != NULL) {
        return -13;
    }
    return 2381;
}

static int worker_keep_nonnull(void* arg)
{
    (void)arg;
    if (tss_set(g_key, &g_marker) != thrd_success) {
        return -20;
    }
    if (tss_get(g_key) != &g_marker) {
        return -21;
    }
    return 2382;
}

static int worker_null_only(void* arg)
{
    (void)arg;
    if (tss_set(g_key, NULL) != thrd_success) {
        return -30;
    }
    if (tss_get(g_key) != NULL) {
        return -31;
    }
    return 2383;
}

int main(void)
{
    REQUIRE(tss_create(&g_key, dtor_count_nonnull) == thrd_success);
    atomic_store(&g_dtor_calls, 0);

    thrd_t t1;
    REQUIRE(thrd_create(&t1, worker_clear_before_exit, NULL) == thrd_success);
    int rc = thrd_error;
    REQUIRE(thrd_join(t1, &rc) == thrd_success);
    REQUIRE(rc == 2381);
    REQUIRE(atomic_load(&g_dtor_calls) == 0);

    thrd_t t2;
    REQUIRE(thrd_create(&t2, worker_keep_nonnull, NULL) == thrd_success);
    REQUIRE(thrd_join(t2, &rc) == thrd_success);
    REQUIRE(rc == 2382);
    REQUIRE(atomic_load(&g_dtor_calls) == 1);

    thrd_t t3;
    REQUIRE(thrd_create(&t3, worker_null_only, NULL) == thrd_success);
    REQUIRE(thrd_join(t3, &rc) == thrd_success);
    REQUIRE(rc == 2383);
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
