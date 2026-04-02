#include <neo-c.h>

uniq class Foo {
    new(int n) {
        int self.n = missing_ctor_value;
    }
}

int main()
{
    Foo*% x = new Foo(123);
    return 0;
}
