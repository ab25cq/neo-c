// C11 preprocessor diagnostic: # must stringify only a macro parameter name.
#define BAD219(x) #1
int main(void)
{
    return 219;
}
