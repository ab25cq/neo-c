#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    bool ok = true;
    const char* old = setlocale(LC_ALL, NULL);
    char saved[128] = {0};
    if (old) {
        strncpy(saved, old, sizeof(saved)-1);
    }

    if (setlocale(LC_ALL, "C") == NULL) ok = false;
    if (strcoll("abc", "abd") >= 0) ok = false;
    if (strxfrm(NULL, "abc", 0) == 0) ok = false;

    if (saved[0] != '\0') setlocale(LC_ALL, saved);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
