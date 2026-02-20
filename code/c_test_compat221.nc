// C11 preprocessor diagnostic: incompatible object-like macro redefinition.
#define BAD221 10
#define BAD221 11

int main(void)
{
    return BAD221;
}
