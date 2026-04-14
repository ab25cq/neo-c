#include <neo-c.h>

struct context_t {
    int x;
    int y;
};

struct proc {
    struct context_t ctx;
    int zombie;
};

int main()
{
    list<struct proc*>*% xs = new list<struct proc*>();
    struct proc* p = null;
    
    xs.remove(p);
    xs.remove(p, true);
    
    return 0;
}
