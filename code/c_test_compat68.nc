// C11 <threads.h> additional coverage: detach/equal/current/yield
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
static int g_detached_done = 0;
static thrd_t g_worker_tid;

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

static int joinable_worker(void* arg)
{
    (void)arg;
    g_worker_tid = thrd_current();
    thrd_yield();
    return 68;
}

static int detached_worker(void* arg)
{
    (void)arg;
    thrd_yield();

    if (mtx_lock(&g_mtx) != thrd_success) {
        return 1;
    }
    g_detached_done = 1;
    cnd_signal(&g_cnd);
    mtx_unlock(&g_mtx);

    return 0;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);

    thrd_t main_tid = thrd_current();
    REQUIRE(thrd_equal(main_tid, main_tid) != 0);

    thrd_t th1;
    REQUIRE(thrd_create(&th1, joinable_worker, NULL) == thrd_success);
    int join_rc = 0;
    REQUIRE(thrd_join(th1, &join_rc) == thrd_success);
    REQUIRE(join_rc == 68);
    REQUIRE(thrd_equal(main_tid, g_worker_tid) == 0);

    thrd_t th2;
    REQUIRE(thrd_create(&th2, detached_worker, NULL) == thrd_success);
    REQUIRE(thrd_detach(th2) == thrd_success);

    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    struct timespec deadline;
    REQUIRE(get_utc(&deadline));
    add_msec(&deadline, 300);
    while (!g_detached_done) {
        int rc = cnd_timedwait(&g_cnd, &g_mtx, &deadline);
        if (rc == thrd_timedout) {
            break;
        }
        REQUIRE(rc == thrd_success);
    }
    REQUIRE(g_detached_done == 1);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
