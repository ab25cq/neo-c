#include <neo-c.h>

uniq class Foo {
    new(int n) {
        int self.n = n;
    }

    int get() {
        return self.n;
    }
}

int main() {
    Foo*% x = new Foo(123);

    if(x.get() != 123) {
        puts("NG");
        return 1;
    }

    puts("OK");
    return 0;
}
