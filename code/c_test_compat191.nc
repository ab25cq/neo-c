// C11 preprocessor GCC-compat: left-shift with negative count acts as inverse-direction shift.
#if ((2 << -1) != 1)
#error 2<<-1 should evaluate to 1 in #if compatibility path
#endif

#if ((3 << -1) != 1)
#error 3<<-1 should evaluate to 1 in #if compatibility path
#endif

#if ((4 << -2) != 1)
#error 4<<-2 should evaluate to 1 in #if compatibility path
#endif

#if ((-3 << -1) != -2)
#error -3<<-1 should evaluate to -2 in #if compatibility path
#endif

#if ((3U << -1) != 1U)
#error 3U<<-1 should evaluate to 1U in #if compatibility path
#endif

int main(void)
{
    return 0;
}
