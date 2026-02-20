// C11 <threads.h>: mtx_timedlock past-deadline boundary behavior
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

static long long elapsed_msec(struct timespec begin, struct timespec end)
{
    long long sec = (long long)(end.tv_sec - begin.tv_sec);
    long long nsec = (long long)(end.tv_nsec - begin.tv_nsec);
    return sec * 1000LL + nsec / 1000000LL;
}

static int past_deadline_worker(void* arg)
{
    (void)arg;
    struct timespec past;
    if (!get_utc(&past)) {
        return -10;
    }
    past.tv_nsec -= 1;
    if (past.tv_nsec < 0) {
        past.tv_nsec += 1000000000L;
        past.tv_sec -= 1;
    }

    struct timespec t0;
    struct timespec t1;
    if (!get_utc(&t0)) {
        return -11;
    }
    int rc = mtx_timedlock(&g_mtx, &past);
    if (!get_utc(&t1)) {
        return -12;
    }
    long long ms = elapsed_msec(t0, t1);
    if (ms > 200) {
        return -13;
    }
    return rc;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_timed) == thrd_success);

    // locked by main: past-deadline timedlock should time out quickly.
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    thrd_t th;
    REQUIRE(thrd_create(&th, past_deadline_worker, NULL) == thrd_success);
    int worker_rc = 0;
    REQUIRE(thrd_join(th, &worker_rc) == thrd_success);
    REQUIRE(worker_rc == thrd_timedout);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    // unlocked mutex: even past deadline should acquire immediately.
    struct timespec past;
    REQUIRE(get_utc(&past));
    past.tv_nsec -= 1;
    if (past.tv_nsec < 0) {
        past.tv_nsec += 1000000000L;
        past.tv_sec -= 1;
    }
    REQUIRE(mtx_timedlock(&g_mtx, &past) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
