#include <neo-c.h>

FILE*, bool xfopen(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);
    
    if(f == NULL) {
        return t(f, true);
    }
    
    return t(f, false);
}

int main(int argc, char** argv)
{
    xfopen("01main.nc", mode:"r").unwrap().fclose();
    xfopen("1main.nc", mode:"r").catch {
        puts("ERR");
        return 1;
    }.fclose();
    
    return 0;
}

