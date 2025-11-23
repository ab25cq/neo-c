// typedef 周りの配列・ポインタ・関数ポインタの挙動確認
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

#define CHECK(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

typedef int i32;
typedef i32 i32_alias;
typedef i32_alias *pi32;
typedef int arr3[3];

typedef int (*binop)(int, int);
static int add(int a, int b) { return a + b; }
static int mul(int a, int b) { return a * b; }

typedef struct Point {
    i32 x;
    i32 y;
} Point;

static int sum_arr3(const arr3 xs) {
    return xs[0] + xs[1] + xs[2];
}

static int apply(binop f, int a, int b) {
    return f(a, b);
}

int main(void) {
    bool ok = true;

    i32 a = 10;
    i32_alias b = 20;
    CHECK(a + b == 30);

    arr3 triple = { 1, 2, 3 };
    CHECK(sum_arr3(triple) == 6);

    pi32 p = &a;
    CHECK(*p == 10);
    *p = 11;
    CHECK(a == 11);

    Point pt = { .x = 3, .y = 4 };
    CHECK(pt.x == 3 && pt.y == 4);

    binop ops[2] = { add, mul };
    CHECK(ops[0](2, 5) == 7);
    CHECK(ops[1](3, 4) == 12);

    // --- 以下は neo-c が未対応かを確認するための箇所（コンパイル失敗する可能性あり） ---
    int (*(*parr)[2])(int, int) = &ops; // 配列へのポインタ経由の関数ポインタ
    CHECK((*parr)[1](2, 6) == 12);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
