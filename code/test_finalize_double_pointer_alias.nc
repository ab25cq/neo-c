#include <neo-c.h>

struct process_pages {
    char** process_kalloc_address;
    int num_process_kalloc_address;
};

typedef struct process_pages** process_pages_pp_t;

int main()
{
    process_pages_pp_t pages = null;
    
    return pages == null;
}
