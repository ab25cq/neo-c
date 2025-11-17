#include <stdio.h>

static int dot3(const int x[restrict static 3], const int y[restrict static 3]) {
    int s = 0;
    for (int i = 0; i < 3; i++) s += x[i] * y[i];
    return s;
}

int main() {
    enum Mode { MODE_NONE, MODE_ONE = 4, MODE_TWO };
    
    return 0;
}
