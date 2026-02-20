// C11 translation phase compatibility: trigraph directive spelling for include.
#include <neo-c.h>

??=include "compat199/tri_header.h"

int main(void)
{
    return TRI_HEADER_VALUE == 321 ? 0 : 1;
}
