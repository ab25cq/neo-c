#include <neo-c.h>

int main(int argc, char** argv)
{
    char* a = "AAA";
    
    char b[] = "AAA";
    
    var l = new list<char*>();
    
    l.add(b);
    
    l.remove(b, by_pointer:true).to_string().puts();

    return 0;
}

