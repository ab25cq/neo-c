using C
{
#include <complex.h>
#include <dirent.h>
#include <fenv.h>
#include <fnmatch.h>
#include <glob.h>
#include <iconv.h>
#include <langinfo.h>
#include <stdatomic.h>
#include <syslog.h>
#include <tgmath.h>
#if __has_include(<execinfo.h>)
#include <execinfo.h>
#endif
#if __has_include(<malloc.h>)
#include <malloc.h>
#endif
#if __has_include(<spawn.h>)
#include <spawn.h>
#endif
#if __has_include(<wordexp.h>)
#include <wordexp.h>
#endif
}

int test_headers_misc(void)
{
    return 0;
}
