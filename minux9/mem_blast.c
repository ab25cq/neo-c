#include "minux.h"

#define MAX_PTRS 2048
#define BLOCK_SIZE 16384

static int alloc_phase(const char* tag)
{
    void* ptrs[MAX_PTRS];
    int count = 0;

    memset(ptrs, 0, sizeof(ptrs));

    for(int i = 0; i < MAX_PTRS; i++) {
        ptrs[i] = malloc(BLOCK_SIZE);
        if(ptrs[i] == NULL) {
            break;
        }
        memset(ptrs[i], 0x5a, BLOCK_SIZE);
        count++;
    }

    printf("mem_blast %s alloc_count=%d bytes=%d\n",
        tag, count, count * BLOCK_SIZE);

    for(int i = count - 1; i >= 0; i--) {
        free(ptrs[i]);
    }

    return count > 0 ? 0 : 1;
}

int main(void)
{
    int rc = 0;

    rc |= alloc_phase("phase1");
    rc |= alloc_phase("phase2");
    rc |= alloc_phase("phase3");

    printf("MEM_DONE rc=%d\n", rc);
    return rc;
}
