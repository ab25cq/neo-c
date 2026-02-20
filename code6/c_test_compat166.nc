// C11 preprocessor diagnostic: __has_include_next empty operand must fail.
#if __has_include_next()
int main(void)
{
    return 0;
}
#endif
