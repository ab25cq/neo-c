// C11 <threads.h>: cnd_signal single-token wake and broadcast-release behavior
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

enum { NTHREADS = 5 };

static mtx_t g_mtx;
static cnd_t g_cnd;
static int g_waiting = 0;
static int g_tokens = 0;
static int g_awakened = 0;

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

static int waiter_worker(void* arg)
{
    (void)arg;
    if (mtx_lock(&g_mtx) != thrd_success) {
        return -10;
    }

    g_waiting++;
    (void)cnd_broadcast(&g_cnd);

    while (g_tokens == 0) {
        int rc = cnd_wait(&g_cnd, &g_mtx);
        if (rc != thrd_success) {
            (void)mtx_unlock(&g_mtx);
            return -11;
        }
    }

    g_tokens--;
    g_awakened++;

    if (mtx_unlock(&g_mtx) != thrd_success) {
        return -12;
    }
    return 235;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);

    thrd_t th[NTHREADS];
    for (int i = 0; i < NTHREADS; ++i) {
        REQUIRE(thrd_create(&th[i], waiter_worker, NULL) == thrd_success);
    }

    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    struct timespec deadline;
    REQUIRE(get_utc(&deadline));
    add_msec(&deadline, 1000);
    while (g_waiting < NTHREADS) {
        int rc = cnd_timedwait(&g_cnd, &g_mtx, &deadline);
        if (rc == thrd_timedout) {
            break;
        }
        REQUIRE(rc == thrd_success);
    }
    REQUIRE(g_waiting == NTHREADS);

    // one token + one signal => exactly one waiter can pass
    g_tokens = 1;
    REQUIRE(cnd_signal(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    for (int i = 0; i < 500; ++i) {
        if (g_awakened >= 1) {
            break;
        }
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 2 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }
    REQUIRE(g_awakened == 1);

    // release all remaining waiters with broadcast + remaining tokens
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    REQUIRE(g_tokens == 0);
    g_tokens = NTHREADS - 1;
    REQUIRE(cnd_broadcast(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    for (int i = 0; i < NTHREADS; ++i) {
        int rc = 0;
        REQUIRE(thrd_join(th[i], &rc) == thrd_success);
        REQUIRE(rc == 235);
    }
    REQUIRE(g_awakened == NTHREADS);

    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
