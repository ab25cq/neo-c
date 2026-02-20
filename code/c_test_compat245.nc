// C11 <threads.h>: self-detach path (thrd_detach(thrd_current()))
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

static atomic_int g_self_detached = 0;
static atomic_int g_exited = 0;

static int self_detach_worker(void* arg)
{
    (void)arg;

    thrd_t self = thrd_current();
    if (thrd_detach(self) != thrd_success) {
        return -10;
    }
    atomic_store(&g_self_detached, 1);

    struct timespec tiny = { .tv_sec = 0, .tv_nsec = 10 * 1000 * 1000L };
    struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
    (void)thrd_sleep(&tiny, &rem);

    atomic_store(&g_exited, 1);
    return 245;
}

int main(void)
{
    atomic_store(&g_self_detached, 0);
    atomic_store(&g_exited, 0);

    thrd_t th;
    REQUIRE(thrd_create(&th, self_detach_worker, NULL) == thrd_success);

    for (int i = 0; i < 600; ++i) {
        if (atomic_load(&g_self_detached) != 0) {
            break;
        }
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 2 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }
    REQUIRE(atomic_load(&g_self_detached) == 1);

    int rc = 0;
    REQUIRE(thrd_join(th, &rc) != thrd_success);

    for (int i = 0; i < 600; ++i) {
        if (atomic_load(&g_exited) != 0) {
            break;
        }
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 2 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }
    REQUIRE(atomic_load(&g_exited) == 1);

    REQUIRE(thrd_join(th, &rc) != thrd_success);
    REQUIRE(thrd_detach(th) != thrd_success);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
