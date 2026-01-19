// C 言語互換性テスト (3):
// - _Bool と整数の変換
// - 関数ポインタ/配列初期化と for ヘッダの複数宣言
// - 構造体の指定イニシャライザと値コピー
// - enum ビットフラグと switch
// - void*/const*/unsigned char* の相互変換

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

_Static_assert(sizeof(_Bool) == 1, "_Bool size");
_Static_assert(_Alignof(long long) >= _Alignof(int), "long long align");

typedef int (*binop_t)(int, int);

static int add(int a, int b) { return a + b; }
static int mul(int a, int b) { return a * b; }

static int fold(binop_t op, const int *xs, size_t n) {
    int acc = xs[0];
    for (size_t i = 1; i < n; i++) acc = op(acc, xs[i]);
    return acc;
}

struct Pair {
    int left;
    int right;
};

static struct Pair flip(struct Pair p) {
    int tmp = p.left;
    p.left = p.right;
    p.right = tmp;
    return p;
}

struct Node {
    int value;
    int next; // index of next node, -1 terminates
};

static int sum_chain(const struct Node nodes[], int head) {
    int sum = 0;
    int cur = head;
    while (cur >= 0) {
        sum += nodes[cur].value;
        cur = nodes[cur].next;
    }
    return sum;
}

enum Flags {
    FLAG_A = 1 << 0,
    FLAG_B = 1 << 1,
    FLAG_C = FLAG_A | FLAG_B
};

int main(void) {
    bool ok = true;

    // _Bool への変換は 0/1 に正規化される
    _Bool b1 = 5;  // 非 0
    _Bool b2 = 0;
    REQUIRE(b1 == 1);
    REQUIRE(b2 == 0);
    REQUIRE((int)b1 == 1 && (int)b2 == 0);

    // 関数ポインタと fold
    const int xs[] = { 1, 2, 3, 4 };
    binop_t ops[2] = { add, mul };
    int sum = fold(ops[0], xs, 4);
    int product = fold(ops[1], xs, 4);
    REQUIRE(sum == 10);
    REQUIRE(product == 24);

    // for ヘッダに複数変数宣言とカンマ演算子
    int accum = 0;
    for (int i = 0, j = 5; i < 3; i++, j--) {
        accum += i + j;
    }
    REQUIRE(accum == (0+5) + (1+4) + (2+3)); // 15

    // 構造体の指定イニシャライザと値コピー
    struct Pair p = { .right = 7, .left = 2 };
    REQUIRE(p.left == 2 && p.right == 7);
    struct Pair flipped = flip(p);
    REQUIRE(flipped.left == 7 && flipped.right == 2);

    // Node 配列の指定イニシャライザ
    struct Node nodes[] = {
        [0] = { .value = 10, .next = 1 },
        [1] = { .value = 20, .next = 2 },
        [2] = { .value = -3, .next = -1 }
    };
    REQUIRE(sum_chain(nodes, 0) == 27);

    // enum ビットフラグと switch
    enum Flags f = FLAG_C;
    int flag_result = 0;
    switch (f) {
        case FLAG_A: flag_result = 1; break;
        case FLAG_B: flag_result = 2; break;
        case FLAG_C: flag_result = 3; break;
        default: flag_result = -1; break;
    }
    REQUIRE(flag_result == 3);
    REQUIRE((f & FLAG_A) && (f & FLAG_B));

    // void* / const* / unsigned char* の相互変換
    const char *text = "abc";
    const void *vp = text;
    const unsigned char *ucp = vp;
    REQUIRE(ucp[0] == 'a' && ucp[2] == 'c');

    // memmove のオーバーラップコピー
    char buf[8] = "1234567";
    memmove(buf + 2, buf, 5); // move "12345" onto "34567"
    REQUIRE(memcmp(buf, "1212345", 7) == 0);

    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
