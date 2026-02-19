#ifndef COMPAT158_INC1_PROBE_H
#define COMPAT158_INC1_PROBE_H

#if !__has_include_next(<probe.h>)
#error "compat158: __has_include_next should find inc2/probe.h"
#endif

#define COMPAT158_STAGE1 1

#include_next <probe.h>

#define COMPAT158_SUM (COMPAT158_STAGE1 + COMPAT158_STAGE2)

#endif
