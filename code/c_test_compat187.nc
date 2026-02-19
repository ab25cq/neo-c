// C11 preprocessor: mixed-rank signed/unsigned usual arithmetic conversions.
#if (-1LL < 1U)
#error signed long long vs unsigned int comparison should be false in #if
#endif

#if (-1L < 1U)
#error signed long vs unsigned int comparison should be false in #if
#endif

#if (-1 < 1U)
#error signed int vs unsigned int comparison should be false in #if
#endif

int main(void)
{
    return 0;
}
