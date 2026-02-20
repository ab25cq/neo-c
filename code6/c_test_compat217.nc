// C11 preprocessor positive: valid stringize forms with named and variadic parameters.
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

#define STR_ONE(x) #x
#define STR_VAR(...) #__VA_ARGS__
#define STR_NAMED(args...) #args

int main(void)
{
    REQUIRE(strcmp(STR_ONE(token), "token") == 0);
    REQUIRE(strcmp(STR_VAR(), "") == 0);
    REQUIRE(strcmp(STR_VAR(a, b), "a, b") == 0);
    REQUIRE(strcmp(STR_NAMED(alpha, beta), "alpha, beta") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
