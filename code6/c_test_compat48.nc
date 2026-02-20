// ISO C core language: _Thread_local, _Alignof, _Noreturn declarations
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

_Thread_local static int g_tls_counter = 0;

static int tls_next(void)
{
    g_tls_counter++;
    return g_tls_counter;
}

_Noreturn static void never_return(void)
{
    for (;;) { }
}

int main(void)
{
    REQUIRE(tls_next() == 1);
    REQUIRE(tls_next() == 2);

    REQUIRE(_Alignof(max_align_t) >= _Alignof(long double));
    REQUIRE(_Alignof(int) <= _Alignof(max_align_t));

    if (0) {
        never_return();
    }

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
