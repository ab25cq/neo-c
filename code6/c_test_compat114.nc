// C11 preprocessor diagnostic: empty #elif expression
#if 0
int x = 0;
#elif
int x = 1;
#endif

int main(void)
{
    return x;
}
