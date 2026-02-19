// C11 <threads.h>: no-waiter signal/broadcast and past-deadline timedwait
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    mtx_t mtx;
    cnd_t cnd;

    REQUIRE(mtx_init(&mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&cnd) == thrd_success);

    // signaling without waiters should still be a success path
    REQUIRE(cnd_signal(&cnd) == thrd_success);
    REQUIRE(cnd_broadcast(&cnd) == thrd_success);

    REQUIRE(mtx_lock(&mtx) == thrd_success);
    struct timespec past = { 0 };
    REQUIRE(timespec_get(&past, TIME_UTC) == TIME_UTC);
    past.tv_nsec -= 1;
    if (past.tv_nsec < 0) {
        past.tv_nsec += 1000000000L;
        past.tv_sec -= 1;
    }
    REQUIRE(cnd_timedwait(&cnd, &mtx, &past) == thrd_timedout);
    REQUIRE(mtx_unlock(&mtx) == thrd_success);

    cnd_destroy(&cnd);
    mtx_destroy(&mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
