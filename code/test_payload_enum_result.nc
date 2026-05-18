#include <neo-c.h>

typedef struct Point {
    int x;
    int y;
} Point;

enum Result<T, E> {
    Ok(T),
    Err(E),
};

Result<int, string>*% parse_digit(char c)
{
    if(c >= '0' && c <= '9') {
        return new Result<int, string>.Ok((int)(c - '0'));
    }

    return new Result<int, string>.Err(string("not digit"));
}

Result<int, string>*% add_digits(char left, char right)
{
    int n1 = parse_digit(left)??;
    int n2 = parse_digit(right)??;

    return new Result<int, string>.Ok(n1 + n2);
}

Result<Point, string>*% make_point(char x, char y)
{
    int px = parse_digit(x)??;
    int py = parse_digit(y)??;
    Point point = { .x = px, .y = py };

    return new Result<Point, string>.Ok(point);
}

Result<string, string>*% make_word(bool ok)
{
    if(ok) {
        return new Result<string, string>.Ok(string("neo"));
    }

    return new Result<string, string>.Err(string("missing word"));
}

Result<int, string>*% word_len(bool ok)
{
    string word = make_word(ok)??;
    return new Result<int, string>.Ok(strlen(word));
}

int main()
{
    var direct_ok = parse_digit('7');
    xassert("payload Result direct ok", direct_ok.is_Ok() && direct_ok.get_Ok() == 7);

    var direct_err = parse_digit('x');
    xassert("payload Result direct err", direct_err.is_Err() && direct_err.get_Err().equals("not digit"));

    var sum_ok = add_digits('2', '5');
    xassert("payload Result try sum ok", sum_ok.is_Ok() && sum_ok.get_Ok() == 7);

    var sum_err = add_digits('2', 'x');
    xassert("payload Result try sum err", sum_err.is_Err() && sum_err.get_Err().equals("not digit"));

    var point_ok = make_point('3', '4');
    Point point = point_ok.get_Ok();
    xassert("payload Result try struct ok", point_ok.is_Ok() && point.x == 3 && point.y == 4);

    var point_err = make_point('3', 'x');
    xassert("payload Result try struct err", point_err.is_Err() && point_err.get_Err().equals("not digit"));

    var len_ok = word_len(true);
    xassert("payload Result try heap success ok", len_ok.is_Ok() && len_ok.get_Ok() == 3);

    var len_err = word_len(false);
    xassert("payload Result try heap error propagation", len_err.is_Err() && len_err.get_Err().equals("missing word"));

    return 0;
}
