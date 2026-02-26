#include <sys/stat.h>

int main(int argc, char** argv) 
{
    struct stat stat_;
    
    stat("01main.nc", &stat_);
                                    
    return 0;
}

