// C11 preprocessor diagnostic: defined with extra parentheses is invalid
#if defined((FOO))
int main(void)
{
    return 115;
}
#endif
