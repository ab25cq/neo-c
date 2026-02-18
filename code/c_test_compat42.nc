#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static jmp_buf g_env;

static int nested_jump(int n)
{
    if(n == 0) {
        longjmp(g_env, 77);
    }
    return n;
}

int main(void)
{
    int rc = setjmp(g_env);

    if(rc == 0) {
        int v = nested_jump(0);
        REQUIRE(v == 0);
    }
    else {
        REQUIRE(rc == 77);
    }

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
