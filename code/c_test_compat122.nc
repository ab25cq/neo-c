// C11 preprocessor diagnostic: #ifndef must not have trailing tokens
#ifndef FOO trailing_token
int main(void)
{
    return 122;
}
#endif
