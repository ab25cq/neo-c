#ifndef COMPAT160_INC2_PROBE_H
#define COMPAT160_INC2_PROBE_H

#define COMPAT160_NEXT_A COMPAT160_NEXT_B
#define COMPAT160_NEXT_B <probe.h>

#if __has_include_next(COMPAT160_NEXT_A)
#error "compat160: __has_include_next should be false at last layer"
#endif

#define COMPAT160_STAGE2 2

#endif
