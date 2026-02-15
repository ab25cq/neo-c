#include <neo-c.h>

RESULT(FILE*) xfopen(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);
    
    if(f == NULL) {
        return NONE(f);
    }
    
    return SOME(f);
}

int main(int argc, char** argv)
{
    xfopen("01main.nc", mode:"r")!.fclose();
    xfopen("1main.nc", mode:"r").catch {
        puts("ERR");
        return 1;
    }.fclose();
    
    return 0;
}
