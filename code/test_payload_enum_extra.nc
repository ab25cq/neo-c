#include <neo-c.h>

typedef struct Point {
    int x;
    int y;
} Point;

enum Maybe<T> {
    Just(T),
    Missing,
};

enum Either<L, R> {
    Left(L),
    Right(R),
};

enum Shape {
    PointValue(Point),
    Label(string),
    Unit,
};

int main(int argc, char** argv)
{
    var int_just = new Maybe<int>.Just(77);
    xassert("payload enum generic int variant", int_just.is_Just());
    xassert("payload enum generic int getter", int_just.get_Just() == 77);
    xassert("payload enum generic negative empty", !int_just.is_Missing());

    var missing = new Maybe<int>.Missing();
    xassert("payload enum empty variant negative payload", missing.is_Missing() && !missing.is_Just());

    var str_just = new Maybe<string>.Just(string("neo"));
    xassert("payload enum generic string getter", str_just.get_Just().equals("neo"));

    var left = new Either<int, string>.Left(12);
    xassert("payload enum two generic left", left.is_Left() && !left.is_Right());
    xassert("payload enum two generic left getter", left.get_Left() == 12);

    var right = new Either<int, string>.Right(string("ok"));
    xassert("payload enum two generic right", right.is_Right() && !right.is_Left());
    xassert("payload enum two generic right getter", right.get_Right().equals("ok"));

    Point p = { .x = 3, .y = 4 };
    var shape = new Shape.PointValue(p);
    Point got = shape.get_PointValue();
    xassert("payload enum struct payload", shape.is_PointValue() && got.x == 3 && got.y == 4);

    var label = new Shape.Label(string("shape"));
    xassert("payload enum string payload", label.is_Label() && label.get_Label().equals("shape"));

    var unit = new Shape.Unit();
    xassert("payload enum empty non generic variant", unit.is_Unit() && !unit.is_Label() && !unit.is_PointValue());

    return 0;
}
