// C11 preprocessor GCC-compat: right-shift with negative count acts as inverse-direction shift.
#if ((1 >> -1) != 2)
#error 1>>-1 should evaluate to 2 in #if compatibility path
#endif

#if ((2 >> -1) != 4)
#error 2>>-1 should evaluate to 4 in #if compatibility path
#endif

#if ((3 >> -1) != 6)
#error 3>>-1 should evaluate to 6 in #if compatibility path
#endif

#if ((1 >> -64) != 0)
#error 1>>-64 should evaluate to 0 in #if compatibility path
#endif

#if ((1U >> -1) != 2U)
#error 1U>>-1 should evaluate to 2U in #if compatibility path
#endif

int main(void)
{
    return 0;
}
