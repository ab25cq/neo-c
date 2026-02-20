// C11 <threads.h> interruption + detach/join behavior
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>
#include <stdatomic.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static volatile sig_atomic_t g_alarm_fired = 0;
static atomic_int g_detached_done = 0;

static void on_alarm(int signo)
{
    (void)signo;
    g_alarm_fired = 1;
}

static int detached_worker(void* arg)
{
    (void)arg;
    struct timespec req = { .tv_sec = 0, .tv_nsec = 120 * 1000 * 1000L };
    struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
    (void)thrd_sleep(&req, &rem);
    atomic_store(&g_detached_done, 1);
    return 69;
}

int main(void)
{
    // thrd_sleep interruption by signal (POSIX environment check).
    signal(SIGALRM, on_alarm);
    g_alarm_fired = 0;
    alarm(1);
    struct timespec req = { .tv_sec = 2, .tv_nsec = 0 };
    struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
    int sleep_rc = thrd_sleep(&req, &rem);
    alarm(0);

    REQUIRE(g_alarm_fired == 1);
    REQUIRE(sleep_rc == -1);
    REQUIRE(rem.tv_sec >= 0);
    REQUIRE(rem.tv_nsec >= 0 && rem.tv_nsec < 1000000000L);
    REQUIRE(rem.tv_sec < req.tv_sec || (rem.tv_sec == req.tv_sec && rem.tv_nsec < req.tv_nsec));

    // thrd_detach + thrd_join should not succeed.
    atomic_store(&g_detached_done, 0);
    thrd_t th;
    REQUIRE(thrd_create(&th, detached_worker, NULL) == thrd_success);
    REQUIRE(thrd_detach(th) == thrd_success);

    int join_result = 0;
    int join_rc = thrd_join(th, &join_result);
    REQUIRE(join_rc != thrd_success);

    for (int i = 0; i < 30 && atomic_load(&g_detached_done) == 0; i++) {
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 20 * 1000 * 1000L };
        struct timespec tiny_rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &tiny_rem);
    }
    REQUIRE(atomic_load(&g_detached_done) == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
