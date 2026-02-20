// C11 <threads.h> timeout-oriented coverage
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
static cnd_t g_cnd;
static int g_worker_rc = thrd_error;

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

static int compare_timespec(struct timespec a, struct timespec b)
{
    if (a.tv_sec < b.tv_sec) return -1;
    if (a.tv_sec > b.tv_sec) return 1;
    if (a.tv_nsec < b.tv_nsec) return -1;
    if (a.tv_nsec > b.tv_nsec) return 1;
    return 0;
}

static long long elapsed_msec(struct timespec begin, struct timespec end)
{
    long long sec = (long long)(end.tv_sec - begin.tv_sec);
    long long nsec = (long long)(end.tv_nsec - begin.tv_nsec);
    return sec * 1000LL + nsec / 1000000LL;
}

static int timedlock_worker(void* arg)
{
    (void)arg;

    struct timespec deadline;
    if (!get_utc(&deadline)) {
        g_worker_rc = thrd_error;
        return g_worker_rc;
    }
    add_msec(&deadline, 120);

    g_worker_rc = mtx_timedlock(&g_mtx, &deadline);
    if (g_worker_rc == thrd_success) {
        mtx_unlock(&g_mtx);
    }
    return g_worker_rc;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_timed) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);

    // thrd_sleep: success is 0, interrupted sleep may return -1.
    struct timespec req = { .tv_sec = 0, .tv_nsec = 50 * 1000 * 1000L };
    struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
    struct timespec t0;
    struct timespec t1;
    REQUIRE(get_utc(&t0));
    int sleep_rc = thrd_sleep(&req, &rem);
    REQUIRE(get_utc(&t1));
    REQUIRE(sleep_rc == 0 || sleep_rc == -1);
    REQUIRE(rem.tv_nsec >= 0 && rem.tv_nsec < 1000000000L);
    if (sleep_rc == 0) {
        REQUIRE(elapsed_msec(t0, t1) >= 30);
    }

    // mtx_timedlock timeout from another thread.
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    thrd_t th;
    REQUIRE(thrd_create(&th, timedlock_worker, NULL) == thrd_success);
    int join_rc = thrd_error;
    REQUIRE(thrd_join(th, &join_rc) == thrd_success);
    REQUIRE(g_worker_rc == thrd_timedout);
    REQUIRE(join_rc == thrd_timedout);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    // mtx_timedlock success path with future deadline.
    struct timespec lock_deadline;
    REQUIRE(get_utc(&lock_deadline));
    add_msec(&lock_deadline, 120);
    REQUIRE(mtx_timedlock(&g_mtx, &lock_deadline) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    // cnd_timedwait timeout (loop allows rare spurious wakeups).
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    struct timespec cond_deadline;
    REQUIRE(get_utc(&cond_deadline));
    add_msec(&cond_deadline, 90);
    int cond_rc = thrd_success;
    while (1) {
        cond_rc = cnd_timedwait(&g_cnd, &g_mtx, &cond_deadline);
        if (cond_rc == thrd_timedout) {
            break;
        }
        REQUIRE(cond_rc == thrd_success);
        struct timespec now;
        REQUIRE(get_utc(&now));
        if (compare_timespec(now, cond_deadline) >= 0) {
            cond_rc = thrd_timedout;
            break;
        }
    }
    REQUIRE(cond_rc == thrd_timedout);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
