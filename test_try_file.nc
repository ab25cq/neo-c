#include <neo-c.h>

Result<FILE*> xfopen2(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);
    
    if(f == NULL) {
        return t(f, true);
    }
    
    return t(f, false);
}

Result<int> read_first_byte(const char* file_name)
{
    FILE* f = xfopen2(file_name, "r")??;
    int ch = fgetc(f);
    
    f.fclose();
    
    if(ch == EOF) {
        return t(0, true);
    }
    
    return t(ch, false);
}

int main()
{
    var ok = read_first_byte("README.md");
    var err = read_first_byte("no-such-file.txt");
    
    if(ok.is_ok()) {
        printf("%d\n", ok.unwrap());
    }
    if(err.is_err()) {
        puts("ERR");
    }
    
    return 0;
}
