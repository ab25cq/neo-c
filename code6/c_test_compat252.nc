int ccpp_error_line_check(void) { return 1; }
#error ccpp-error-line-check
int main(void)
{
    return ccpp_error_line_check();
}
