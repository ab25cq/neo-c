// C11 preprocessor GCC-compat: division/modulo by zero in #if keeps lhs value.
#if ((0 / 0) != 0)
#error 0/0 should evaluate as 0 in #if compatibility path
#endif

#if ((2 / 0) != 2)
#error 2/0 should evaluate as 2 in #if compatibility path
#endif

#if ((0 % 0) != 0)
#error 0%0 should evaluate as 0 in #if compatibility path
#endif

#if ((2 % 0) != 2)
#error 2%0 should evaluate as 2 in #if compatibility path
#endif

int main(void)
{
    return 0;
}
