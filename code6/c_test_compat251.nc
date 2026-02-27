int ccpp_warning_line_check(void) { return 1; }
#warning ccpp-warning-line-check
int main(void)
{
    return ccpp_warning_line_check() == 1 ? 0 : 1;
}
