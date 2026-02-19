// C11 <threads.h>: multiple TSS-key isolation across threads
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <threads.h>
#include <stdatomic.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define TSS_WORKERS 3

static tss_t g_key1;
static tss_t g_key2;
static atomic_int g_done = 0;

static int worker_keys(void* arg)
{
    intptr_t id = (intptr_t)arg;
    void* v1 = (void*)(id + 100);
    void* v2 = (void*)(id + 200);

    if (tss_get(g_key1) != NULL || tss_get(g_key2) != NULL) {
        return 10;
    }
    if (tss_set(g_key1, v1) != thrd_success) {
        return 11;
    }
    if (tss_set(g_key2, v2) != thrd_success) {
        return 12;
    }
    thrd_yield();
    if (tss_get(g_key1) != v1) {
        return 13;
    }
    if (tss_get(g_key2) != v2) {
        return 14;
    }

    atomic_fetch_add(&g_done, 1);
    return (int)(id + 84);
}

static int worker_clean_probe(void* arg)
{
    (void)arg;
    return (tss_get(g_key1) == NULL && tss_get(g_key2) == NULL) ? 84 : -84;
}

int main(void)
{
    REQUIRE(tss_create(&g_key1, NULL) == thrd_success);
    REQUIRE(tss_create(&g_key2, NULL) == thrd_success);
    REQUIRE(tss_get(g_key1) == NULL);
    REQUIRE(tss_get(g_key2) == NULL);

    atomic_store(&g_done, 0);
    thrd_t th[TSS_WORKERS];
    for (int i = 0; i < TSS_WORKERS; i++) {
        REQUIRE(thrd_create(&th[i], worker_keys, (void*)(intptr_t)(i + 1)) == thrd_success);
    }
    for (int i = 0; i < TSS_WORKERS; i++) {
        int rc = 0;
        REQUIRE(thrd_join(th[i], &rc) == thrd_success);
        REQUIRE(rc == i + 85);
    }
    REQUIRE(atomic_load(&g_done) == TSS_WORKERS);

    // Main-thread values are independent from worker-thread values.
    REQUIRE(tss_get(g_key1) == NULL);
    REQUIRE(tss_get(g_key2) == NULL);
    REQUIRE(tss_set(g_key1, (void*)(intptr_t)0x111) == thrd_success);
    REQUIRE(tss_set(g_key2, (void*)(intptr_t)0x222) == thrd_success);
    REQUIRE(tss_get(g_key1) == (void*)(intptr_t)0x111);
    REQUIRE(tss_get(g_key2) == (void*)(intptr_t)0x222);

    thrd_t probe;
    REQUIRE(thrd_create(&probe, worker_clean_probe, NULL) == thrd_success);
    int probe_rc = 0;
    REQUIRE(thrd_join(probe, &probe_rc) == thrd_success);
    REQUIRE(probe_rc == 84);

    REQUIRE(tss_get(g_key1) == (void*)(intptr_t)0x111);
    REQUIRE(tss_get(g_key2) == (void*)(intptr_t)0x222);
    REQUIRE(tss_set(g_key1, NULL) == thrd_success);
    REQUIRE(tss_set(g_key2, NULL) == thrd_success);
    REQUIRE(tss_get(g_key1) == NULL);
    REQUIRE(tss_get(g_key2) == NULL);

    tss_delete(g_key2);
    tss_delete(g_key1);
    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
