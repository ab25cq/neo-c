#include <neo-c.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    var tu = tuple!(1,2,string("str"));

    xassert("tuple test", tu.equals(tuple!(1, 2, string("str"))));

    var sub_str = string("ABC").substring(0, 1);

    xassert("string test", strcmp(sub_str, "A") == 0);

    var wi = new win.initialize();

    printf("%s\n", wi.texts.item(0, null));

    var v4 = new vector<string>.initialize_with_values(3, string("aaa"));

    v4.each {
        printf("%d %s\n", it2, it);
    }

    vec!(string("aaa"), string("aaa"), string("aaa")).each {
        printf("%d %s\n", it2 , it);
    }

    xassert("vector test", v4.equals(vec!(string("aaa"), string("aaa"), string("aaa"))));

    var str2 = string("XYZ");

    var str3 = clone str2;

    xassert("clone test", str3.equals(str2));

    var data = new TestStruct;

    data.a = 123;
    data.b = 245;
    data.c = 111;
    data.d = 222;

    var data2 = clone data;

    xassert("clone test2", data2.a == 123 && data2.b == 245 && data2.c == 111 && data2.d == 222);

    var v5 = vec!(string("aaa"), string("bbb"));

    var v6 = clone v5;

    xassert("clone test3", v6.equals(vec!(string("aaa"), string("bbb"))));

    var li4 = list!(string("aaa"), string("bbb"));

    0
}

