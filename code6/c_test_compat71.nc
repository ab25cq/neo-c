// C11 <threads.h> contention coverage: trylock/once/broadcast
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdatomic.h>
#include <time.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

enum {
    ONCE_THREADS = 16,
    WAITER_THREADS = 6
};

static once_flag g_once = ONCE_FLAG_INIT;
static atomic_int g_once_count = 0;

static mtx_t g_mtx;
static cnd_t g_cnd;
static int g_ready = 0;
static atomic_int g_waiting_count = 0;
static atomic_int g_woke_count = 0;

static bool get_utc(struct timespec* out)
{
    return timespec_get(out, TIME_UTC) == TIME_UTC;
}

static void add_msec(struct timespec* ts, long msec)
{
    ts->tv_sec += msec / 1000;
    ts->tv_nsec += (msec % 1000) * 1000000L;
    if (ts->tv_nsec >= 1000000000L) {
        ts->tv_sec += 1;
        ts->tv_nsec -= 1000000000L;
    }
}

static void once_init(void)
{
    atomic_fetch_add(&g_once_count, 1);
}

static int once_worker(void* arg)
{
    (void)arg;
    call_once(&g_once, once_init);
    return 0;
}

static int trylock_worker(void* arg)
{
    (void)arg;
    return mtx_trylock(&g_mtx);
}

static int waiter_worker(void* arg)
{
    (void)arg;

    if (mtx_lock(&g_mtx) != thrd_success) {
        return 10;
    }
    atomic_fetch_add(&g_waiting_count, 1);

    struct timespec deadline;
    if (!get_utc(&deadline)) {
        mtx_unlock(&g_mtx);
        return 11;
    }
    add_msec(&deadline, 2000);

    while (!g_ready) {
        int rc = cnd_timedwait(&g_cnd, &g_mtx, &deadline);
        if (rc == thrd_timedout) {
            mtx_unlock(&g_mtx);
            return 12;
        }
        if (rc != thrd_success) {
            mtx_unlock(&g_mtx);
            return 13;
        }
    }
    if (mtx_unlock(&g_mtx) != thrd_success) {
        return 14;
    }
    atomic_fetch_add(&g_woke_count, 1);
    return 0;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);

    // mtx_trylock busy path from another thread.
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    thrd_t t_try;
    REQUIRE(thrd_create(&t_try, trylock_worker, NULL) == thrd_success);
    int try_rc = thrd_error;
    REQUIRE(thrd_join(t_try, &try_rc) == thrd_success);
    REQUIRE(try_rc == thrd_busy);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    // mtx_trylock success path.
    REQUIRE(mtx_trylock(&g_mtx) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    // call_once contention.
    thrd_t once_threads[ONCE_THREADS];
    int once_created = 0;
    for (int i = 0; i < ONCE_THREADS; i++) {
        int rc = thrd_create(&once_threads[i], once_worker, NULL);
        REQUIRE(rc == thrd_success);
        if (rc == thrd_success) {
            once_created++;
        }
    }
    for (int i = 0; i < once_created; i++) {
        int rc = thrd_error;
        REQUIRE(thrd_join(once_threads[i], &rc) == thrd_success);
        REQUIRE(rc == 0);
    }
    REQUIRE(atomic_load(&g_once_count) == 1);

    // cnd_broadcast wakes all current waiters.
    g_ready = 0;
    atomic_store(&g_waiting_count, 0);
    atomic_store(&g_woke_count, 0);
    thrd_t waiters[WAITER_THREADS];
    int waiter_created = 0;
    for (int i = 0; i < WAITER_THREADS; i++) {
        int rc = thrd_create(&waiters[i], waiter_worker, NULL);
        REQUIRE(rc == thrd_success);
        if (rc == thrd_success) {
            waiter_created++;
        }
    }

    for (int i = 0; i < 200; i++) {
        if (atomic_load(&g_waiting_count) == waiter_created) {
            break;
        }
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 10 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }
    REQUIRE(atomic_load(&g_waiting_count) == waiter_created);

    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    g_ready = 1;
    REQUIRE(cnd_broadcast(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    for (int i = 0; i < waiter_created; i++) {
        int rc = thrd_error;
        REQUIRE(thrd_join(waiters[i], &rc) == thrd_success);
        REQUIRE(rc == 0);
    }
    REQUIRE(atomic_load(&g_woke_count) == waiter_created);

    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
