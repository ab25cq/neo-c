// C11 declaration constraint diagnostic: flexible array member must be last
struct S {
    int a[];
    int b;
};

int main(void)
{
    return 128;
}
