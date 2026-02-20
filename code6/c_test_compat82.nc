// C11 <threads.h>: thread-specific storage isolation and default-null semantics
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

#define TSS_THREADS 4

static tss_t g_tss;
static atomic_int g_roundtrip_done = 0;

static int worker_roundtrip(void* arg)
{
    intptr_t id = (intptr_t)arg;
    void* marker = (void*)(id + 1000);

    if (tss_get(g_tss) != NULL) {
        return 10;
    }
    if (tss_set(g_tss, marker) != thrd_success) {
        return 11;
    }
    thrd_yield();
    if (tss_get(g_tss) != marker) {
        return 12;
    }

    atomic_fetch_add(&g_roundtrip_done, 1);
    return (int)id;
}

static int worker_check_clean(void* arg)
{
    (void)arg;
    return tss_get(g_tss) == NULL ? 82 : -82;
}

int main(void)
{
    REQUIRE(tss_create(&g_tss, NULL) == thrd_success);
    REQUIRE(tss_get(g_tss) == NULL);

    atomic_store(&g_roundtrip_done, 0);
    thrd_t th[TSS_THREADS];
    for (int i = 0; i < TSS_THREADS; i++) {
        REQUIRE(thrd_create(&th[i], worker_roundtrip, (void*)(intptr_t)(i + 1)) == thrd_success);
    }
    for (int i = 0; i < TSS_THREADS; i++) {
        int rc = 0;
        REQUIRE(thrd_join(th[i], &rc) == thrd_success);
        REQUIRE(rc == i + 1);
    }
    REQUIRE(atomic_load(&g_roundtrip_done) == TSS_THREADS);

    // Main-thread TLS value remains independent from worker threads.
    REQUIRE(tss_get(g_tss) == NULL);
    REQUIRE(tss_set(g_tss, (void*)(intptr_t)0x1234) == thrd_success);
    REQUIRE(tss_get(g_tss) == (void*)(intptr_t)0x1234);

    thrd_t probe;
    REQUIRE(thrd_create(&probe, worker_check_clean, NULL) == thrd_success);
    int probe_rc = 0;
    REQUIRE(thrd_join(probe, &probe_rc) == thrd_success);
    REQUIRE(probe_rc == 82);

    REQUIRE(tss_get(g_tss) == (void*)(intptr_t)0x1234);
    REQUIRE(tss_set(g_tss, NULL) == thrd_success);
    REQUIRE(tss_get(g_tss) == NULL);
    tss_delete(g_tss);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
