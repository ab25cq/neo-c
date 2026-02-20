// C11 <threads.h>: thrd_exit result propagation with extreme values
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <limits.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

typedef struct {
    int value;
} ExitArg;

static int exit_worker(void* arg)
{
    ExitArg* a = (ExitArg*)arg;
    thrd_exit(a->value);
    return -1;
}

int main(void)
{
    ExitArg args[4] = {
        { .value = INT_MAX },
        { .value = INT_MIN + 1 },
        { .value = -249 },
        { .value = 0 }
    };
    thrd_t th[4];

    for (int i = 0; i < 4; ++i) {
        REQUIRE(thrd_create(&th[i], exit_worker, &args[i]) == thrd_success);
    }

    int rc = 0;
    REQUIRE(thrd_join(th[3], &rc) == thrd_success);
    REQUIRE(rc == 0);
    REQUIRE(thrd_join(th[1], &rc) == thrd_success);
    REQUIRE(rc == INT_MIN + 1);
    REQUIRE(thrd_join(th[0], &rc) == thrd_success);
    REQUIRE(rc == INT_MAX);
    REQUIRE(thrd_join(th[2], &rc) == thrd_success);
    REQUIRE(rc == -249);

    // Joined handles must not be reusable.
    REQUIRE(thrd_join(th[0], &rc) != thrd_success);
    REQUIRE(thrd_detach(th[0]) != thrd_success);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
