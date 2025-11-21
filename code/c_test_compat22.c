// GNU transparent_union + anonymous uses
#include <stdio.h>
#include <stdbool.h>

typedef union __attribute__((__transparent_union__)) {
    int i;
    float f;
} Tun;

static int check(Tun v) {
    return v.i == 42 || (v.f > 3.0f && v.f < 3.2f);
}

int main(void) {
    bool ok = true;
    ok = ok && check(42);
    ok = ok && check((Tun){ .f = 3.14f });
    puts(ok ? "OK" : "NG");
    return ok ? 0 : 1;
}
