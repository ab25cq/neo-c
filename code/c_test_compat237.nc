// C11 <threads.h>: cnd_timedwait signal-success path and mutex reacquire
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
static atomic_int g_waiting = 0;
static atomic_int g_awakened = 0;
static atomic_int g_holder_turn = 0;
static atomic_int g_gate = 0;
static int g_tokens = 0;

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

static int trylock_probe(void* arg)
{
    (void)arg;
    int rc = mtx_trylock(&g_mtx);
    if (rc == thrd_success) {
        (void)mtx_unlock(&g_mtx);
    }
    return rc;
}

static bool wait_holder_turn(int turn)
{
    for (int i = 0; i < 600; ++i) {
        if (atomic_load(&g_holder_turn) == turn) {
            return true;
        }
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 2 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }
    return false;
}

static int waiter_worker(void* arg)
{
    (void)arg;
    if (mtx_lock(&g_mtx) != thrd_success) {
        return -10;
    }

    atomic_fetch_add(&g_waiting, 1);
    (void)cnd_broadcast(&g_cnd);

    struct timespec deadline;
    if (!get_utc(&deadline)) {
        (void)mtx_unlock(&g_mtx);
        return -11;
    }
    add_msec(&deadline, 4000);

    while (g_tokens == 0) {
        int rc = cnd_timedwait(&g_cnd, &g_mtx, &deadline);
        if (rc == thrd_timedout) {
            (void)mtx_unlock(&g_mtx);
            return -12;
        }
        if (rc != thrd_success) {
            (void)mtx_unlock(&g_mtx);
            return -13;
        }
    }
    g_tokens--;

    int turn = atomic_fetch_add(&g_awakened, 1) + 1;
    atomic_store(&g_holder_turn, turn);

    // Keep mutex ownership observable until main thread releases this turn.
    while (atomic_load(&g_gate) < turn) {
        thrd_yield();
    }

    if (mtx_unlock(&g_mtx) != thrd_success) {
        return -14;
    }
    return 237 + turn;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);
    atomic_store(&g_waiting, 0);
    atomic_store(&g_awakened, 0);
    atomic_store(&g_holder_turn, 0);
    atomic_store(&g_gate, 0);
    g_tokens = 0;

    thrd_t w1, w2;
    REQUIRE(thrd_create(&w1, waiter_worker, NULL) == thrd_success);
    REQUIRE(thrd_create(&w2, waiter_worker, NULL) == thrd_success);

    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    struct timespec deadline;
    REQUIRE(get_utc(&deadline));
    add_msec(&deadline, 1500);
    while (atomic_load(&g_waiting) < 2) {
        int rc = cnd_timedwait(&g_cnd, &g_mtx, &deadline);
        if (rc == thrd_timedout) {
            break;
        }
        REQUIRE(rc == thrd_success);
    }
    REQUIRE(atomic_load(&g_waiting) == 2);

    // First timedwait success wakeup.
    g_tokens = 1;
    REQUIRE(cnd_signal(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    REQUIRE(wait_holder_turn(1));
    REQUIRE(atomic_load(&g_awakened) == 1);
    thrd_t p1;
    REQUIRE(thrd_create(&p1, trylock_probe, NULL) == thrd_success);
    int p1_rc = thrd_error;
    REQUIRE(thrd_join(p1, &p1_rc) == thrd_success);
    REQUIRE(p1_rc == thrd_busy);
    atomic_store(&g_gate, 1);

    // Second timedwait success wakeup.
    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    g_tokens = 1;
    REQUIRE(cnd_signal(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    REQUIRE(wait_holder_turn(2));
    REQUIRE(atomic_load(&g_awakened) == 2);
    thrd_t p2;
    REQUIRE(thrd_create(&p2, trylock_probe, NULL) == thrd_success);
    int p2_rc = thrd_error;
    REQUIRE(thrd_join(p2, &p2_rc) == thrd_success);
    REQUIRE(p2_rc == thrd_busy);
    atomic_store(&g_gate, 2);

    int w1_rc = thrd_error;
    int w2_rc = thrd_error;
    REQUIRE(thrd_join(w1, &w1_rc) == thrd_success);
    REQUIRE(thrd_join(w2, &w2_rc) == thrd_success);
    REQUIRE((w1_rc == 238 && w2_rc == 239) || (w1_rc == 239 && w2_rc == 238));

    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
