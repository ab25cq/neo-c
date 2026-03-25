#include <neo-c.h>

void test_list_terminals()
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

void test_list_terminal_defaults()
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
    test_list_terminals();
    test_list_terminal_defaults();
    test_vector_terminals();
    test_map_terminals();
    
    return 0;
}
