#include <neo-c.h>


int main()
{
    list<string>*% li = new list<string>.initialize();

    li.push_back(string("AAA"));
    li.push_back(string("BBB"));
    li.push_back(string("CCC"));

    li.sublist(0,1).each {
        puts(it);
    }

    return 0;
}
