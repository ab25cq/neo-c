// C11 preprocessor diagnostic: invalid #if expression (missing rhs operand)
#if (1 + )
int main(void)
{
    return 101;
}
#endif
