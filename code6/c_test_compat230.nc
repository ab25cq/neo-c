// C11 <threads.h>: concurrent thread identity distinctness via thrd_equal
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <time.h>
#include <stdint.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

enum { NTHREADS = 3 };

static mtx_t g_mtx;
static cnd_t g_cnd;
static thrd_t g_tid[NTHREADS];
static int g_ready = 0;
static int g_go = 0;

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

static int id_worker(void* arg)
{
    int idx = (int)(intptr_t)arg;
    if (mtx_lock(&g_mtx) != thrd_success) {
        return -10;
    }
    g_tid[idx] = thrd_current();
    g_ready++;
    (void)cnd_broadcast(&g_cnd);
    while (!g_go) {
        int rc = cnd_wait(&g_cnd, &g_mtx);
        if (rc != thrd_success) {
            (void)mtx_unlock(&g_mtx);
            return -11;
        }
    }
    if (mtx_unlock(&g_mtx) != thrd_success) {
        return -12;
    }
    return 230 + idx;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);

    thrd_t th[NTHREADS];
    for (int i = 0; i < NTHREADS; ++i) {
        REQUIRE(thrd_create(&th[i], id_worker, (void*)(intptr_t)i) == thrd_success);
    }

    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    struct timespec deadline;
    REQUIRE(get_utc(&deadline));
    add_msec(&deadline, 1000);
    while (g_ready < NTHREADS) {
        int rc = cnd_timedwait(&g_cnd, &g_mtx, &deadline);
        if (rc == thrd_timedout) {
            break;
        }
        REQUIRE(rc == thrd_success);
    }
    REQUIRE(g_ready == NTHREADS);

    for (int i = 0; i < NTHREADS; ++i) {
        REQUIRE(thrd_equal(g_tid[i], g_tid[i]) != 0);
    }
    for (int i = 0; i < NTHREADS; ++i) {
        for (int j = i + 1; j < NTHREADS; ++j) {
            REQUIRE(thrd_equal(g_tid[i], g_tid[j]) == 0);
        }
    }

    g_go = 1;
    REQUIRE(cnd_broadcast(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    for (int i = 0; i < NTHREADS; ++i) {
        int rc = 0;
        REQUIRE(thrd_join(th[i], &rc) == thrd_success);
        REQUIRE(rc == 230 + i);
    }

    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
