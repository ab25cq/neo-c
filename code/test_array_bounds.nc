#include <neo-c.h>

static int next_index(int* counter, int value)
{
    (*counter)++;
    return value;
}

int main(int argc, char** argv)
{
    int xs[3] = { 10, 20, 30 };
    int grid[2][2] = {
        { 1, 2 },
        { 3, 4 },
    };

    if(argc > 1 && argv[1] === "load") {
        return xs[3];
    }
    if(argc > 1 && argv[1] === "load-negative") {
        return xs[-1];
    }
    if(argc > 1 && argv[1] === "store") {
        xs[3] = 99;
        return 0;
    }
    if(argc > 1 && argv[1] === "store-negative") {
        xs[-1] = 99;
        return 0;
    }
    if(argc > 1 && argv[1] === "multi-load") {
        int n = grid[1][2];
        return n;
    }
    if(argc > 1 && argv[1] === "multi-store") {
        grid[2][0] = 99;
        return 0;
    }

    int counter = 0;
    xassert("array load", xs[2] == 30);

    xs[next_index(&counter, 1)] = 25;
    xassert("array store", xs[1] == 25);
    xassert("array store index evaluated once", counter == 1);

    int value = xs[next_index(&counter, 1)];
    xassert("array load with index expression", value == 25);
    xassert("array load index evaluated once", counter == 2);

    grid[1][1] = 44;
    xassert("multi array store", grid[1][1] == 44);
    xassert("multi array load", grid[0][1] == 2);

    int* p = xs;
    xassert("pointer access remains unchecked normal path", p[2] == 30);

    return 0;
}
