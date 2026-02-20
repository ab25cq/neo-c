// C11 preprocessor: definedx is a normal identifier token, not the defined operator.
#define x 1
#if definedx
#error definedx must not be parsed as defined x
#endif

int main(void)
{
    return 0;
}
