#include <neo-c.h>

struct sInfo
{
    string path;
};

string cursor_file()
{
    return s"AAA";
};

int main(void) {
    sInfo info;
    
    list<string>*% li = [s"AAA", s"BBB", s"CCC"];
    
    li.each {
        string path = info.path + string("/") + it;
    }
    
    return 0;
}
