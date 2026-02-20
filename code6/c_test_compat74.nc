// C11 <threads.h> diagnostic return-code observation (nomem/error)
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <stdint.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

enum {
    MAX_THREADS = 96
};

static mtx_t g_gate_mtx;
static cnd_t g_gate_cnd;
static int g_gate_open = 0;

static int parked_worker(void* arg)
{
    int id = (int)(intptr_t)arg;

    if (mtx_lock(&g_gate_mtx) != thrd_success) {
        return -100;
    }
    while (!g_gate_open) {
        if (cnd_wait(&g_gate_cnd, &g_gate_mtx) != thrd_success) {
            mtx_unlock(&g_gate_mtx);
            return -101;
        }
    }
    if (mtx_unlock(&g_gate_mtx) != thrd_success) {
        return -102;
    }

    return id;
}

int main(void)
{
    REQUIRE(mtx_init(&g_gate_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_gate_cnd) == thrd_success);

    thrd_t th[MAX_THREADS];
    int created = 0;
    int create_fail_rc = thrd_success;

    for (int i = 0; i < MAX_THREADS; i++) {
        int rc = thrd_create(&th[i], parked_worker, (void*)(intptr_t)i);
        if (rc == thrd_success) {
            created++;
            continue;
        }
        create_fail_rc = rc;
        break;
    }

    // If creation fails under resource pressure, C11 allows error/nomem.
    if (create_fail_rc != thrd_success) {
        REQUIRE(create_fail_rc == thrd_nomem || create_fail_rc == thrd_error);
    }

    REQUIRE(mtx_lock(&g_gate_mtx) == thrd_success);
    g_gate_open = 1;
    REQUIRE(cnd_broadcast(&g_gate_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_gate_mtx) == thrd_success);

    for (int i = 0; i < created; i++) {
        int rc = -9999;
        REQUIRE(thrd_join(th[i], &rc) == thrd_success);
        REQUIRE(rc == i);
    }

    // In generous environments creation may not fail; this is still valid.
    REQUIRE(created >= 1);

    cnd_destroy(&g_gate_cnd);
    mtx_destroy(&g_gate_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
