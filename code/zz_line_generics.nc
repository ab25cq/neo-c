#include <neo-c.h>

impl list<T>
{
    int bad_generics()
    {
        return missing_generics_value;
    }
}

int main()
{
    var li = [1,2,3];
    return li.bad_generics();
}
