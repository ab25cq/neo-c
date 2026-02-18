// C11 <threads.h> portability-oriented stress coverage
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <time.h>
#include <stdatomic.h>
#include <stdint.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

enum {
    JOIN_STRESS_ITERS = 64,
    DETACH_STRESS_ITERS = 32
};

static atomic_int g_join_sum = 0;
static atomic_int g_detached_done = 0;

static int joinable_worker(void* arg)
{
    int v = (int)(intptr_t)arg;
    thrd_yield();
    atomic_fetch_add(&g_join_sum, v);
    return v + 1;
}

static int detached_worker(void* arg)
{
    (void)arg;
    thrd_yield();
    thrd_yield();
    atomic_fetch_add(&g_detached_done, 1);
    return 0;
}

int main(void)
{
    // Basic thread identity/equality sanity.
    thrd_t me = thrd_current();
    REQUIRE(thrd_equal(me, me) != 0);

    // Joinable stress loop.
    atomic_store(&g_join_sum, 0);
    int expected_sum = 0;
    for (int i = 0; i < JOIN_STRESS_ITERS; i++) {
        int v = i + 1;
        expected_sum += v;

        thrd_t th;
        REQUIRE(thrd_create(&th, joinable_worker, (void*)(intptr_t)v) == thrd_success);

        int rc = 0;
        REQUIRE(thrd_join(th, &rc) == thrd_success);
        REQUIRE(rc == v + 1);
    }
    REQUIRE(atomic_load(&g_join_sum) == expected_sum);

    // Detached stress loop.
    atomic_store(&g_detached_done, 0);
    for (int i = 0; i < DETACH_STRESS_ITERS; i++) {
        thrd_t th;
        REQUIRE(thrd_create(&th, detached_worker, NULL) == thrd_success);
        REQUIRE(thrd_detach(th) == thrd_success);
    }

    // Wait up to ~2 seconds for detached workers to complete.
    for (int i = 0; i < 200; i++) {
        if (atomic_load(&g_detached_done) == DETACH_STRESS_ITERS) {
            break;
        }
        struct timespec req = { .tv_sec = 0, .tv_nsec = 10 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&req, &rem);
    }
    REQUIRE(atomic_load(&g_detached_done) == DETACH_STRESS_ITERS);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
