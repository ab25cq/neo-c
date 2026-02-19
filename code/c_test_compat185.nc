// C11 preprocessor: unary minus on unsigned constants wraps modulo and remains unsigned.
#if -1ULL <= 0
#error unary minus on unsigned constant evaluated incorrectly
#endif

int main(void)
{
    return 0;
}
