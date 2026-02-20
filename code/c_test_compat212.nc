// C11 preprocessor: deep macro-rescan chain should reach #include header-name.
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define H00 H01
#define H01 H02
#define H02 H03
#define H03 H04
#define H04 H05
#define H05 H06
#define H06 H07
#define H07 H08
#define H08 H09
#define H09 H10
#define H10 H11
#define H11 H12
#define H12 H13
#define H13 H14
#define H14 H15
#define H15 H16
#define H16 H17
#define H17 H18
#define H18 H19
#define H19 H20
#define H20 H21
#define H21 H22
#define H22 H23
#define H23 H24
#define H24 H25
#define H25 H26
#define H26 H27
#define H27 H28
#define H28 H29
#define H29 H30
#define H30 H31
#define H31 H32
#define H32 H33
#define H33 H34
#define H34 H35
#define H35 H36
#define H36 H37
#define H37 H38
#define H38 H39
#define H39 H40
#define H40 H41
#define H41 H42
#define H42 H43
#define H43 H44
#define H44 H45
#define H45 H46
#define H46 H47
#define H47 H48
#define H48 H49
#define H49 H50
#define H50 H51
#define H51 H52
#define H52 H53
#define H53 H54
#define H54 H55
#define H55 H56
#define H56 H57
#define H57 H58
#define H58 H59
#define H59 H60
#define H60 H61
#define H61 H62
#define H62 H63
#define H63 H64
#define H64 H65
#define H65 H66
#define H66 H67
#define H67 H68
#define H68 H69
#define H69 H70
#define H70 "compat212/deep_header.h"
#include H00

int main(void)
{
    REQUIRE(COMPAT212_VALUE == 212);
    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
