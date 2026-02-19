// C11 preprocessor diagnostic: __has_include operand must be header-name.
#if __has_include(FOO)
int main(void)
{
    return 0;
}
#endif
