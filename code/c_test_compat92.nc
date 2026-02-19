// C11 translation-phase focused checks:
// - backslash-newline splicing
// - adjacent string literal concatenation
// - macro expansion before stringizing
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

#define STR1(x) #x
#define STR(x) STR1(x)

// line splicing in a macro definition
#define SPLICE_ADD (1 + \
2 + \
3)

// adjacent literals are concatenated in translation phase 6
static const char* g_joined = "neo" "c";

int main(void)
{
    int local = 40 + \
2;

    REQUIRE(SPLICE_ADD == 6);
    REQUIRE(local == 42);
    REQUIRE(strcmp(g_joined, "neoc") == 0);
    REQUIRE(strcmp("A" "B" "C", "ABC") == 0);
    REQUIRE(strcmp(STR(SPLICE_ADD), "(1 + 2 + 3)") == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
