#include <neo-c.h>

struct proc_alias_target {
    char*% name;
};

int main()
{
    proc_alias_target*% p = new struct proc_alias_target;
    p.name = string("x");

    var xs = new vector<proc_alias_target*%>.initialize();
    xs.add(p);

    proc_alias_target* q = xs.item(0, null);

    return q.name === "x";
}
