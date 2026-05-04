#include <neo-c.h>

struct proc_alias_target {
    char*% name;
};

RESULT(proc_alias_target*%) make_value(proc_alias_target*% x)
{
    return t(x, false);
}

int main()
{
    proc_alias_target*% p = new struct proc_alias_target;
    p.name = string("x");

    proc_alias_target*% q = make_value(p).unwrap();

    return q.name === "x" ? 0 : 1;
}
