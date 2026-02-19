// C11 preprocessor diagnostic: hex floating constant is invalid in #if expression.
#if 0x1p4
int main(void)
{
    return 0;
}
#endif
