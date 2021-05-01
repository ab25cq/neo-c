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
    var str = string("HELLO WORLD");

    str[0] = 'h';

    puts(str);

    var v = vec!(1,2,3);

    v.each {
        printf("%d\n", it);
    }

    var v2 = vec!("AAA", "BBB", "CCC");

    v2.each {
        printf("%s\n", it);
    }

    var v3 = vec!(string("aaa"), string("bbb"), string("ccc"));

    v3.each {
        printf("%s\n", it);
    }
    
    var li = new list<int>.initialize();

    li.push_back(0);
    li.push_back(1);

    var li2 = new list<int>.initialize();

    li2.push_back(0);
    li2.push_back(1);

    xassert("list test1", li.equals(li2));

    li.insert(1, 7);

    var liX = new list<int>.initialize();

    liX.push_back(0);
    liX.push_back(7);
    liX.push_back(1);

    xassert("list test2", li.equals(liX));
    
    var li3 = new list<string>.initialize();
    
    li3.push_back(string("aaa"));
    li3.push_back(string("bbb"));
    li3.insert(0, string("ccc"));

    var li4 = new list<string>.initialize();

    li4.push_back(string("ccc"));
    li4.push_back(string("aaa"));
    li4.push_back(string("bbb"));

    xassert("list test3", li3.equals(li4));

    li3.each {
        printf("%s\n", it);
    }

    0
}

