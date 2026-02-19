// C11 preprocessor: arguments adjacent to ## must not be macro-expanded before pasting.
#include <neo-c.h>

#define CAT(a,b) a##b

#define X 1
#define Y 2
#define XY 99

#define A foo
#define B bar
#define AB 77
#define foobar 123

int x = 7;

int main(void)
{
    if (CAT(X, Y) != 99) return 1;
    if (CAT(x, ) != 7) return 2;
    if (CAT(, x) != 7) return 3;
    if (CAT(A, B) != 77) return 4;
    return 0;
}
