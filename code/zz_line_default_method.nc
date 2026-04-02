#include <neo-c.h>

impl list<T>
{
    int bad_default_method(int n = "ABC")
    {
        return n;
    }
}

int main()
{
    var li = [1,2,3];
    return li.bad_default_method();
}
