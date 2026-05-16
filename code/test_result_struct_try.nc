#include <neo-c.h>

typedef struct Point {
    int x;
    int y;
} Point;

RESULT(Point) make_point(bool ok)
{
    if(ok) {
        Point p = { .x = 10, .y = 32 };
        return t(p, false);
    }
    
    Point p = { .x = 0, .y = 0 };
    return t(p, true);
}

RESULT(int) point_sum_plus_one(bool ok)
{
    Point p = make_point(ok)??;
    
    return t(p.x + p.y + 1, false);
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
