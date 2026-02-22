#line 1 "../code6/c_test_compat127.nc"
// C11 declaration constraint diagnostic: bit-field must have integer type
struct S {
    float x:3;
};

int main(void)
{
    struct S s = { 0.0f };
    return (int)s.x;
}
