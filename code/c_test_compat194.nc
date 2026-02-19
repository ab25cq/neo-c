// C11 preprocessor: #line should accept macro-expanded line/file operands.
#include <neo-c.h>

#define LNUM 333
#define LFILE "compat194_virtual_file.nc"

#line LNUM LFILE
static int g_line = __LINE__;
static const char* g_file = __FILE__;
#line 1 "c_test_compat194.nc"

#define LNUM2 777
#line LNUM2
static int g_line2 = __LINE__;
static const char* g_file2 = __FILE__;
#line 1 "c_test_compat194.nc"

int main(void)
{
    if (g_line != 333) return 1;
    if (strcmp(g_file, "compat194_virtual_file.nc") != 0) return 2;
    if (g_line2 != 777) return 3;
    if (strcmp(g_file2, "c_test_compat194.nc") != 0) return 4;
    return 0;
}
