// C11 preprocessor diagnostic: __has_include without call syntax must fail.
#if __has_include
int main(void)
{
    return 0;
}
#endif
