// C11 preprocessor include-search and nested-conditional stress
#include <stdio.h>
#include <stdbool.h>

#include <entry.h>
#include <only_in_inc2.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

#define L1 1
#if L1
    #define L2 2
    #if (L2 == 2)
        #define L3 3
        #if (L3 == 3)
            #define L4 4
            #if (L4 == 4)
                #define L5 5
                #if (L5 == 5)
                    #define L6 6
                    #if (L6 == 6)
                        #define L7 7
                        #if (L7 == 7)
                            #define L8 8
                            #if (L8 == 8)
                                #define L9 9
                                #if (L9 == 9)
                                    #define L10 10
                                    #if (L10 == 10)
                                        #define L11 11
                                        #if (L11 == 11)
                                            #define L12 12
                                            #if (L12 == 12)
                                                #define NEST_RESULT 1234
                                            #else
                                                #define NEST_RESULT -12
                                            #endif
                                        #else
                                            #define NEST_RESULT -11
                                        #endif
                                    #else
                                        #define NEST_RESULT -10
                                    #endif
                                #else
                                    #define NEST_RESULT -9
                                #endif
                            #else
                                #define NEST_RESULT -8
                            #endif
                        #else
                            #define NEST_RESULT -7
                        #endif
                    #else
                        #define NEST_RESULT -6
                    #endif
                #else
                    #define NEST_RESULT -5
                #endif
            #else
                #define NEST_RESULT -4
            #endif
        #else
            #define NEST_RESULT -3
        #endif
    #else
        #define NEST_RESULT -2
    #endif
#else
    #define NEST_RESULT -1
#endif

#if 0
    #define ELIF_PICK -1
#elif defined(ONLY_IN_INC2_VALUE) && (ONLY_IN_INC2_VALUE == 23)
    #define ELIF_PICK 23
#else
    #define ELIF_PICK -2
#endif

int main(void)
{
    REQUIRE(ENTRY_SUM == 107);
    REQUIRE(ONLY_IN_INC2_VALUE == 23);
    REQUIRE(NEST_RESULT == 1234);
    REQUIRE(ELIF_PICK == 23);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
