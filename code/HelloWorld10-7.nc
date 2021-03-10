#include <neo-c.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>

struct StructData {
    string str;
    char* p;
    int sline;
};

int main()
{
    var li6 = list!(string("ccc"), string("aaa"), string("bbb"));

    var li7 = li6.sort();

    xassert("sort", li7.equals(list!(string("aaa"), string("bbb"), string("ccc"))));

    var li8 = list!("ccc", "aaa", "bbb", "ddd", "fff", "eee");

    var li9 = li8.sort();

    xassert("sort", li9.equals(list!("aaa", "bbb", "ccc", "ddd", "eee", "fff")));

    var li10 = list!("fff", "fff", "aaa", "aaa", "aaa");

    var li11 = li10.uniq();

    xassert("uniq", li11.equals(list!("fff", "aaa")));

    var li12 = li8.sort_block {
        if(true) {
            var b = string(it).substring(0, 2);
            if(true) {
                var b = string(it).substring(0, 2);
                if(true) {
                    var b = string(it).substring(0, 2);
                    if(true) {
                        var b = string(it).substring(0, 2);
                        if(true) {
                            var b = string(it).substring(0, 2);
                            return 1;
                        }

                        var a = string(it).substring(0, 2);
                    }

                    var a = string(it).substring(0, 2);
                }

                var a = string(it).substring(0, 2);
            }

            var a = string(it).substring(0, 2);
        }

        var a = string(it).substring(0, 2);

        return strcmp(it, it2) != 0;
    }

    var data = new StructData;

    data.str = string("ABC");
    data.p = data.str;
    data.sline = 0;

    while(*data.p == ' ' || *data.p == '\t' || (*data.p == '\n' && data.sline++)) {
        data.p++;
    }
    
    var str2 = string("ABCABC");
    
    xassert("rindex_regex test", str2.rindex_regex(regex!("B"), -1) == 4);
    
    var li13 = list!("AAA", "ABC", "DEF");
    
    var li14 = li13.filter { it[0] == 'A' };
    
    xassert("list filter test", li14.equals(list!("AAA", "ABC")));

    var axa = 1,2;

    xassert("comman operator", axa == 2);

    var axa2 = __extension__ (1,2);

    xassert("__extension__ () operator", axa2 == 2);

    var axa3 = 1;

    if(true) axa3 = 2;

    xassert("if one line", axa3 ==2);
    
    return 0;
}
