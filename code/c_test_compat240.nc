// C11 <threads.h>: thrd_sleep accepts rem==NULL on zero and short intervals
#include <stdio.h>
#include <stdbool.h>
#include <threads.h>
#include <time.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static bool get_utc(struct timespec* out)
{
    return timespec_get(out, TIME_UTC) == TIME_UTC;
}

static long long elapsed_msec(struct timespec begin, struct timespec end)
{
    long long sec = (long long)(end.tv_sec - begin.tv_sec);
    long long nsec = (long long)(end.tv_nsec - begin.tv_nsec);
    return sec * 1000LL + nsec / 1000000LL;
}

int main(void)
{
    struct timespec zero = { .tv_sec = 0, .tv_nsec = 0 };

    // Zero sleep with rem==NULL should be a valid fast path.
    for (int i = 0; i < 8; ++i) {
        struct timespec t0;
        struct timespec t1;
        REQUIRE(get_utc(&t0));
        int rc = thrd_sleep(&zero, NULL);
        REQUIRE(get_utc(&t1));
        REQUIRE(rc == 0 || rc == -1);
        REQUIRE(elapsed_msec(t0, t1) < 200);
    }

    // Short sleep with rem==NULL should also be accepted.
    struct timespec req = { .tv_sec = 0, .tv_nsec = 5 * 1000 * 1000L };
    struct timespec s0;
    struct timespec s1;
    REQUIRE(get_utc(&s0));
    int rc = thrd_sleep(&req, NULL);
    REQUIRE(get_utc(&s1));
    REQUIRE(rc == 0 || rc == -1);
    REQUIRE(elapsed_msec(s0, s1) < 1500);

    // Existing rem!=NULL path remains valid.
    struct timespec rem = { .tv_sec = 0, .tv_nsec = 0 };
    rc = thrd_sleep(&req, &rem);
    REQUIRE(rc == 0 || rc == -1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
