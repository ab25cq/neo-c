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

void test_skip_while()
{
    var c = [1,2,3,2].`iter().`skip_while { it < 3 }.`collect();
    xassert("iter skip_while", c.length() == 2 && c[0] == 3 && c[1] == 2);
}

void test_inspect()
{
    int sum = 0;
    var d = make_list123().`iter().`inspect { sum += it; }.`collect();
    xassert("iter inspect collect", d.length() == 3 && d[0] == 1 && d[1] == 2 && d[2] == 3);
    xassert("iter inspect side effect", sum == 6);
}

void test_for_each()
{
    int sum = 0;
    [1,2,3].`iter().`for_each {
        sum += it;
    };
    xassert("iter for_each", sum == 6);
}

void test_cloned()
{
    var d = [1,2,3].`iter().`cloned().`map { it + 10 }.`collect();
    xassert("iter cloned", d.length() == 3 && d[0] == 11 && d[1] == 12 && d[2] == 13);
}

void test_copied()
{
    var d = [1,2,3].`iter().`copied().`map { it + 20 }.`collect();
    xassert("iter copied", d.length() == 3 && d[0] == 21 && d[1] == 22 && d[2] == 23);
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

void test_map_skip_while()
{
    var e = [1:10, 2:20, 3:30].`iter().`skip_while { it < 3 }.`map { it + 100 }.`collect();
    xassert("iter map skip_while", e.length() == 1 && e[0] == 103);
}

void test_map_for_each()
{
    int sum = 0;
    [1:10, 2:20, 3:30].`iter().`for_each {
        sum += it;
    };
    xassert("iter map for_each", sum == 6);
}

void test_map_cloned()
{
    var e = [1:10, 2:20].`iter().`cloned().`map { it + 10 }.`collect();
    xassert("iter map cloned", e.length() == 2 && e[0] == 11 && e[1] == 12);
}

void test_map_copied()
{
    var e = [1:10, 2:20].`iter().`copied().`map { it + 20 }.`collect();
    xassert("iter map copied", e.length() == 2 && e[0] == 21 && e[1] == 22);
}

void test_collection_terminals()
{
    int count = [1,2,3,4,5].filter { it % 2 == 0 }.count();
    bool any = [1,2,3].any { it == 2 };
    bool all = [1,2,3].all { it < 4 };
    int pos = [3,1,4].position(-1) { it == 1 };
    int found = [3,1,4].find_value(-1) { it > 3 };
    int nth = [10,20,30].nth(1, -1);
    int last = [10,20,30].last(-1);
    int sum = [1,2,3,4].sum();
    int product = [1,2,3,4].product();
    int min = [3,1,4,2].min(-1);
    int max = [3,1,4,2].max(-1);
    
    xassert("list count", count == 2);
    xassert("list any", any == true);
    xassert("list all", all == true);
    xassert("list position", pos == 1);
    xassert("list find_value", found == 4);
    xassert("list nth", nth == 20);
    xassert("list last", last == 30);
    xassert("list sum", sum == 10);
    xassert("list product", product == 24);
    xassert("list min", min == 1);
    xassert("list max", max == 4);
}

void test_collection_terminal_defaults()
{
    var empty = new list<int>();
    
    xassert("list any empty", empty.any { it == 1 } == false);
    xassert("list all empty", empty.all { it == 1 } == true);
    xassert("list position default", empty.position(-1) { it == 1 } == -1);
    xassert("list find_value default", empty.find_value(-1) { it == 1 } == -1);
    xassert("list nth negative", [10,20,30].nth(-1, -1) == 30);
    xassert("list nth default", [10,20,30].nth(10, -1) == -1);
    xassert("list last default", empty.last(-1) == -1);
    xassert("list sum empty", empty.sum() == 0);
    xassert("list product empty", empty.product() == 1);
    xassert("list min default", empty.min(-1) == -1);
    xassert("list max default", empty.max(-1) == -1);
}

void test_vector_terminals()
{
    var vec = [1,2,3,4].to_vector();
    var empty = new vector<int>.initialize();
    
    xassert("vector count", vec.count() == 4);
    xassert("vector any", vec.any { it == 3 } == true);
    xassert("vector all", vec.all { it > 0 } == true);
    xassert("vector position", vec.position(-1) { it == 3 } == 2);
    xassert("vector find_value", vec.find_value(-1) { it % 2 == 0 } == 2);
    xassert("vector nth", vec.nth(1, -1) == 2);
    xassert("vector nth negative", vec.nth(-1, -1) == 4);
    xassert("vector last", vec.last(-1) == 4);
    xassert("vector sum", vec.sum() == 10);
    xassert("vector product", vec.product() == 24);
    xassert("vector min", vec.min(-1) == 1);
    xassert("vector max", vec.max(-1) == 4);
    xassert("vector default empty", empty.position(-1) { it == 1 } == -1 && empty.last(-1) == -1);
}

void test_map_terminals()
{
    var m = [3:30, 1:10, 4:40];
    var empty = new map<int,int>.initialize();
    
    xassert("map count", m.count() == 3);
    xassert("map any", m.any { it == 1 } == true);
    xassert("map all", m.all { it > 0 } == true);
    xassert("map position", m.position(-1) { it == 1 } == 1);
    xassert("map find_value", m.find_value(-1) { it > 3 } == 4);
    xassert("map nth", m.nth(1, -1) == 1);
    xassert("map nth negative", m.nth(-1, -1) == 4);
    xassert("map last", m.last(-1) == 4);
    xassert("map sum", m.sum() == 8);
    xassert("map product", m.product() == 12);
    xassert("map min", m.min(-1) == 1);
    xassert("map max", m.max(-1) == 4);
    xassert("map default empty", empty.position(-1) { it == 1 } == -1 && empty.last(-1) == -1);
}

int main(int argc, char** argv)
{
    test_skip();
    test_take_while();
    test_step_by();
    test_skip_while();
    test_inspect();
    test_for_each();
    test_cloned();
    test_copied();
    test_literal_iter();
    test_map_literal_iter();
    test_map_skip_while();
    test_map_for_each();
    test_map_cloned();
    test_map_copied();
    test_collection_terminals();
    test_collection_terminal_defaults();
    test_vector_terminals();
    test_map_terminals();
    
    return 0;
}
