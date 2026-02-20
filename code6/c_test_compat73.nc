// C11 <threads.h> TSS destructor behavior
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

static tss_t g_tss;
static int g_marker = 73;
static atomic_int g_dtor_calls = 0;
static atomic_int g_dtor_seen_marker = 0;

static void tss_dtor(void* value)
{
    atomic_fetch_add(&g_dtor_calls, 1);
    if (value == &g_marker) {
        atomic_store(&g_dtor_seen_marker, 1);
    }
}

static int worker_set_marker(void* arg)
{
    (void)arg;
    if (tss_set(g_tss, &g_marker) != thrd_success) {
        return 10;
    }
    if (tss_get(g_tss) != &g_marker) {
        return 11;
    }
    return 731;
}

static int worker_set_null(void* arg)
{
    (void)arg;
    if (tss_set(g_tss, NULL) != thrd_success) {
        return 20;
    }
    if (tss_get(g_tss) != NULL) {
        return 21;
    }
    return 732;
}

int main(void)
{
    REQUIRE(tss_create(&g_tss, tss_dtor) == thrd_success);

    atomic_store(&g_dtor_calls, 0);
    atomic_store(&g_dtor_seen_marker, 0);

    thrd_t th1;
    REQUIRE(thrd_create(&th1, worker_set_marker, NULL) == thrd_success);
    int rc1 = 0;
    REQUIRE(thrd_join(th1, &rc1) == thrd_success);
    REQUIRE(rc1 == 731);
    REQUIRE(atomic_load(&g_dtor_calls) == 1);
    REQUIRE(atomic_load(&g_dtor_seen_marker) == 1);

    thrd_t th2;
    REQUIRE(thrd_create(&th2, worker_set_null, NULL) == thrd_success);
    int rc2 = 0;
    REQUIRE(thrd_join(th2, &rc2) == thrd_success);
    REQUIRE(rc2 == 732);
    REQUIRE(atomic_load(&g_dtor_calls) == 1);

    tss_delete(g_tss);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
