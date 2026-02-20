// C11 <threads.h>: macro-constant contracts and mutex-kind combinations
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

_Static_assert(thrd_success == 0, "thrd_success must be zero");
_Static_assert(thrd_busy != thrd_success, "thrd_busy distinct");
_Static_assert(thrd_error != thrd_success, "thrd_error distinct");
_Static_assert(thrd_nomem != thrd_success, "thrd_nomem distinct");
_Static_assert(thrd_timedout != thrd_success, "thrd_timedout distinct");

_Static_assert(mtx_plain == 0, "mtx_plain must be zero");
_Static_assert(mtx_recursive != 0, "mtx_recursive must be non-zero");
_Static_assert(mtx_timed != 0, "mtx_timed must be non-zero");
_Static_assert((mtx_recursive & mtx_timed) == 0, "mtx flags should be combinable");

#if defined(TSS_DTOR_ITERATIONS)
_Static_assert(TSS_DTOR_ITERATIONS >= 1, "TSS_DTOR_ITERATIONS must be >= 1");
#endif

static once_flag g_once = ONCE_FLAG_INIT;
static int g_once_counter = 0;

static void once_func(void)
{
    g_once_counter++;
}

int main(void)
{
    mtx_t m1, m2, m3, m4;
    REQUIRE(mtx_init(&m1, mtx_plain) == thrd_success);
    REQUIRE(mtx_init(&m2, mtx_recursive) == thrd_success);
    REQUIRE(mtx_init(&m3, mtx_timed) == thrd_success);
    REQUIRE(mtx_init(&m4, mtx_recursive | mtx_timed) == thrd_success);
    mtx_destroy(&m4);
    mtx_destroy(&m3);
    mtx_destroy(&m2);
    mtx_destroy(&m1);

    call_once(&g_once, once_func);
    call_once(&g_once, once_func);
    REQUIRE(g_once_counter == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
