// C11 <threads.h> compatibility: thrd/mtx/cnd/call_once/tss
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <threads.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static once_flag g_once = ONCE_FLAG_INIT;
static int g_once_count = 0;

static mtx_t g_mtx;
static cnd_t g_cnd;
static tss_t g_tss;

static int g_ready = 0;
static int g_value = 0;

static void init_once(void)
{
    g_once_count++;
}

static int worker_main(void* arg)
{
    int add = *(int*)arg;

    call_once(&g_once, init_once);

    if (tss_set(g_tss, (void*)(intptr_t)add) != thrd_success) {
        return 10;
    }
    if ((int)(intptr_t)tss_get(g_tss) != add) {
        return 11;
    }

    if (mtx_lock(&g_mtx) != thrd_success) {
        return 12;
    }
    while (!g_ready) {
        if (cnd_wait(&g_cnd, &g_mtx) != thrd_success) {
            mtx_unlock(&g_mtx);
            return 13;
        }
    }
    g_value += add;
    mtx_unlock(&g_mtx);

    return 77;
}

int main(void)
{
    REQUIRE(mtx_init(&g_mtx, mtx_plain) == thrd_success);
    REQUIRE(cnd_init(&g_cnd) == thrd_success);
    REQUIRE(tss_create(&g_tss, NULL) == thrd_success);

    call_once(&g_once, init_once);
    call_once(&g_once, init_once);
    REQUIRE(g_once_count == 1);

    int add = 7;
    thrd_t th;
    REQUIRE(thrd_create(&th, worker_main, &add) == thrd_success);

    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    g_value = 5;
    g_ready = 1;
    REQUIRE(cnd_signal(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    int rc = 0;
    REQUIRE(thrd_join(th, &rc) == thrd_success);
    REQUIRE(rc == 77);
    REQUIRE(g_value == 12);

    REQUIRE(mtx_lock(&g_mtx) == thrd_success);
    REQUIRE(cnd_broadcast(&g_cnd) == thrd_success);
    REQUIRE(mtx_unlock(&g_mtx) == thrd_success);

    tss_delete(g_tss);
    cnd_destroy(&g_cnd);
    mtx_destroy(&g_mtx);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
