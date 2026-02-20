// C11 preprocessor positive: valid integer suffix combinations in #if expression.
#if (1u == 1) && (2ul == 2) && (3lu == 3) && (4ll == 4) && (5LLU == 5) && (6ull == 6)
int main(void)
{
    return 0;
}
#else
#error integer suffix evaluation failed
#endif
