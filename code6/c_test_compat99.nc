// C11 preprocessor diagnostic: duplicate #else in one conditional group
#if 1
int x = 1;
#else
int x = 2;
#else
int x = 3;
#endif

int main(void)
{
    return x;
}
