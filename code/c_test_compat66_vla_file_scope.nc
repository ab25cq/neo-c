// expected compile failure: VLA at file scope
int n = 3;
int g_bad[n];

int main(void)
{
    return 0;
}
