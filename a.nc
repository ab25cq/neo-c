#include <neo-c.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    int fd = open("AAA", O_RDONLY).expect {
        fprintf(stderr, "open error\n");
        exit(1);
    }

    printf("%d\n", fd);

    close(fd);
    
    exit(0);
}
