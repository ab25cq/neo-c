#include <neo-c.h>

struct process_pages {
    char** process_kalloc_address;
    int num_process_kalloc_address;
};

struct proc {
    struct process_pages** process_pages;
    int num_process_pages;
};

int main()
{
    struct proc*% p = new struct proc;
    struct proc*% q = clone p;
    
    return 0;
}
