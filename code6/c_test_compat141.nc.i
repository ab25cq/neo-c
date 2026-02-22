#line 1 "../code6/c_test_compat141.nc"
// C11 preprocessor: #pragma once should prevent duplicate inclusion.
#line 1 "./compat141/once.h"
#line 2 "./compat141/once.h"

static int compat141_once_value(void)
{
    return 41;
}
#line 3 "../code6/c_test_compat141.nc"
#line 4 "../code6/c_test_compat141.nc"

int main(void)
{
    return compat141_once_value() == 41 ? 0 : 1;
}
