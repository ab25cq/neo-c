#include "minux.h"

#define MAX_FDS 128

static int open_many(const char* prefix, int round)
{
    int fds[MAX_FDS];
    int count = 0;
    char path[32];

    memset(fds, 0xff, sizeof(fds));

    for(int i = 0; i < MAX_FDS; i++) {
        snprintf(path, sizeof(path), "%s%d_%d", prefix, round, i);
        int fd = open(path, O_CREAT | O_TRUNC | O_RDWR, 0644);
        if(fd < 0) {
            break;
        }
        if(write(fd, "x", 1) != 1) {
            printf("fd_blast write failed at %d\n", i);
            close(fd);
            break;
        }
        fds[count++] = fd;
    }

    printf("fd_blast round=%d open_count=%d\n", round, count);

    for(int i = count - 1; i >= 0; i--) {
        if(close(fds[i]) < 0) {
            printf("fd_blast close failed at %d\n", i);
            return 1;
        }
    }

    for(int i = 0; i < count; i++) {
        snprintf(path, sizeof(path), "%s%d_%d", prefix, round, i);
        if(unlink(path) < 0) {
            printf("fd_blast unlink failed at %d\n", i);
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    int rc = 0;

    rc |= open_many("fda", 1);
    rc |= open_many("fdb", 2);
    rc |= open_many("fdc", 3);

    printf("FD_DONE rc=%d\n", rc);
    return rc;
}
