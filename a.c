#include <neo-c.h>


int main()
{
    list<string>*% li = new list<string>.initialize();

    li.push_back(string("AAA"));
    li.push_back(string("BBB"));
    li.push_back(string("CCC"));

/*
    li.each {
        puts(it);
    }
*/
    li.sublist(0,1);

    int a = 0;
    int b = 1;
    int c = b/a;

    return 0;
}
