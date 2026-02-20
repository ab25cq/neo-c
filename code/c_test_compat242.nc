// C11 <threads.h>: detached thread still runs TSS destructor on exit
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

static tss_t g_key;
static atomic_int g_dtor_calls = 0;
static atomic_int g_started = 0;
static int g_marker = 242;

static void dtor_count(void* value)
{
    if (value != NULL) {
        atomic_fetch_add(&g_dtor_calls, 1);
    }
}

static int detached_worker(void* arg)
{
    (void)arg;
    atomic_store(&g_started, 1);
    if (tss_set(g_key, &g_marker) != thrd_success) {
        return -10;
    }
    if (tss_get(g_key) != &g_marker) {
        return -11;
    }
    return 242;
}

int main(void)
{
    REQUIRE(tss_create(&g_key, dtor_count) == thrd_success);
    atomic_store(&g_dtor_calls, 0);
    atomic_store(&g_started, 0);

    thrd_t th;
    REQUIRE(thrd_create(&th, detached_worker, NULL) == thrd_success);
    REQUIRE(thrd_detach(th) == thrd_success);

    // Wait for worker start and detached-exit destructor execution.
    for (int i = 0; i < 800; ++i) {
        if (atomic_load(&g_started) != 0 && atomic_load(&g_dtor_calls) >= 1) {
            break;
        }
        struct timespec tiny = { .tv_sec = 0, .tv_nsec = 2 * 1000 * 1000L };
        struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
        (void)thrd_sleep(&tiny, &rem);
    }

    REQUIRE(atomic_load(&g_started) == 1);
    REQUIRE(atomic_load(&g_dtor_calls) == 1);

    // Detached handle should not be joinable.
    int rc = 0;
    REQUIRE(thrd_join(th, &rc) != thrd_success);

    // Main-thread TLS slot remains independent.
    REQUIRE(tss_get(g_key) == NULL);
    REQUIRE(tss_set(g_key, &g_marker) == thrd_success);
    REQUIRE(tss_get(g_key) == &g_marker);
    REQUIRE(tss_set(g_key, NULL) == thrd_success);

    tss_delete(g_key);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
