// C11 preprocessor diagnostic: #elif after #else is invalid
#if 0
int x = 0;
#else
int x = 1;
#elif 1
int x = 2;
#endif

int main(void)
{
    return x;
}
