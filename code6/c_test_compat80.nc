// C11 <threads.h>: cnd_signal sequencing and thrd_exit return path
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdatomic.h>
#include <stdint.h>
#include <time.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

enum {
    WAITER_THREADS = 3
};

static mtx_t g_mtx;
static cnd_t g_cnd;
static int g_tickets = 0;
static atomic_int g_waiting = 0;
static atomic_int g_woke = 0;

static int waiter_worker(void* arg)
{
    int id = (int)(intptr_t)arg;

    if (mtx_lock(&g_mtx) != thrd_success) {
        return -10;
    }
    atomic_fetch_add(&g_waiting, 1);

    while (g_tickets == 0) {
        int rc = cnd_wait(&g_cnd, &g_mtx);
        if (rc != thrd_success) {
            mtx_unlock(&g_mtx);
            return -11;
        }
    }

    g_tickets--;

    if (mtx_unlock(&g_mtx) != thrd_success) {
        return -12;
    }

    atomic_fetch_add(&g_woke, 1);
    return 80 + id;
}

static int exit_worker(void* arg)
{
    (void)arg;
    thrd_exit(91);
    return -1;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);

    atomic_store(&g_waiting, 0);
    atomic_store(&g_woke, 0);
    g_tickets = 0;

    thrd_t waiters[WAITER_THREADS];
    for (int i = 0; i < WAITER_THREADS; i++) {
        REQUIRE(thrd_create(&waiters[i], waiter_worker, (void*)(intptr_t)i) == thrd_success);
    }

    for (int i = 0; i < 300; i++) {
        if (atomic_load(&g_waiting) == WAITER_THREADS) {
            break;
        }
        struct timespec req = { .tv_sec = 0, .tv_nsec = 5 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&req, &rem);
    }
    REQUIRE(atomic_load(&g_waiting) == WAITER_THREADS);

    // Wake exactly one waiter first.
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    g_tickets = 1;
    REQUIRE(cnd_signal(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    for (int i = 0; i < 300; i++) {
        if (atomic_load(&g_woke) >= 1) {
            break;
        }
        struct timespec req = { .tv_sec = 0, .tv_nsec = 5 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&req, &rem);
    }
    REQUIRE(atomic_load(&g_woke) == 1);

    // Release the remaining waiters.
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    g_tickets = WAITER_THREADS - 1;
    REQUIRE(cnd_broadcast(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    for (int i = 0; i < WAITER_THREADS; i++) {
        int rc = -999;
        REQUIRE(thrd_join(waiters[i], &rc) == thrd_success);
        REQUIRE(rc == 80 + i);
    }
    REQUIRE(atomic_load(&g_woke) == WAITER_THREADS);

    // thrd_exit value must be observed by thrd_join.
    thrd_t ex;
    REQUIRE(thrd_create(&ex, exit_worker, NULL) == thrd_success);
    int exit_rc = -777;
    REQUIRE(thrd_join(ex, &exit_rc) == thrd_success);
    REQUIRE(exit_rc == 91);

    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
