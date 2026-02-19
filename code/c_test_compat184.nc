// C11 preprocessor: unsigned integer constant should compare in unsigned domain.
#if 18446744073709551615ULL <= 9223372036854775807LL
#error ULL comparison with signed long long max evaluated incorrectly
#endif

int main(void)
{
    return 0;
}
