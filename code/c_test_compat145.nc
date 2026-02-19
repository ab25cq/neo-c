// C11 preprocessor diagnostic: #include macro expansion must still form header-name.
#define COMPAT145_BADHDR 123
#include COMPAT145_BADHDR

int main(void)
{
    return 0;
}
