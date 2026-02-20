// C11 preprocessor: inactive-branch skipping of include/error/malformed tokens
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#if 0
#include "compat87_missing_header_should_not_be_loaded.h"
#error "compat87: inactive branch must not trigger this error"
this is not valid C and should be ignored by preprocessing
#elif defined(__STDC__) && (__STDC__ == 1)
#define PP_INACTIVE_SKIP_OK 1
#else
#define PP_INACTIVE_SKIP_OK 0
#endif

int main(void)
{
    REQUIRE(PP_INACTIVE_SKIP_OK == 1);
    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
