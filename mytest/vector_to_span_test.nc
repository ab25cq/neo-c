#include <neo-c.h>

int main() {
    var v = new vector<int>.initialize();
    v.add(10);
    v.add(20);
    span<int*>*% s = v.to_span();
    printf("%d %d\n", s[0], s[1]);
    return 0;
}
