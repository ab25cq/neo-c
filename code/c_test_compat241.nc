// C11 <threads.h>: deleting one TSS key must not affect other keys' destructor behavior
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

static tss_t g_key_a;
static tss_t g_key_b;
static atomic_int g_dtor_a = 0;
static atomic_int g_dtor_b = 0;
static int g_marker_a = 2411;
static int g_marker_b = 2412;

static mtx_t g_mtx;
static cnd_t g_cnd;
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

static void dtor_a(void* value)
{
    if (value != NULL) {
        atomic_fetch_add(&g_dtor_a, 1);
    }
}

static void dtor_b(void* value)
{
    if (value != NULL) {
        atomic_fetch_add(&g_dtor_b, 1);
    }
}

static int worker_two_keys_wait(void* arg)
{
    (void)arg;
    if (tss_set(g_key_a, &g_marker_a) != thrd_success) {
        return -10;
    }
    if (tss_set(g_key_b, &g_marker_b) != thrd_success) {
        return -11;
    }
    if (tss_get(g_key_a) != &g_marker_a) {
        return -12;
    }
    if (tss_get(g_key_b) != &g_marker_b) {
        return -13;
    }

    if (mtx_lock(&g_mtx) != thrd_success) {
        return -14;
    }
    g_ready = 1;
    (void)cnd_signal(&g_cnd);
    while (!g_go) {
        int rc = cnd_wait(&g_cnd, &g_mtx);
        if (rc != thrd_success) {
            (void)mtx_unlock(&g_mtx);
            return -15;
        }
    }
    if (mtx_unlock(&g_mtx) != thrd_success) {
        return -16;
    }
    return 241;
}

static int worker_key_a_only(void* arg)
{
    (void)arg;
    if (tss_set(g_key_a, &g_marker_a) != thrd_success) {
        return -20;
    }
    if (tss_get(g_key_a) != &g_marker_a) {
        return -21;
    }
    return 2411;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);
    REQUIRE(tss_create(&g_key_a, dtor_a) == thrd_success);
    REQUIRE(tss_create(&g_key_b, dtor_b) == thrd_success);

    atomic_store(&g_dtor_a, 0);
    atomic_store(&g_dtor_b, 0);
    g_ready = 0;
    g_go = 0;

    thrd_t t1;
    REQUIRE(thrd_create(&t1, worker_two_keys_wait, NULL) == thrd_success);

    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    struct timespec deadline;
    REQUIRE(get_utc(&deadline));
    add_msec(&deadline, 1200);
    while (!g_ready) {
        int rc = cnd_timedwait(&g_cnd, &g_mtx, &deadline);
        if (rc == thrd_timedout) {
            break;
        }
        REQUIRE(rc == thrd_success);
    }
    REQUIRE(g_ready == 1);

    // Delete only key A while worker still has values in both keys.
    tss_delete(g_key_a);
    g_go = 1;
    REQUIRE(cnd_signal(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    int rc = thrd_error;
    REQUIRE(thrd_join(t1, &rc) == thrd_success);
    REQUIRE(rc == 241);
    REQUIRE(atomic_load(&g_dtor_a) == 0);
    REQUIRE(atomic_load(&g_dtor_b) == 1);

    // Re-create key A and verify its destructor still works independently.
    REQUIRE(tss_create(&g_key_a, dtor_a) == thrd_success);
    thrd_t t2;
    REQUIRE(thrd_create(&t2, worker_key_a_only, NULL) == thrd_success);
    REQUIRE(thrd_join(t2, &rc) == thrd_success);
    REQUIRE(rc == 2411);
    REQUIRE(atomic_load(&g_dtor_a) == 1);
    REQUIRE(atomic_load(&g_dtor_b) == 1);

    tss_delete(g_key_a);
    tss_delete(g_key_b);
    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
