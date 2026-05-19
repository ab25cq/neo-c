#include <neo-c.h>

static int next_value(int* counter, int value)
{
    (*counter)++;
    return value;
}

int main(int argc, char** argv)
{
    if(argc > 1 && argv[1] === "div-zero") {
        return 10 / 0;
    }
    if(argc > 1 && argv[1] === "mod-zero") {
        return 10 % 0;
    }
    if(argc > 1 && argv[1] === "dynamic-div-zero") {
        int z = argc - 2;
        return 10 / z;
    }
    if(argc > 1 && argv[1] === "dynamic-mod-zero") {
        int z = argc - 2;
        return 10 % z;
    }

    int counter = 0;
    int a = 20 / next_value(&counter, 5);
    xassert("division result", a == 4);
    xassert("division rhs evaluated once", counter == 1);

    int b = 20 % next_value(&counter, 6);
    xassert("modulo result", b == 2);
    xassert("modulo rhs evaluated once", counter == 2);

    return 0;
}
