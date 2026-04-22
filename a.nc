#include <neo-c.h>

struct proc_alias_target {
    char*% name;
};

impl proc_alias_target
{
    template<T> T first_item(proc_alias_target* self, list<T>* xs, T^ default_value)
    {
        return xs.nth(0, default_value);
    }
}

int main()
{
    proc_alias_target*% p = new struct proc_alias_target;
    p.name = string("x");

    var xs = new list<proc_alias_target*%>.initialize();
    xs.add(p);
    
    proc_alias_target*% q = p.first_item(xs, null);

    //return q.name === "x";
}
