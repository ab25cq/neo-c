// C 標準ライブラリ機能テスト (9):
// - locale: setlocale/localeconv/strtod によるロケール依存動作
// - signal: SIGUSR1 (なければ SIGINT) ハンドラと raise

#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static void test_locale(void) {
    const char *orig = setlocale(LC_ALL, NULL);
    char saved[128];
    if (orig) {
        strncpy(saved, orig, sizeof(saved)-1);
        saved[sizeof(saved)-1] = '\0';
    } else {
        saved[0] = '\0';
    }

    REQUIRE(setlocale(LC_ALL, "C") != NULL);
    struct lconv *lc = localeconv();
    REQUIRE(lc != NULL);
    REQUIRE(strcmp(lc->decimal_point, ".") == 0);

    const char *num = "1234.5";
    char *end;
    double v = strtod(num, &end);
    REQUIRE(end == num + strlen(num));
    REQUIRE(v == 1234.5);

    if (saved[0] != '\0') {
        setlocale(LC_ALL, saved);
    }
}

static volatile sig_atomic_t g_signal_value = 0;

static void sig_handler(int signo) {
    g_signal_value = signo;
}

static void test_signal(void) {
#ifdef SIGUSR1
    const int sig = SIGUSR1;
#else
    const int sig = SIGINT;
#endif
    g_signal_value = 0;
    REQUIRE(signal(sig, sig_handler) != SIG_ERR);
    REQUIRE(raise(sig) == 0);
    REQUIRE(g_signal_value == sig);
    REQUIRE(signal(sig, SIG_DFL) != SIG_ERR);
}

int main(void) {
    test_locale();
    test_signal();
    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
