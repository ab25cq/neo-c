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

//    printf("%s\n", wstring("あいうえお").to_string(""));

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

    string str1 = string("ABC");

    xassert("string reverse test", str1.reverse().equals("CBA"));

    string str2 = string("ABC");

    printf("%s\n",str2.substring(2, 1));

    xassert("string reverse test2", str2.substring(2, 1).equals("B"));

    string str3 = string("ABC");

    str3.delete(-1);

    xassert("string delete test", str3.equals("AB"));

    wstring str4 = wstring("ABC");

    str4.delete(-1);

    xassert("wstring delete test", str4.equals(wstring("AB")));

    string str5 = string("A,B,C");

    var a = regex!(/,/);

    printf("a.class %s\n", class_name(a));

    xassert("string split test", str5.split(regex!(/,/)).equals(list!(string("A"), string("B"), string("C"))));
    xassert("string split test2", str5.split_char(',').equals(list!(string("A"), string("B"), string("C"))));

    var li6 = list!(string("ccc"), string("aaa"), string("bbb"));

    var li7 = li6.sort_block { return strcmp(it, it2); }

    xassert("string sort test", li7.equals(list!(string("aaa"), string("bbb"), string("ccc"))));
    
    var li8 = list!("aaa", "bbb", "ccc");
    
    xassert("list pop_front test", strcmp(li8.pop_front(null), "aaa") == 0 && strcmp(li8.pop_front(null), "bbb") == 0 && strcmp(li8.pop_front(null), "ccc") == 0 && li8.pop_front(null) == null);
    

    0
}

