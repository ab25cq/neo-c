// C11 preprocessor diagnostic: defined() operand must be an identifier
#if defined(123)
int main(void)
{
    return 107;
}
#endif
