#include "neo-c.h"

struct process_pages {
    char** process_kalloc_address;
    int num_process_kalloc_address;
};

int main()
{
    list<struct process_pages**>*% xs = new list<struct process_pages**>();
    struct process_pages** pages = null;
    
    xs.remove(pages);
    xs.remove(pages, true);
    
    return 0;
}
