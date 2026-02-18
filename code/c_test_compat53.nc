#include <stdio.h>
#include <stdbool.h>
#include <fenv.h>
#include <math.h>

#pragma STDC FENV_ACCESS ON

int main(void)
{
    bool ok = true;
    fesetround(FE_DOWNWARD);
    double a = nearbyint(1.9);
    if (a != 1.0) ok = false;
    fesetround(FE_UPWARD);
    double b = nearbyint(1.1);
    if (b != 2.0) ok = false;
    fesetround(FE_TONEAREST);
    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
