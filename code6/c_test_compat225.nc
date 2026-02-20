// C11 <threads.h>: cnd_wait/cnd_timedwait must return with mutex locked
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

static mtx_t g_mtx;
static cnd_t g_cnd;
static atomic_int g_stage = 0;
static int g_ready = 0;

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

static int helper_trylock(void* arg)
{
    (void)arg;
    int rc = mtx_trylock(&g_mtx);
    if (rc == thrd_success) {
        (void)mtx_unlock(&g_mtx);
    }
    return rc;
}

static int waiter_worker(void* arg)
{
    (void)arg;
    if (mtx_lock(&g_mtx) != thrd_success) {
        return -10;
    }
    while (!g_ready) {
        int rc = cnd_wait(&g_cnd, &g_mtx);
        if (rc != thrd_success) {
            (void)mtx_unlock(&g_mtx);
            return -11;
        }
    }

    // cnd_wait returned, mutex should already be reacquired here.
    atomic_store(&g_stage, 1);
    while (atomic_load(&g_stage) == 1) {
        thrd_yield();
    }

    if (mtx_unlock(&g_mtx) != thrd_success) {
        return -12;
    }
    return 225;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);

    // timeout path: cnd_timedwait should return while still owning mutex.
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    struct timespec deadline;
    REQUIRE(get_utc(&deadline));
    add_msec(&deadline, 80);
    REQUIRE(cnd_timedwait(&g_cnd, &g_mtx, &deadline) == thrd_timedout);

    thrd_t probe1;
    REQUIRE(thrd_create(&probe1, helper_trylock, NULL) == thrd_success);
    int probe1_rc = thrd_error;
    REQUIRE(thrd_join(probe1, &probe1_rc) == thrd_success);
    REQUIRE(probe1_rc == thrd_busy);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    // signal path: cnd_wait should also return with mutex held by waiter.
    g_ready = 0;
    atomic_store(&g_stage, 0);
    thrd_t waiter;
    REQUIRE(thrd_create(&waiter, waiter_worker, NULL) == thrd_success);

    // Wait until waiter enters wait state.
    for (int i = 0; i < 200; ++i) {
        if (mtx_lock(&g_mtx) == thrd_success) {
            g_ready = 1;
            REQUIRE(cnd_signal(&g_cnd) == thrd_success);
            REQUIRE(mtx_unlock(&g_mtx) == thrd_success);
            break;
        }
    }

    for (int i = 0; i < 400; ++i) {
        if (atomic_load(&g_stage) == 1) break;
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 2 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }
    REQUIRE(atomic_load(&g_stage) == 1);

    thrd_t probe2;
    REQUIRE(thrd_create(&probe2, helper_trylock, NULL) == thrd_success);
    int probe2_rc = thrd_error;
    REQUIRE(thrd_join(probe2, &probe2_rc) == thrd_success);
    REQUIRE(probe2_rc == thrd_busy);

    atomic_store(&g_stage, 2);
    int waiter_rc = thrd_error;
    REQUIRE(thrd_join(waiter, &waiter_rc) == thrd_success);
    REQUIRE(waiter_rc == 225);

    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
