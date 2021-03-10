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
    var li6 = list!("aaa", "bbb", "ccc");

    li6.delete_range(0,1);

    xassert("list test1", li6.equals(list!("bbb", "ccc")));

    li6 = list!("aaa");

    li6.delete_range(0,1);

    xassert("list test2", li6.length() == 0);

    li6 = list!("aaa", "bbb");

    li6.delete_range(0,1);

    xassert("list test3", li6.equals(list!("bbb")));

    var li7 = list!("aaa", "bbb", "ccc", "ddd", "eee");

    li7.delete_range(1,3);

    xassert("list test4", li7.equals(list!("aaa", "ddd", "eee")));

    var li8 = list!("aaa");

    li8.delete_range(0,2);

    xassert("list test5", li8.length() == 0);

    var li9 = list!("aaa","bbb");

    li9.delete_range(1,2);

    xassert("list test6", li9.equals(list!("aaa")));

    var li10 = list!("aaa","bbb");

    li10.delete_range(0,1);

    xassert("list test7", li10.equals(list!("bbb")));

    var li11 = list!("aaa","bbb");

    li11.delete_range(0,-1);

    xassert("list test8", li11.length() == 0);

    var li12 = new list<int>.initialize();

    0
}
