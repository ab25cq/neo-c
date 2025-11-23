#include <stdio.h>
#include <stdbool.h>

struct sData
{
    int (*pa)[3];
};

typedef int (*binop)(int, int);

_Bool ok;

static int add(int a, int b) { return a + b; }
static int mul(int a, int b) { return a * b; }

#define CHECK(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        ok = false; \
    } \
} while (0)

int main(int argc, char** argv)
{
    binop ops[2] = { add, mul };
    CHECK(ops[0](2, 5) == 7);
    CHECK(ops[1](3, 4) == 12);

    // --- 以下は neo-c が未対応かを確認するための箇所（コンパイル失敗する可能性あり） ---
    int (*(*parr)[2])(int, int) = &ops;
//    CHECK((*parr)[1](2, 6) == 12);
    
    return 0;
}
