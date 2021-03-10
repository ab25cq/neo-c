inline int fun()
{
    return 1 + 1;
}

extern __uniq__ int gCount;

int main()
{
    int a = fun();
    return 0;
}
