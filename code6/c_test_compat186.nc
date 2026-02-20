// C11 preprocessor: conditional operator should apply common type conversion.
#if (1 ? -1 : 1U) <= 0
#error conditional operator integer conversion evaluated incorrectly
#endif

int main(void)
{
    return 0;
}
