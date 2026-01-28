#include <neo-c.h>

int main(int argc, char** argv)
{
    char buf[16];
    
    FILE* f = fopen("NOTHING", "r").elif {
        fopen("01main.c", "r")
    }
    
    int n = fread(buf, 1, 16, f);
    
    buf[n] = '\0';
    
    puts(buf);
    
    f.fclose();
    
    return 0;
}
