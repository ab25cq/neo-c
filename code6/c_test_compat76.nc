// C11 preprocessor tokenization edges: line-splice/comment/token-paste
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define CAT1(a, b) a##b
#define CAT(a, b) CAT1(a, b)
#define STR1(x) #x
#define STR(x) STR1(x)

#define SPLICE_SUM (1 + \
2 + \
3)

#define ADD3(a, b, c) ((a) + (b) + (c))
#define COMMENT_EXPR (40/**/+/**/2)

#define MAKE_NAME(base) CAT(base, _value)

static int MAKE_NAME(local) = 76;

int main(void)
{
    REQUIRE(SPLICE_SUM == 6);
    REQUIRE(ADD3(1, /* comment */ 2, 3) == 6);
    REQUIRE(COMMENT_EXPR == 42);
    REQUIRE(local_value == 76);
    REQUIRE(strcmp(STR(local_value), "local_value") == 0);

    // Backslash-newline in a string literal should be spliced.
    REQUIRE(strcmp("hello\
world", "helloworld") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
