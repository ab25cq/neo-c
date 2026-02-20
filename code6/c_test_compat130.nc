// C11 initializer constraint diagnostic: invalid designated initializer field
struct S {
    int a;
};

int main(void)
{
    struct S s = { .b = 1 };
    return s.a;
}
