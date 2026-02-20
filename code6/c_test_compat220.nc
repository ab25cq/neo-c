// C11 preprocessor positive: identical macro redefinition is allowed.
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define OBJ220 1 + 2 * 3
#define OBJ220 1+2*3

#define FN220(x, y) ((x) + (y))
#define FN220(x, y) ((x)+(y))

#define VAR220(args...) args
#define VAR220(args...) args

int main(void)
{
    REQUIRE(OBJ220 == 7);
    REQUIRE(FN220(3, 4) == 7);
    REQUIRE(VAR220(9) == 9);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
