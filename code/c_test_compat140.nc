// C11 preprocessor: directives in inactive groups must be skipped
#if 0
#include
#include "compat140_missing_header.h"
#error "compat140: inactive branch must not trigger this error"
#endif

int main(void)
{
    return 0;
}
