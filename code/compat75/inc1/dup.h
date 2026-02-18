#ifndef COMPAT75_DUP_INC1_H
#define COMPAT75_DUP_INC1_H

#define DUP_LAYER_1 100

#if !__has_include_next(<dup.h>)
#error "compat75: include_next target is missing"
#endif

#include_next <dup.h>

#define DUP_SUM (DUP_LAYER_1 + DUP_LAYER_2)

#endif
