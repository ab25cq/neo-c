// C11 <signal.h>: signal handler registration and raise()
#include <signal.h>
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;
static volatile sig_atomic_t g_hit = 0;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static void on_signal(int signo)
{
    (void)signo;
    g_hit = 1;
}

int main(void)
{
    REQUIRE(signal(SIGUSR1, on_signal) != SIG_ERR);
    REQUIRE(raise(SIGUSR1) == 0);
    REQUIRE(g_hit == 1);

    // restore default disposition
    REQUIRE(signal(SIGUSR1, SIG_DFL) != SIG_ERR);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
