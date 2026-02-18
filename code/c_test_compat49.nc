// ISO C library behavior: snprintf/sscanf/strto* conversions
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

int main(void)
{
    char buf[64];
    int n = snprintf(buf, sizeof(buf), "%s:%d:%X", "neo", 25, 255);
    REQUIRE(n > 0);
    REQUIRE(strcmp(buf, "neo:25:FF") == 0);

    char name[16];
    int dec = 0;
    unsigned hex = 0;
    int scanned = sscanf(buf, "%15[^:]:%d:%X", name, &dec, &hex);
    REQUIRE(scanned == 3);
    REQUIRE(strcmp(name, "neo") == 0);
    REQUIRE(dec == 25);
    REQUIRE(hex == 255u);

    errno = 0;
    char* endp = NULL;
    long v1 = strtol("123xyz", &endp, 10);
    REQUIRE(v1 == 123);
    REQUIRE(endp && strcmp(endp, "xyz") == 0);
    REQUIRE(errno == 0);

    errno = 0;
    endp = NULL;
    unsigned long v2 = strtoul("0x2A", &endp, 0);
    REQUIRE(v2 == 42ul);
    REQUIRE(endp && *endp == '\0');
    REQUIRE(errno == 0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
