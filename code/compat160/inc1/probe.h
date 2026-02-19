#ifndef COMPAT160_INC1_PROBE_H
#define COMPAT160_INC1_PROBE_H

#define COMPAT160_NEXT_A COMPAT160_NEXT_B
#define COMPAT160_NEXT_B <probe.h>

#if !__has_include_next(COMPAT160_NEXT_A)
#error "compat160: __has_include_next macro-expanded header should resolve"
#endif

#define COMPAT160_STAGE1 1

#include_next COMPAT160_NEXT_B

#define COMPAT160_SUM (COMPAT160_STAGE1 + COMPAT160_STAGE2)

#endif
