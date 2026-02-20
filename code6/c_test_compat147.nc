// C11 preprocessor diagnostic: #include_next macro expansion must yield header-name.
#define COMPAT147_BAD_NEXT 123
#include_next COMPAT147_BAD_NEXT

int main(void)
{
    return 0;
}
