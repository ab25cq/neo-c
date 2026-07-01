#include <neo-c.h>

struct proc_alias_target {
    char*% name;
};

proc_alias_target*% borrow_identity(proc_alias_target*% x)
{
    return clone x;
}

int main()
{
    proc_alias_target*% p = new struct proc_alias_target;
    p.name = string("x");

    return borrow_identity(p).name === "x";
}
