#include <neo-c.h>

typedef struct Point {
    int x;
    int y;
} Point;

Result<int>*% parse_digit(char c)
{
    if(c >= '0' && c <= '9') {
        return new Result<int>.Some((int)(c - '0'));
    }

    return new Result<int>.None();
}

Result<int>*% add_digits(char left, char right)
{
    int n1 = parse_digit(left)??;
    int n2 = parse_digit(right)??;

    return new Result<int>.Some(n1 + n2);
}

Result<Point>*% make_point(char x, char y)
{
    int px = parse_digit(x)??;
    int py = parse_digit(y)??;
    Point point = { .x = px, .y = py };

    return new Result<Point>.Some(point);
}

Result<string>*% make_word(bool ok)
{
    if(ok) {
        return new Result<string>.Some(string("neo"));
    }

    return new Result<string>.None();
}

Result<int>*% word_len(bool ok)
{
    string word = make_word(ok)??;
    return new Result<int>.Some(strlen(word));
}

int main()
{
    var direct_ok = parse_digit('7');
    xassert("payload Result direct ok", direct_ok.is_ok() && direct_ok.get_Some() == 7);

    var direct_err = parse_digit('x');
    xassert("payload Result direct none", direct_err.is_err() && direct_err.is_None());

    var sum_ok = add_digits('2', '5');
    xassert("payload Result try sum ok", sum_ok.is_ok() && sum_ok.get_Some() == 7);

    var sum_err = add_digits('2', 'x');
    xassert("payload Result try sum none", sum_err.is_err() && sum_err.is_None());

    var point_ok = make_point('3', '4');
    Point point = point_ok.get_Some();
    xassert("payload Result try struct ok", point_ok.is_ok() && point.x == 3 && point.y == 4);

    var point_err = make_point('3', 'x');
    xassert("payload Result try struct none", point_err.is_err() && point_err.is_None());

    var len_ok = word_len(true);
    xassert("payload Result try heap success ok", len_ok.is_ok() && len_ok.get_Some() == 3);

    var len_err = word_len(false);
    xassert("payload Result try heap none propagation", len_err.is_err() && len_err.is_None());

    return 0;
}
