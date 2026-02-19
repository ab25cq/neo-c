// C11 preprocessor diagnostic: undefined function-like macro token in #if must fail.
#if FOO173(1)
int main(void)
{
    return 0;
}
#endif
