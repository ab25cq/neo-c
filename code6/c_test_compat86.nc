// C11 <threads.h>: multiple once_flag contention and independence
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

#define ONCE_THREADS 8

static once_flag g_once_a = ONCE_FLAG_INIT;
static once_flag g_once_b = ONCE_FLAG_INIT;
static atomic_int g_once_count_a = 0;
static atomic_int g_once_count_b = 0;

static void init_once_a(void)
{
    atomic_fetch_add(&g_once_count_a, 1);
}

static void init_once_b(void)
{
    atomic_fetch_add(&g_once_count_b, 1);
}

static int once_worker(void* arg)
{
    (void)arg;
    call_once(&g_once_a, init_once_a);
    thrd_yield();
    call_once(&g_once_b, init_once_b);
    return 86;
}

int main(void)
{
    thrd_t th[ONCE_THREADS];
    for (int i = 0; i < ONCE_THREADS; i++) {
        REQUIRE(thrd_create(&th[i], once_worker, NULL) == thrd_success);
    }
    for (int i = 0; i < ONCE_THREADS; i++) {
        int rc = 0;
        REQUIRE(thrd_join(th[i], &rc) == thrd_success);
        REQUIRE(rc == 86);
    }

    REQUIRE(atomic_load(&g_once_count_a) == 1);
    REQUIRE(atomic_load(&g_once_count_b) == 1);

    // Re-calling from main thread must keep counts unchanged.
    call_once(&g_once_a, init_once_a);
    call_once(&g_once_b, init_once_b);
    REQUIRE(atomic_load(&g_once_count_a) == 1);
    REQUIRE(atomic_load(&g_once_count_b) == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
