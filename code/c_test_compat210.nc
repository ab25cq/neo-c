// C11 predefined macro coverage: __DATE__/__TIME__/__STDC_HOSTED__
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

#define IS_DIGIT(c) ((c) >= '0' && (c) <= '9')
#define IS_ALPHA(c) (((c) >= 'A' && (c) <= 'Z') || ((c) >= 'a' && (c) <= 'z'))

#if !defined(__STDC__) || (__STDC__ != 1)
#error "__STDC__ must be defined as 1"
#endif

#if !defined(__STDC_VERSION__) || (__STDC_VERSION__ < 201112L)
#error "__STDC_VERSION__ must be available and >= 201112L"
#endif

#if !defined(__STDC_HOSTED__) || ((__STDC_HOSTED__ != 0) && (__STDC_HOSTED__ != 1))
#error "__STDC_HOSTED__ must be 0 or 1"
#endif

#ifndef __DATE__
#error "__DATE__ must be defined"
#endif

#ifndef __TIME__
#error "__TIME__ must be defined"
#endif

int main(void)
{
    const char* d = __DATE__;
    const char* t = __TIME__;

    REQUIRE(strlen(d) == 11);
    REQUIRE(strlen(t) == 8);

    REQUIRE(IS_ALPHA(d[0]) && IS_ALPHA(d[1]) && IS_ALPHA(d[2]));
    REQUIRE(d[3] == ' ');
    REQUIRE(d[6] == ' ');
    REQUIRE((d[4] == ' ' || IS_DIGIT(d[4])) && IS_DIGIT(d[5]));
    REQUIRE(IS_DIGIT(d[7]) && IS_DIGIT(d[8]) && IS_DIGIT(d[9]) && IS_DIGIT(d[10]));

    REQUIRE(IS_DIGIT(t[0]) && IS_DIGIT(t[1]));
    REQUIRE(t[2] == ':');
    REQUIRE(IS_DIGIT(t[3]) && IS_DIGIT(t[4]));
    REQUIRE(t[5] == ':');
    REQUIRE(IS_DIGIT(t[6]) && IS_DIGIT(t[7]));

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
