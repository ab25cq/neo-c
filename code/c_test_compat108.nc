// C11 preprocessor diagnostic: extra tokens in #if expression are invalid
#define FLAG108 1
#if defined(FLAG108) extra_token
int main(void)
{
    return 108;
}
#endif
