#include <neo-c.h>

struct proc_alias_target {
    char*% name;
};

typedef struct proc_alias_target* proc_alias_t;

int main()
{
    proc_alias_t% p = new struct proc_alias_target;
    
    p.name = string("x");
    
    proc_alias_t% q = clone p;
    
    return q != null;
}
