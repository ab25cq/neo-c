// C11 preprocessor diagnostic: invalid long/unsigned suffix ordering token should fail.
#if 1UlL
int main(void)
{
    return 0;
}
#endif
