#line 1 "../code6/c_test_compat66_duplicate_member.nc"
// expected compile failure: duplicate struct member name
struct Bad {
    int x;
    int x;
};

int main(void)
{
    return 0;
}
