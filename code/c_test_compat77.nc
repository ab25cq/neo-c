// C11 preprocessor: deep rescan chains and #if lexical boundaries
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

// Deep object-like expansion chain for normal code path.
#define R00 R01
#define R01 R02
#define R02 R03
#define R03 R04
#define R04 R05
#define R05 R06
#define R06 R07
#define R07 R08
#define R08 R09
#define R09 R10
#define R10 R11
#define R11 R12
#define R12 R13
#define R13 R14
#define R14 R15
#define R15 R16
#define R16 R17
#define R17 R18
#define R18 R19
#define R19 R20
#define R20 R21
#define R21 R22
#define R22 R23
#define R23 R24
#define R24 R25
#define R25 R26
#define R26 R27
#define R27 R28
#define R28 R29
#define R29 R30
#define R30 R31
#define R31 3131

// Deep expansion chain for #if expression expansion path.
#define Q00 Q01
#define Q01 Q02
#define Q02 Q03
#define Q03 Q04
#define Q04 Q05
#define Q05 Q06
#define Q06 Q07
#define Q07 Q08
#define Q08 Q09
#define Q09 Q10
#define Q10 Q11
#define Q11 Q12
#define Q12 Q13
#define Q13 Q14
#define Q14 Q15
#define Q15 Q16
#define Q16 Q17
#define Q17 Q18
#define Q18 Q19
#define Q19 Q20
#define Q20 2020

// Function-like expansion chain.
#define G00() G01()
#define G01() G02()
#define G02() G03()
#define G03() G04()
#define G04() G05()
#define G05() G06()
#define G06() G07()
#define G07() G08()
#define G08() G09()
#define G09() G10()
#define G10() G11()
#define G11() G12()
#define G12() G13()
#define G13() G14()
#define G14() G15()
#define G15() 15

#if (defined(R31) && !defined(R99) && (Q00 == 2020) && ((1 << 5) == 32) && ((32 >> 2) == 8) && ((0x10u + 2L) == 18) && (UNKNOWN_TOKEN == 0))
#define IF_EXPR_OK 1
#else
#define IF_EXPR_OK 0
#endif

#if defined(R31) && \
    (G00() == 15)
#define IF_SPLICE_OK 1
#else
#define IF_SPLICE_OK 0
#endif

#if defined(R31)&&((Q00+0)==2020)
#define IF_COMMENT_OK 1
#else
#define IF_COMMENT_OK 0
#endif

int main(void)
{
    REQUIRE(R00 == 3131);
    REQUIRE(Q00 == 2020);
    REQUIRE(G00() == 15);

    REQUIRE(IF_EXPR_OK == 1);
    REQUIRE(IF_SPLICE_OK == 1);
    REQUIRE(IF_COMMENT_OK == 1);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
