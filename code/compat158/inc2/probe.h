#ifndef COMPAT158_INC2_PROBE_H
#define COMPAT158_INC2_PROBE_H

#if __has_include_next(<probe.h>)
#error "compat158: __has_include_next should be false at last include dir"
#endif

#define COMPAT158_STAGE2 2

#endif
