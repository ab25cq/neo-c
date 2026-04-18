#include <neo-c.h>

struct proc_alias_target {
    char*% name;
};

int main()
{
    proc_alias_target*% p = new struct proc_alias_target;
    p.name = string("x");

    proc_alias_target*% q = new struct proc_alias_target;
    q.name = string("y");

    var xs = new vector<proc_alias_target*%>.initialize();
    xs.add(p);
    xs.replace(0, q);

    proc_alias_target* r = xs.nth(0, null);

    return r.name === "y";
}
