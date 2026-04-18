#include <neo-c.h>

struct proc_alias_target {
    char*% name;
};

Result<proc_alias_target*%> make_value(proc_alias_target*% x)
{
    return t(x, false);
}

template<T> T unwrap_value(Result<T> r)
{
    return r.unwrap();
}

int main()
{
    proc_alias_target*% p = new struct proc_alias_target;
    p.name = string("x");

    proc_alias_target*% q = unwrap_value(make_value(p));

    return q.name === "x";
}
