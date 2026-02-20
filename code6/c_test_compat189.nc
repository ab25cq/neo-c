// C11 preprocessor GCC-compat: out-of-range/negative shifts in #if.
#if (1 << 64)
#error left shift by 64 should evaluate as 0
#endif

#if (1ULL << 64)
#error unsigned left shift by 64 should evaluate as 0
#endif

#if (1 >> 64)
#error right shift by 64 should evaluate as 0
#endif

#if (1ULL >> 64)
#error unsigned right shift by 64 should evaluate as 0
#endif

#if !(1 >> -1)
#error right shift by -1 should preserve lhs in compatibility path
#endif

#if (1 << -1)
#error left shift by -1 should evaluate as 0 in compatibility path
#endif

#if !(1 << 32)
#error 1<<32 should remain non-zero on 64-bit preprocessor arithmetic
#endif

int main(void)
{
    return 0;
}
