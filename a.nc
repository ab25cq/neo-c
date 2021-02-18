void fun()
{
    static int n = 0;
    n++;
    printf("%d\n", n);
}

int main()
{
    int a[10];
    int *b = a;
    
    a[0] = 123;
    a[1] = 234;
    
    printf("%d\n", *b);
    printf("%d\n", *(b+1));
    fun();
    fun();
    
    exit(0);
}
