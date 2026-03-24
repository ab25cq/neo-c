#include <neo-c.h>

list<int>* make_list12345()
{
    return [1,2,3,4,5];
}

list<int>* make_list123456()
{
    return [1,2,3,4,5,6];
}

list<int>* make_list123()
{
    return [1,2,3];
}

void test_skip()
{
    var a = make_list12345().`iter().`skip(2).`collect();
    xassert("iter skip", a.length() == 3 && a[0] == 3 && a[1] == 4 && a[2] == 5);
}

void test_take_while()
{
    var b = make_list12345().`iter().`take_while { it < 4 }.`collect();
    xassert("iter take_while", b.length() == 3 && b[0] == 1 && b[1] == 2 && b[2] == 3);
}

void test_step_by()
{
    var c = make_list123456().`iter().`step_by(2).`collect();
    xassert("iter step_by", c.length() == 3 && c[0] == 1 && c[1] == 3 && c[2] == 5);
}

void test_inspect()
{
    int sum = 0;
    var d = make_list123().`iter().`inspect { sum += it; }.`collect();
    xassert("iter inspect collect", d.length() == 3 && d[0] == 1 && d[1] == 2 && d[2] == 3);
    xassert("iter inspect side effect", sum == 6);
}

void test_literal_iter()
{
    var e = [1,2,3,4,5].`iter().`skip(2).`collect();
    xassert("iter literal source", e.length() == 3 && e[0] == 3 && e[1] == 4 && e[2] == 5);
}

void test_map_literal_iter()
{
    var e = [1:10, 2:20].`iter().`map { it + 100 }.`collect();
    xassert("iter map literal map", e.length() == 2 && e[0] == 101 && e[1] == 102);
}

int main(int argc, char** argv)
{
    test_skip();
    test_take_while();
    test_step_by();
    test_inspect();
    test_literal_iter();
    test_map_literal_iter();
    
    return 0;
}
