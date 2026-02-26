#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char** argv) 
{
    struct stat stat_;
    
    stat("01main.nc", &stat_);
    
    printf("%ld\n", stat_.st_size);
                                    
    return 0;
}

