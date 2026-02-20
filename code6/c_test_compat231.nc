// C11 <threads.h>: call_once under mixed-function contention
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdatomic.h>
#include <stdint.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

enum { NTHREADS = 16 };

static once_flag g_once = ONCE_FLAG_INIT;
static atomic_int g_init_a = 0;
static atomic_int g_init_b = 0;

static void init_a(void)
{
    atomic_fetch_add(&g_init_a, 1);
}

static void init_b(void)
{
    atomic_fetch_add(&g_init_b, 1);
}

static int worker_once_a(void* arg)
{
    (void)arg;
    call_once(&g_once, init_a);
    return 231;
}

static int worker_once_b(void* arg)
{
    (void)arg;
    call_once(&g_once, init_b);
    return 231;
}

int main(void)
{
    thrd_t th[NTHREADS];
    for (int i = 0; i < NTHREADS; ++i) {
        int rc = (i % 2 == 0)
            ? thrd_create(&th[i], worker_once_a, NULL)
            : thrd_create(&th[i], worker_once_b, NULL);
        REQUIRE(rc == thrd_success);
    }

    for (int i = 0; i < NTHREADS; ++i) {
        int rc = 0;
        REQUIRE(thrd_join(th[i], &rc) == thrd_success);
        REQUIRE(rc == 231);
    }

    int a = atomic_load(&g_init_a);
    int b = atomic_load(&g_init_b);
    REQUIRE(a + b == 1);
    REQUIRE((a == 1 && b == 0) || (a == 0 && b == 1));

    // further calls must keep state unchanged
    call_once(&g_once, init_a);
    call_once(&g_once, init_b);
    REQUIRE(atomic_load(&g_init_a) == a);
    REQUIRE(atomic_load(&g_init_b) == b);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
