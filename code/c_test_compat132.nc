int main(void)
{
    struct S { int b:0; } s;
    (void)s;
    return 0;
}
