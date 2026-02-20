#line 1 "../code6/c_test_compat66_vla_file_scope.nc"
// expected compile failure: VLA at file scope
int n = 3;
int g_bad[n];

int main(void)
{
    return 0;
}
