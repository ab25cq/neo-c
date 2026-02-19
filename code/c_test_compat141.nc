// C11 preprocessor: #pragma once should prevent duplicate inclusion.
#include "compat141/once.h"
#include "compat141/once.h"

int main(void)
{
    return compat141_once_value() == 41 ? 0 : 1;
}
