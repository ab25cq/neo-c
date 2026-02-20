#line 1 "../code6/c_test_compat66_incomplete_type.nc"
// expected compile failure: incomplete type object
struct S;
struct S g_bad;

int main(void)
{
    return 0;
}
