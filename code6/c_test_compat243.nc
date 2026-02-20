// C11 <threads.h>: TSS destructor observes the final stored non-NULL value
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
static atomic_int g_seen_v1 = 0;
static atomic_int g_seen_v2 = 0;
static atomic_int g_seen_v3 = 0;
static int g_v1 = 2431;
static int g_v2 = 2432;
static int g_v3 = 2433;

static void dtor_track_value(void* value)
{
    if (value == &g_v1) {
        atomic_fetch_add(&g_seen_v1, 1);
    }
    else if (value == &g_v2) {
        atomic_fetch_add(&g_seen_v2, 1);
    }
    else if (value == &g_v3) {
        atomic_fetch_add(&g_seen_v3, 1);
    }
}

static int worker_v1_to_v2(void* arg)
{
    (void)arg;
    if (tss_set(g_key, &g_v1) != thrd_success) {
        return -10;
    }
    if (tss_set(g_key, &g_v2) != thrd_success) {
        return -11;
    }
    if (tss_get(g_key) != &g_v2) {
        return -12;
    }
    return 2431;
}

static int worker_v2_to_null(void* arg)
{
    (void)arg;
    if (tss_set(g_key, &g_v2) != thrd_success) {
        return -20;
    }
    if (tss_set(g_key, NULL) != thrd_success) {
        return -21;
    }
    if (tss_get(g_key) != NULL) {
        return -22;
    }
    return 2432;
}

static int worker_v1_v2_v3(void* arg)
{
    (void)arg;
    if (tss_set(g_key, &g_v1) != thrd_success) {
        return -30;
    }
    if (tss_set(g_key, &g_v2) != thrd_success) {
        return -31;
    }
    if (tss_set(g_key, &g_v3) != thrd_success) {
        return -32;
    }
    if (tss_get(g_key) != &g_v3) {
        return -33;
    }
    return 2433;
}

int main(void)
{
    REQUIRE(tss_create(&g_key, dtor_track_value) == thrd_success);
    atomic_store(&g_seen_v1, 0);
    atomic_store(&g_seen_v2, 0);
    atomic_store(&g_seen_v3, 0);

    thrd_t t1;
    REQUIRE(thrd_create(&t1, worker_v1_to_v2, NULL) == thrd_success);
    int rc = thrd_error;
    REQUIRE(thrd_join(t1, &rc) == thrd_success);
    REQUIRE(rc == 2431);
    REQUIRE(atomic_load(&g_seen_v1) == 0);
    REQUIRE(atomic_load(&g_seen_v2) == 1);
    REQUIRE(atomic_load(&g_seen_v3) == 0);

    thrd_t t2;
    REQUIRE(thrd_create(&t2, worker_v2_to_null, NULL) == thrd_success);
    REQUIRE(thrd_join(t2, &rc) == thrd_success);
    REQUIRE(rc == 2432);
    REQUIRE(atomic_load(&g_seen_v1) == 0);
    REQUIRE(atomic_load(&g_seen_v2) == 1);
    REQUIRE(atomic_load(&g_seen_v3) == 0);

    thrd_t t3;
    REQUIRE(thrd_create(&t3, worker_v1_v2_v3, NULL) == thrd_success);
    REQUIRE(thrd_join(t3, &rc) == thrd_success);
    REQUIRE(rc == 2433);
    REQUIRE(atomic_load(&g_seen_v1) == 0);
    REQUIRE(atomic_load(&g_seen_v2) == 1);
    REQUIRE(atomic_load(&g_seen_v3) == 1);

    // Main thread remains independent.
    REQUIRE(tss_get(g_key) == NULL);
    REQUIRE(tss_set(g_key, &g_v1) == thrd_success);
    REQUIRE(tss_get(g_key) == &g_v1);
    REQUIRE(tss_set(g_key, NULL) == thrd_success);

    tss_delete(g_key);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
