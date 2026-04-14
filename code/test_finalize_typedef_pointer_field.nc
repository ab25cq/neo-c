#include <neo-c.h>

typedef void* pagetable_t;

struct proc {
    pagetable_t pagetable;
    char*% program;
};

int main()
{
    struct proc*% p = new struct proc;
    
    p.program = string("hello");
    
    return 0;
}
