// C11 preprocessor diagnostic: malformed character constant in #if must fail.
#if '\x'
int main(void)
{
    return 0;
}
#endif
