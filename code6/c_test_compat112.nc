// C11 preprocessor diagnostic: malformed ternary expression in #if
#if (1 ? 2 :)
int main(void)
{
    return 112;
}
#endif
