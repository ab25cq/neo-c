// C11 preprocessor diagnostic: leading-dot floating constant is invalid in #if expression.
#if .5
int main(void)
{
    return 0;
}
#endif
