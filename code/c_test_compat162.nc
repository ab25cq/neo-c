// C11 preprocessor diagnostic: __has_include_next operand must be header-name.
#if __has_include_next(FOO)
int main(void)
{
    return 0;
}
#endif
