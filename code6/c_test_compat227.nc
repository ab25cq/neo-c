// C11 <threads.h>: join/detach edge semantics
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

static int simple_worker(void* arg)
{
    (void)arg;
    return 227;
}

static int self_join_worker(void* arg)
{
    (void)arg;
    thrd_t self = thrd_current();
    int rc = 0;
    int j = thrd_join(self, &rc);
    return (j == thrd_success) ? -1 : 2270;
}

int main(void)
{
    // join once succeeds, second join should fail.
    thrd_t t1;
    REQUIRE(thrd_create(&t1, simple_worker, NULL) == thrd_success);
    int rc1 = 0;
    REQUIRE(thrd_join(t1, &rc1) == thrd_success);
    REQUIRE(rc1 == 227);
    REQUIRE(thrd_join(t1, &rc1) != thrd_success);

    // detach twice should not both succeed.
    thrd_t t2;
    REQUIRE(thrd_create(&t2, simple_worker, NULL) == thrd_success);
    REQUIRE(thrd_detach(t2) == thrd_success);
    REQUIRE(thrd_detach(t2) != thrd_success);

    // joining detached thread should fail.
    int rc2 = 0;
    REQUIRE(thrd_join(t2, &rc2) != thrd_success);

    // self join should fail (must not succeed).
    thrd_t t3;
    REQUIRE(thrd_create(&t3, self_join_worker, NULL) == thrd_success);
    int rc3 = 0;
    REQUIRE(thrd_join(t3, &rc3) == thrd_success);
    REQUIRE(rc3 == 2270);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
