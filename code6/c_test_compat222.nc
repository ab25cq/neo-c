// C11 preprocessor diagnostic: incompatible function-like macro redefinition.
#define BAD222(x) ((x) + 1)
#define BAD222(x) ((x) + 2)

int main(void)
{
    return BAD222(0);
}
