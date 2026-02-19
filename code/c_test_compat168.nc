// C11 preprocessor diagnostic: __has_include_next missing closing ')' must fail.
#if __has_include_next(<stdio.h>
int main(void)
{
    return 0;
}
#endif
