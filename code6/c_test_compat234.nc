// C11 <threads.h>: call_once synchronization visibility for side effects
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdatomic.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

enum { NTHREADS = 20 };

static once_flag g_once = ONCE_FLAG_INIT;
static atomic_int g_init_calls = 0;
static int g_payload = 0;

static void init_payload(void)
{
    g_payload = 123456;
    atomic_fetch_add(&g_init_calls, 1);
}

static int worker(void* arg)
{
    (void)arg;
    call_once(&g_once, init_payload);
    return (g_payload == 123456) ? 234 : -234;
}

int main(void)
{
    thrd_t th[NTHREADS];
    for (int i = 0; i < NTHREADS; ++i) {
        REQUIRE(thrd_create(&th[i], worker, NULL) == thrd_success);
    }

    for (int i = 0; i < NTHREADS; ++i) {
        int rc = 0;
        REQUIRE(thrd_join(th[i], &rc) == thrd_success);
        REQUIRE(rc == 234);
    }

    REQUIRE(atomic_load(&g_init_calls) == 1);
    REQUIRE(g_payload == 123456);

    call_once(&g_once, init_payload);
    REQUIRE(atomic_load(&g_init_calls) == 1);
    REQUIRE(g_payload == 123456);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
