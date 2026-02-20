#line 1 "../code6/c_test_compat125.nc"
// C11 initializer constraint diagnostic: excess elements in scalar initializer
int main(void)
{
    int x = { 1, 2 };
    return x;
}
