// C11 preprocessor: __has_include should accept macro-expanded header-name.
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define C159_HDR_A C159_HDR_B
#define C159_HDR_B <stdio.h>

#define C159_QHDR_A C159_QHDR_B
#define C159_QHDR_B "compat159/header.h"

#define C159_MISS_A C159_MISS_B
#define C159_MISS_B <compat159/no_such_header.h>

#if !__has_include(C159_HDR_A)
#error "compat159: __has_include macro-expanded angle header failed"
#endif

#if !__has_include(C159_QHDR_A)
#error "compat159: __has_include macro-expanded quoted header failed"
#endif

#if __has_include(C159_MISS_A)
#error "compat159: __has_include should be false for missing macro-expanded header"
#endif

#include C159_QHDR_A

int main(void)
{
    REQUIRE(COMPAT159_HEADER_VALUE == 159);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
