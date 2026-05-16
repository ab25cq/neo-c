#include <neo-c.h>

class sData
{
    int a;
    int b;
    
    int sum()
    {
        return self.a + self.b;
    }
};

class sData2 extends sData
{
    int c;
    
    int sum()
    {
        return self.a + self.b + self.c;
    }
};

int main()
{
    var data = new sData2 { a:123, b:234, c:345 };
    xassert("readme class object initializer", data.a == 123 && data.b == 234 && data.c == 345);
    xassert("readme class inherited method override", data.sum() == 702);
    
    xassert("readme string multiply", ("HO!" * 3).equals("HO!HO!HO!"));
    
    var scanned = "ABC".scan(".");
    xassert("readme scan length", scanned.length() == 3);
    xassert("readme scan item A", scanned.item(0, null).equals("A"));
    xassert("readme scan item B", scanned.item(1, null).equals("B"));
    xassert("readme scan item C", scanned.item(2, null).equals("C"));
    
    xassert("readme index_regex ignore_case label", "ABC".index_regex("b", -1, ignore_case:true) == 1);
    xassert("readme match ignore_case label", "fooBAR".match("bar", ignore_case:true));
    
    var split = "a1b2c3".split("\\d+");
    xassert("readme split length", split.length() == 3);
    xassert("readme split item a", split.item(0, null).equals("a"));
    xassert("readme split item b", split.item(1, null).equals("b"));
    xassert("readme split item c", split.item(2, null).equals("c"));
    
    xassert("readme sub", "Hello".sub("l+", "L").equals("HeLo"));
    xassert("readme sub_block", "ABCABC".sub_block("ABC") { string("X") }.equals("XX"));
    
    var digits = "123 456 789".scan_block("[0-9][0-9][0-9]") {
        it.substring(0, 1)
    };
    xassert("readme scan_block length", digits.length() == 3);
    xassert("readme scan_block item 1", digits.item(0, null).equals("1"));
    xassert("readme scan_block item 4", digits.item(1, null).equals("4"));
    xassert("readme scan_block item 7", digits.item(2, null).equals("7"));
    
    puts("OK");
    
    return 0;
}
