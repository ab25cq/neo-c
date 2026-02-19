// C11 preprocessor extension-compat: GNU linemarkers (# <line> "file" [flags...]).
#include <neo-c.h>

# 333 "compat196_marker.nc" 1 3 4
static int g_line = __LINE__;
static const char* g_file = __FILE__;

# 777 "compat196_marker2.nc" 2
static int g_line2 = __LINE__;
static const char* g_file2 = __FILE__;

# 888
static int g_line3 = __LINE__;
static const char* g_file3 = __FILE__;

#line 1 "c_test_compat196.nc"
int main(void)
{
    if (g_line != 333) return 1;
    if (strcmp(g_file, "compat196_marker.nc") != 0) return 2;
    if (g_line2 != 777) return 3;
    if (strcmp(g_file2, "compat196_marker2.nc") != 0) return 4;
    if (g_line3 != 888) return 5;
    if (strcmp(g_file3, "compat196_marker2.nc") != 0) return 6;
    return 0;
}
