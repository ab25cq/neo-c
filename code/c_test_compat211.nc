// C11 preprocessor: deep rescan chains beyond small fixed iteration caps
#include <stdio.h>
#include <stdbool.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

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
#define R31 R32
#define R32 R33
#define R33 R34
#define R34 R35
#define R35 R36
#define R36 R37
#define R37 R38
#define R38 R39
#define R39 R40
#define R40 R41
#define R41 R42
#define R42 R43
#define R43 R44
#define R44 R45
#define R45 R46
#define R46 R47
#define R47 R48
#define R48 R49
#define R49 R50
#define R50 R51
#define R51 R52
#define R52 R53
#define R53 R54
#define R54 R55
#define R55 R56
#define R56 R57
#define R57 R58
#define R58 R59
#define R59 R60
#define R60 R61
#define R61 R62
#define R62 R63
#define R63 R64
#define R64 R65
#define R65 R66
#define R66 R67
#define R67 R68
#define R68 R69
#define R69 R70
#define R70 7070

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
#define Q20 Q21
#define Q21 Q22
#define Q22 Q23
#define Q23 Q24
#define Q24 Q25
#define Q25 Q26
#define Q26 Q27
#define Q27 Q28
#define Q28 Q29
#define Q29 Q30
#define Q30 Q31
#define Q31 Q32
#define Q32 Q33
#define Q33 Q34
#define Q34 Q35
#define Q35 Q36
#define Q36 Q37
#define Q37 Q38
#define Q38 Q39
#define Q39 Q40
#define Q40 Q41
#define Q41 Q42
#define Q42 Q43
#define Q43 Q44
#define Q44 Q45
#define Q45 Q46
#define Q46 Q47
#define Q47 Q48
#define Q48 Q49
#define Q49 Q50
#define Q50 Q51
#define Q51 Q52
#define Q52 Q53
#define Q53 Q54
#define Q54 Q55
#define Q55 Q56
#define Q56 Q57
#define Q57 Q58
#define Q58 Q59
#define Q59 Q60
#define Q60 Q61
#define Q61 Q62
#define Q62 Q63
#define Q63 Q64
#define Q64 Q65
#define Q65 Q66
#define Q66 Q67
#define Q67 Q68
#define Q68 Q69
#define Q69 Q70
#define Q70 171

#define F00() F01()
#define F01() F02()
#define F02() F03()
#define F03() F04()
#define F04() F05()
#define F05() F06()
#define F06() F07()
#define F07() F08()
#define F08() F09()
#define F09() F10()
#define F10() F11()
#define F11() F12()
#define F12() F13()
#define F13() F14()
#define F14() F15()
#define F15() F16()
#define F16() F17()
#define F17() F18()
#define F18() F19()
#define F19() F20()
#define F20() F21()
#define F21() F22()
#define F22() F23()
#define F23() F24()
#define F24() F25()
#define F25() F26()
#define F26() F27()
#define F27() F28()
#define F28() F29()
#define F29() F30()
#define F30() F31()
#define F31() F32()
#define F32() F33()
#define F33() F34()
#define F34() F35()
#define F35() F36()
#define F36() F37()
#define F37() F38()
#define F38() F39()
#define F39() F40()
#define F40() F41()
#define F41() F42()
#define F42() F43()
#define F43() F44()
#define F44() F45()
#define F45() F46()
#define F46() F47()
#define F47() F48()
#define F48() F49()
#define F49() F50()
#define F50() F51()
#define F51() F52()
#define F52() F53()
#define F53() F54()
#define F54() F55()
#define F55() F56()
#define F56() F57()
#define F57() F58()
#define F58() F59()
#define F59() F60()
#define F60() F61()
#define F61() F62()
#define F62() F63()
#define F63() F64()
#define F64() F65()
#define F65() F66()
#define F66() F67()
#define F67() F68()
#define F68() F69()
#define F69() F70()
#define F70() 70

#if ((R00 == 7070) && (Q00 == 171) && (F00() == 70))
#define PP_DEEP_CHAIN_OK 1
#else
#define PP_DEEP_CHAIN_OK 0
#endif

int main(void)
{
    REQUIRE(PP_DEEP_CHAIN_OK == 1);
    REQUIRE(R00 == 7070);
    REQUIRE(Q00 == 171);
    REQUIRE(F00() == 70);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
