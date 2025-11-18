// C 言語互換性テスト (6):
// - qsort/bsearch の比較関数と整列
// - strtol(base 0) の基数自動判定と ERANGE
// - tmpfile/fseek/ftell によるファイル I/O
// - errno の設定と保持
// - CHAR_BIT の静的検証

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

_Static_assert(CHAR_BIT == 8, "char is 8-bit");

static int cmp_ints(const void *a, const void *b) {
    int ia = *(const int*)a;
    int ib = *(const int*)b;
    if (ia < ib) return -1;
    if (ia > ib) return 1;
    return 0;
}

int main(void) {
    bool ok = true;

    // qsort で昇順に並べ替え
    int arr[] = { 5, 1, 4, 2, 3 };
    qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), cmp_ints);
    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == i + 1);
    }

    // bsearch で値を検索
    int key = 3;
    int *found = bsearch(&key, arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), cmp_ints);
    REQUIRE(found != NULL && *found == 3);

    // strtol: base 0 の基数自動判定
    char *end = NULL;
    errno = 0;
    long v_hex = strtol("0x10", &end, 0);
    REQUIRE(errno == 0);
    REQUIRE(v_hex == 16 && end && *end == '\0');

    // strtol: オーバーフローで ERANGE
    errno = 0;
    (void)strtol("9999999999999999999999999", &end, 10);
    REQUIRE(errno == ERANGE);

    // tmpfile + fseek/ftell + fgets
    FILE *fp = tmpfile();
    REQUIRE(fp != NULL);
    if (fp) {
        fputs("hello\nworld\n", fp);
        REQUIRE(fflush(fp) == 0);
        REQUIRE(fseek(fp, 0, SEEK_SET) == 0);
        REQUIRE(ftell(fp) == 0);
        char line[16];
        REQUIRE(fgets(line, sizeof(line), fp) != NULL);
        REQUIRE(strcmp(line, "hello\n") == 0);
        REQUIRE(fgets(line, sizeof(line), fp) != NULL);
        REQUIRE(strcmp(line, "world\n") == 0);
        fclose(fp);
    }

    // errno が成功時に変更されないこと (例: memcpy)
    errno = 1234;
    int buf[3] = {0};
    memcpy(buf, arr, sizeof(buf));
    REQUIRE(errno == 1234);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
