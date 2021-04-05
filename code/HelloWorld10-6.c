#include <neo-c.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>

struct VigWin
{
    int cursorY;
    int cursorX;

    list<list<wstring>*%>%* undo;
    list<int>%* undoCursorX;
    list<int>%* undoCursorY;
    int undoIndex;
};

impl VigWin {
    initialize() {
        self.undoCursorX = new list<int>;

        self.undoCursorX.head = null;
    }
}

template <R> void method_generics_test(R& a)
{
    printf("%ls\n", a);
}

int main()
{
    wstring wstr = wstring("ABC");

    xassert("wstring test1", wstr.length() == 3);

    xassert("wstring test2", wstr.equals(wstring("ABC")));

    //printf("%s\n", wstring("あいうえお").to_string(""));

    method_generics_test(wstr);

    var li = list!(string("aaa"), string("bbb"), string("ccc"));

    var item = li.pop_back(null);

    printf("item %s\n", class_name(item));

    xassert("list test", item.equals("ccc"));

    li.each {
        printf("%s\n", it);
    }

    var item2 = li.pop_back(null);

    printf("item2 %s\n", class_name(item2));

    xassert("list test2", item2.equals("bbb"));

    li.each {
        printf("%s\n", it);
    }

    var item3 = li.pop_back(null);

    printf("item3 %s\n", class_name(item3));

    xassert("list test3", item3.equals("aaa"));

    li.each {
        printf("%s\n", it);
    }

    var li2 = new list<wstring>.initialize();

    li2.push_back(wstring("aaa"));
    li2.push_back(wstring("bbb"));
    li2.push_back(wstring("ccc"));

    var li3 = new list<list<wstring>*%>.initialize();

    li3.push_back(clone li2);
    li3.push_back(clone li2);
    li3.push_back(clone li2);

    var li4 = new list<list<wstring>*%>.initialize();

    li4.push_back(clone li2);
    li4.push_back(clone li2);
    li4.push_back(clone li2);

    var li5 = list!("aaa", "bbb", "ccc");

    li5.delete(0);

    li5.each {
        printf("li5.item %s\n", it);
    }

    xassert("list test4", li5.equals(list!("bbb", "ccc")));

    li5.delete(0);

    xassert("list test5", li5.equals(list!("ccc")));

    li5.delete(0);

    xassert("list test6", li5.length() == 0);

    0
}

