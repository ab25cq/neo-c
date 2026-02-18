#include <stdio.h>
#include <stdbool.h>
#include <wchar.h>
#include <wctype.h>

int main(void)
{
    bool ok = true;
    const wchar_t* ws = L"AbC";
    if (wcslen(ws) != 3) ok = false;
    if (!iswalpha(ws[0])) ok = false;
    if (towlower(ws[0]) != L'a') ok = false;

    wchar_t out[8];
    wmemset(out, 0, 8);
    wmemcpy(out, ws, 3);
    if (out[2] != L'C') ok = false;

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
