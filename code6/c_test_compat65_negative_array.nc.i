#line 1 "../code6/c_test_compat65_negative_array.nc"
// expected compile failure: negative array size
int g_bad[-1];

int main(void)
{
    return 0;
}
