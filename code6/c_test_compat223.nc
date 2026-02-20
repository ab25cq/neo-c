// C11 <threads.h>: mtx_recursive|mtx_timed combined behavior
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <time.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static mtx_t g_mtx;

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

static int timedlock_worker(void* arg)
{
    (void)arg;
    struct timespec deadline;
    if (!get_utc(&deadline)) {
        return thrd_error;
    }
    add_msec(&deadline, 80);
    int rc = mtx_timedlock(&g_mtx, &deadline);
    if (rc == thrd_success) {
        (void)mtx_unlock(&g_mtx);
    }
    return rc;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_recursive | mtx_timed) == thrd_success);

    // recursive lock/trylock/timedlock from same owner
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    REQUIRE(mtx_trylock(&g_mtx) == thrd_success);
    struct timespec d0;
    REQUIRE(get_utc(&d0));
    add_msec(&d0, 10);
    REQUIRE(mtx_timedlock(&g_mtx, &d0) == thrd_success);

    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    // timedlock timeout while held by another thread
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    thrd_t th;
    REQUIRE(thrd_create(&th, timedlock_worker, NULL) == thrd_success);
    int worker_rc = thrd_error;
    REQUIRE(thrd_join(th, &worker_rc) == thrd_success);
    REQUIRE(worker_rc == thrd_timedout);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    // timedlock success after release
    struct timespec d1;
    REQUIRE(get_utc(&d1));
    add_msec(&d1, 100);
    REQUIRE(mtx_timedlock(&g_mtx, &d1) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
