// C11 preprocessor: defined-token boundary with expression context.
#define y 1
#if definedy || !defined(y)
#error definedy must not be parsed as defined y
#endif

int main(void)
{
    return 0;
}
