// C11 preprocessor diagnostic: __has_include missing closing ')' must fail.
#if __has_include(<stdio.h>
int main(void)
{
    return 0;
}
#endif
