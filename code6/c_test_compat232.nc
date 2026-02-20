// C11 <threads.h>: join result integrity and post-join handle behavior
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <limits.h>
#include <stdint.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

typedef struct {
    int value;
} TaskArg;

static int ret_worker(void* arg)
{
    TaskArg* a = (TaskArg*)arg;
    return a->value;
}

int main(void)
{
    TaskArg args[3] = {
        { .value = INT_MAX },
        { .value = INT_MIN + 1 },
        { .value = -232 }
    };
    thrd_t th[3];

    for (int i = 0; i < 3; ++i) {
        REQUIRE(thrd_create(&th[i], ret_worker, &args[i]) == thrd_success);
    }

    // Join in shuffled order and verify exact result propagation.
    int rc = 0;
    REQUIRE(thrd_join(th[2], &rc) == thrd_success);
    REQUIRE(rc == -232);
    REQUIRE(thrd_join(th[0], &rc) == thrd_success);
    REQUIRE(rc == INT_MAX);
    REQUIRE(thrd_join(th[1], &rc) == thrd_success);
    REQUIRE(rc == INT_MIN + 1);

    // After successful join, both join/detach should fail.
    REQUIRE(thrd_join(th[0], &rc) != thrd_success);
    REQUIRE(thrd_detach(th[0]) != thrd_success);
    REQUIRE(thrd_join(th[1], &rc) != thrd_success);
    REQUIRE(thrd_detach(th[1]) != thrd_success);
    REQUIRE(thrd_join(th[2], &rc) != thrd_success);
    REQUIRE(thrd_detach(th[2]) != thrd_success);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
