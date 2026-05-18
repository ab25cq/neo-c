#include <neo-c.h>

typedef struct Point {
    int x;
    int y;
} Point;

Result<Point>*% make_point(bool ok)
{
    if(ok) {
        Point p = { .x = 10, .y = 32 };
        return new Result<Point>.Some(p);
    }

    return new Result<Point>.None();
}

Result<int>*% point_sum_plus_one(bool ok)
{
    Point p = make_point(ok)??;

    return new Result<int>.Some(p.x + p.y + 1);
}

int main()
{
    var ok = point_sum_plus_one(true);
    var err = point_sum_plus_one(false);
    
    if(!ok.is_ok()) {
        return 1;
    }
    if(ok.unwrap() != 43) {
        return 2;
    }
    if(!err.is_err()) {
        return 3;
    }
    
    puts("OK");
    
    return 0;
}
