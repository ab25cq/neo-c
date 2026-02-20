// C11 <threads.h>: TSS destructor must ignore NULL values
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

static tss_t g_key1;
static tss_t g_key2;
static atomic_int g_dtor1 = 0;
static atomic_int g_dtor2 = 0;
static int g_marker1 = 2361;
static int g_marker2 = 2362;

static void dtor1(void* value)
{
    if (value != NULL) {
        atomic_fetch_add(&g_dtor1, 1);
    }
}

static void dtor2(void* value)
{
    if (value != NULL) {
        atomic_fetch_add(&g_dtor2, 1);
    }
}

static int worker_one_nonnull(void* arg)
{
    (void)arg;
    if (tss_set(g_key1, &g_marker1) != thrd_success) {
        return -10;
    }
    if (tss_set(g_key2, NULL) != thrd_success) {
        return -11;
    }
    if (tss_get(g_key1) != &g_marker1) {
        return -12;
    }
    if (tss_get(g_key2) != NULL) {
        return -13;
    }
    return 2361;
}

static int worker_two_nonnull(void* arg)
{
    (void)arg;
    if (tss_set(g_key1, &g_marker1) != thrd_success) {
        return -20;
    }
    if (tss_set(g_key2, &g_marker2) != thrd_success) {
        return -21;
    }
    if (tss_get(g_key1) != &g_marker1) {
        return -22;
    }
    if (tss_get(g_key2) != &g_marker2) {
        return -23;
    }
    return 2362;
}

int main(void)
{
    REQUIRE(tss_create(&g_key1, dtor1) == thrd_success);
    REQUIRE(tss_create(&g_key2, dtor2) == thrd_success);

    atomic_store(&g_dtor1, 0);
    atomic_store(&g_dtor2, 0);

    thrd_t t1;
    REQUIRE(thrd_create(&t1, worker_one_nonnull, NULL) == thrd_success);
    int rc = 0;
    REQUIRE(thrd_join(t1, &rc) == thrd_success);
    REQUIRE(rc == 2361);
    REQUIRE(atomic_load(&g_dtor1) == 1);
    REQUIRE(atomic_load(&g_dtor2) == 0);

    thrd_t t2;
    REQUIRE(thrd_create(&t2, worker_two_nonnull, NULL) == thrd_success);
    REQUIRE(thrd_join(t2, &rc) == thrd_success);
    REQUIRE(rc == 2362);
    REQUIRE(atomic_load(&g_dtor1) == 2);
    REQUIRE(atomic_load(&g_dtor2) == 1);

    // Main-thread TLS remains independent and defaults to NULL.
    REQUIRE(tss_get(g_key1) == NULL);
    REQUIRE(tss_get(g_key2) == NULL);
    REQUIRE(tss_set(g_key1, &g_marker1) == thrd_success);
    REQUIRE(tss_set(g_key2, &g_marker2) == thrd_success);
    REQUIRE(tss_get(g_key1) == &g_marker1);
    REQUIRE(tss_get(g_key2) == &g_marker2);
    REQUIRE(tss_set(g_key1, NULL) == thrd_success);
    REQUIRE(tss_set(g_key2, NULL) == thrd_success);

    tss_delete(g_key2);
    tss_delete(g_key1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
