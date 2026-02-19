// C11 preprocessor diagnostic: invalid conditional operator in #if
#if (1 ? 2)
int main(void)
{
    return 103;
}
#endif
