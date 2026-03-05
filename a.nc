#include <time.h>

struct stat
{
    unsigned long  int  st_dev  ;
    unsigned long  int  st_ino  ;
    unsigned long  int  st_nlink  ;
    unsigned int  st_mode  ;
    unsigned int  st_uid  ;
    unsigned int  st_gid  ;
    unsigned int __pad0;
    unsigned long  int  st_rdev  ;
    long  st_size  ;
    long  st_blksize  ;
    long  st_blocks  ;
    struct timespec  st_atim  ;
    struct timespec  st_mtim  ;
    struct timespec  st_ctim  ;
    long __unused[3];
};

int main(int argc, char** argv) 
{
                                   
    return 0;
}
