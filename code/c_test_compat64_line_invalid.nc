// expected compile failure: invalid #line directive
#line abc "invalid_line.nc"

int main(void)
{
    return 0;
}
