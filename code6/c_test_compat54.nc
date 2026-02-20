#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    bool ok = true;
    FILE* fp = tmpfile();
    if (!fp) ok = false;
    if (fp) {
        const char* s = "abc";
        if (fwrite(s, 1, 3, fp) != 3) ok = false;
        if (fflush(fp) != 0) ok = false;
        if (fseek(fp, 0, SEEK_SET) != 0) ok = false;

        int c = fgetc(fp);
        if (c != 'a') ok = false;
        if (ungetc(c, fp) == EOF) ok = false;
        c = fgetc(fp);
        if (c != 'a') ok = false;

        if (fseek(fp, 0, SEEK_END) != 0) ok = false;
        long pos = ftell(fp);
        if (pos != 3) ok = false;

        fclose(fp);
    }

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
