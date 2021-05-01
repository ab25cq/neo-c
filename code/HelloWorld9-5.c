#include <neo-c.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>

inline bool funX(int a, int b)
{
    return a == b;
}

void puts2(char* str)
{
    puts(str);
}

struct StructTest {
    string abc;
};

struct ListTest {
    list<int>* li;
};


struct win {
    list<char*>* texts;
};

impl win {
    initialize() {
        self.texts = borrow new list<char*>.initialize();

        self.texts.push_back(string("aaa"));
    }

    finalize() {
        delete self.texts;
    }
}

struct TestStruct {
    int a;
    char b;
    long c;
    int d;
};

int main()
{
    var v9 = vec!(1, 2);

    var v10 = clone v9;

    xassert("clone test10", v10.equals(vec!(1, 2)));

    var li6 = list!("aaa", "bbb");

    var li7 = clone li6;

    xassert("clone test11", li7.equals(list!("aaa", "bbb")));

    var li8 = list!(1, 2);

    var li9 = clone li8;

    xassert("clone test12", li9.equals(list!(1, 2)));

    var map1 = new map<char*, int>.initialize();

    map1.insert("aaa", 1);
    map1.insert("bbb", 2);
    map1.insert("ccc", 3);

    map1.each {
        printf("map1 %s %d\n", it, it2);
    }

    xassert("map test", map1.at("aaa", -1) == 1);

    xassert("map test2", map1.find("bbb"));

    xassert("map test4", map!("AAA":1, "BBB":2).equals(map!("AAA":1, "BBB":2)));

    var map2 = new map<char*, int>.initialize();

    map2.insert("aaa", 1);
    map2.insert("bbb", 2);
    map2.insert("ccc", 3);

    xassert("map test3", map1.equals(map2));

    var map3 = map!(string("aaa"):1, string("bbb"):2);

    var map4 = clone map3;

    xassert("clone test5", map4.equals(map!(string("aaa"):1, string("bbb"):2)));

    var map5 = map!(string("aaa"):string("a"), string("bbb"):string("b"));

/*
    var map6 = clone map5;

    xassert("clone test6", map6.equals(map!(string("aaa"):string("a"), string("bbb"):string("b"))));

    var map7 = map!("aaa":string("a"), "bbb":string("b"));

    var map8 = clone map7;

    xassert("clone test7", map8.equals(map!("aaa":string("a"), "bbb":string("b"))));
*/

    var map9 = map!("aaa":1, "bbb":2);

    var map10 = clone map9;

    xassert("clone test8", map10.equals(map!("aaa":1, "bbb":2)));

    0
}

