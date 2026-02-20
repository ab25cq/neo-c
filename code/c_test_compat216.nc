// C11 preprocessor diagnostic: # in function-like macro must be followed by a parameter.
#define BAD216(x) #
int main(void)
{
    return 216;
}
