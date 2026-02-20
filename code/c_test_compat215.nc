// C11 preprocessor diagnostic: ## cannot appear at end of replacement list.
#define BAD215 x##
int main(void)
{
    return 215;
}
