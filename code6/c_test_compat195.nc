// C11 preprocessor: #line operands should be fully macro-rescanned.
#include <neo-c.h>

#define BASE_LINE 605
#define NESTED_LINE BASE_LINE
#define BASE_FILE "compat195_nested_file.nc"
#define NESTED_FILE BASE_FILE

#line NESTED_LINE NESTED_FILE
static int g_line = __LINE__;
static const char* g_file = __FILE__;
#line 1 "c_test_compat195.nc"

int main(void)
{
    if (g_line != 605) return 1;
    if (strcmp(g_file, "compat195_nested_file.nc") != 0) return 2;
    return 0;
}
