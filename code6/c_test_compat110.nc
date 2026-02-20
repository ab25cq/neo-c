// C11 preprocessor diagnostic: defined() missing closing parenthesis
#if defined(FOO
int main(void)
{
    return 110;
}
#endif
