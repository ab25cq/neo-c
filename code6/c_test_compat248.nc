// C11 <threads.h>: detached thrd_exit threads still trigger TSS destructors
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdatomic.h>
#include <time.h>
#include <stdint.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

enum { NTHREADS = 6 };

static tss_t g_key;
static atomic_int g_started = 0;
static atomic_int g_dtor_calls = 0;
static int g_marker[NTHREADS];

static void dtor_count_nonnull(void* value)
{
    if (value != NULL) {
        atomic_fetch_add(&g_dtor_calls, 1);
    }
}

static int detached_exit_worker(void* arg)
{
    intptr_t idx = (intptr_t)arg;
    if (idx < 0 || idx >= NTHREADS) {
        return -1;
    }

    if (tss_set(g_key, &g_marker[idx]) != thrd_success) {
        return -2;
    }
    if (tss_get(g_key) != &g_marker[idx]) {
        return -3;
    }
    atomic_fetch_add(&g_started, 1);

    thrd_exit(2480 + (int)idx);
    return -4;
}

int main(void)
{
    for (int i = 0; i < NTHREADS; ++i) {
        g_marker[i] = 24800 + i;
    }

    REQUIRE(tss_create(&g_key, dtor_count_nonnull) == thrd_success);
    atomic_store(&g_started, 0);
    atomic_store(&g_dtor_calls, 0);

    thrd_t th[NTHREADS];
    int created = 0;
    for (int i = 0; i < NTHREADS; ++i) {
        int rc = thrd_create(&th[i], detached_exit_worker, (void*)(intptr_t)i);
        REQUIRE(rc == thrd_success);
        if (rc == thrd_success) {
            REQUIRE(thrd_detach(th[i]) == thrd_success);
            created++;
        }
    }

    // Detached handles should not be joinable.
    if (created > 0) {
        int rc = 0;
        REQUIRE(thrd_join(th[0], &rc) != thrd_success);
    }

    for (int i = 0; i < 1200; ++i) {
        if (atomic_load(&g_dtor_calls) == created) {
            break;
        }
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 2 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }

    REQUIRE(atomic_load(&g_started) == created);
    REQUIRE(atomic_load(&g_dtor_calls) == created);

    // Main-thread slot remains independent.
    REQUIRE(tss_get(g_key) == NULL);
    REQUIRE(tss_set(g_key, &g_marker[0]) == thrd_success);
    REQUIRE(tss_get(g_key) == &g_marker[0]);
    REQUIRE(tss_set(g_key, NULL) == thrd_success);
    REQUIRE(tss_get(g_key) == NULL);

    tss_delete(g_key);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
