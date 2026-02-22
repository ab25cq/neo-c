#line 1 "../code6/c_test_compat130.nc"
// C11 initializer constraint diagnostic: invalid designated initializer field
struct S {
    int a;
};

int main(void)
{
    struct S s = { .b = 1 };
    return s.a;
}
