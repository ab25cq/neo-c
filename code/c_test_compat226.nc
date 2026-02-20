// C11 <threads.h>: thrd_join(NULL), detach-after-termination, identity sanity
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdatomic.h>
#include <stdint.h>
#include <time.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static atomic_int g_done = 0;
static thrd_t g_worker_tid;

static int join_null_worker(void* arg)
{
    (void)arg;
    return 226;
}

static int detach_late_worker(void* arg)
{
    (void)arg;
    g_worker_tid = thrd_current();
    atomic_store(&g_done, 1);
    return 2260;
}

int main(void)
{
    thrd_t main_tid = thrd_current();
    REQUIRE(thrd_equal(main_tid, main_tid) != 0);

    // thrd_join with NULL result pointer should be accepted.
    thrd_t t1;
    REQUIRE(thrd_create(&t1, join_null_worker, NULL) == thrd_success);
    REQUIRE(thrd_join(t1, NULL) == thrd_success);

    // Detach a thread that already terminated but has not been joined yet.
    atomic_store(&g_done, 0);
    thrd_t t2;
    REQUIRE(thrd_create(&t2, detach_late_worker, NULL) == thrd_success);

    for (int i = 0; i < 300; ++i) {
        if (atomic_load(&g_done) != 0) break;
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 2 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }
    REQUIRE(atomic_load(&g_done) == 1);
    REQUIRE(thrd_equal(main_tid, g_worker_tid) == 0);

    REQUIRE(thrd_detach(t2) == thrd_success);

    int detached_join_rc = 0;
    REQUIRE(thrd_join(t2, &detached_join_rc) != thrd_success);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
