// C11 preprocessor diagnostic: function-like token after unary op in #if must fail.
#if !BAR174(2)
int main(void)
{
    return 0;
}
#endif
