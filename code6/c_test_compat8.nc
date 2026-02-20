// C 標準ライブラリ機能テスト (8):
// - ctype 変換/判定
// - strtok/strspn/memchr などの文字列処理
// - calloc/realloc の挙動
// - gmtime/strftime/difftime による時間処理

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

static bool g_ok = true;

static void test_ctype(void) {
    REQUIRE(toupper('a') == 'A');
    REQUIRE(tolower('Z') == 'z');
    REQUIRE(isspace(' ') && isdigit('9') && isalpha('Q'));
}

static void test_string_funcs(void) {
    char buf[] = " neo,c,,lang ";
    char *token = strtok(buf, ", ");
    REQUIRE(token && strcmp(token, "neo") == 0);
    token = strtok(NULL, ", ");
    REQUIRE(token && strcmp(token, "c") == 0);
    token = strtok(NULL, ", ");
    REQUIRE(token && strcmp(token, "lang") == 0);
    token = strtok(NULL, ", ");
    REQUIRE(token == NULL);

    const char *letters = "abcxyz";
    REQUIRE(strspn("abacus", letters) == 4);
    REQUIRE(strcspn("123abc", letters) == 3);

    const char data[] = "hello\0world";
    const char *found = memchr(data, 'w', sizeof(data));
    REQUIRE(found && strcmp(found, "world") == 0);
}

static void test_alloc(void) {
    size_t count = 4;
    int *arr = calloc(count, sizeof(int));
    REQUIRE(arr != NULL);
    bool zero = true;
    for (size_t i = 0; i < count; i++) {
        if (arr[i] != 0) zero = false;
        arr[i] = (int)(i + 1);
    }
    REQUIRE(zero);
    int *bigger = realloc(arr, count * 2 * sizeof(int));
    REQUIRE(bigger != NULL);
    if (bigger) {
        for (size_t i = 0; i < count; i++) REQUIRE(bigger[i] == (int)(i + 1));
        free(bigger);
    } else {
        free(arr);
    }
}

static void test_time_funcs(void) {
    time_t epoch = 0;
    struct tm tm_utc = *gmtime(&epoch);
    char out[32];
    size_t len = strftime(out, sizeof(out), "%Y-%m-%d %H:%M:%S", &tm_utc);
    REQUIRE(len > 0);
    REQUIRE(strcmp(out, "1970-01-01 00:00:00") == 0);

    time_t t1 = 7200;
    time_t t2 = 10;
    double diff = difftime(t1, t2);
    REQUIRE(diff == 7190.0);
}

int main(void) {
    test_ctype();
    test_string_funcs();
    test_alloc();
    test_time_funcs();

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
