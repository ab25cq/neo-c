#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main(void)
{
    bool ok = true;
    const char* s = "18446744073709551615";
    char* endp = NULL;
    uintmax_t v = strtoumax(s, &endp, 10);
    if (*endp != '\0') ok = false;
    if (v != UINTMAX_MAX) ok = false;

    char buf[64];
    snprintf(buf, sizeof(buf), "%" PRIuMAX, (uintmax_t)42);
    if (buf[0] != '4' || buf[1] != '2' || buf[2] != '\0') ok = false;

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
