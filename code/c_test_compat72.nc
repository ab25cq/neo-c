// C11 <threads.h> recursive mutex behavior
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

static mtx_t g_rmtx;

static int trylock_worker(void* arg)
{
    (void)arg;
    int rc = mtx_trylock(&g_rmtx);
    if (rc == thrd_success) {
        mtx_unlock(&g_rmtx);
    }
    return rc;
}

int main(void)
{
    REQUIRE(mtx_init(&g_rmtx, mtx_recursive) == thrd_success);

    // Recursive lock from the same thread.
    REQUIRE(mtx_lock(&g_rmtx) == thrd_success);
    REQUIRE(mtx_lock(&g_rmtx) == thrd_success);
    REQUIRE(mtx_unlock(&g_rmtx) == thrd_success);
    REQUIRE(mtx_unlock(&g_rmtx) == thrd_success);

    // Another thread should see busy while main thread owns the mutex.
    REQUIRE(mtx_lock(&g_rmtx) == thrd_success);
    thrd_t th1;
    REQUIRE(thrd_create(&th1, trylock_worker, NULL) == thrd_success);
    int rc1 = thrd_error;
    REQUIRE(thrd_join(th1, &rc1) == thrd_success);
    REQUIRE(rc1 == thrd_busy);
    REQUIRE(mtx_unlock(&g_rmtx) == thrd_success);

    // After unlock, another thread should acquire the mutex.
    thrd_t th2;
    REQUIRE(thrd_create(&th2, trylock_worker, NULL) == thrd_success);
    int rc2 = thrd_error;
    REQUIRE(thrd_join(th2, &rc2) == thrd_success);
    REQUIRE(rc2 == thrd_success);

    mtx_destroy(&g_rmtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
