// C11 preprocessor regression: multi-line block comments started on #if lines
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define FLAG_A 1

// This pattern mirrors headers that start a block comment on #if and close later.
#if defined(FLAG_A) /* this comment intentionally spans
                       multiple physical lines */
#define PP_COMMENT_IF_OK 1
#else
#define PP_COMMENT_IF_OK 0
#endif

// Also verify inactive branch scanning keeps block-comment depth consistent.
#if 0 /* inactive branch comment starts here
         and closes here */
#define PP_INACTIVE_COMMENT_OK 0
#elif 1
#define PP_INACTIVE_COMMENT_OK 1
#else
#define PP_INACTIVE_COMMENT_OK 0
#endif

#if PP_COMMENT_IF_OK && PP_INACTIVE_COMMENT_OK
#define PP_COMMENT_STATE_OK 1
#else
#define PP_COMMENT_STATE_OK 0
#endif

int main(void)
{
    REQUIRE(PP_COMMENT_IF_OK == 1);
    REQUIRE(PP_INACTIVE_COMMENT_OK == 1);
    REQUIRE(PP_COMMENT_STATE_OK == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
