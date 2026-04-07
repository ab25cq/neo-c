#include <neo-c.h>

Result<int> get_int(bool ok)
{
    if(ok) {
        return t(123, false);
    }
    
    return t(0, true);
}

Result<FILE*> xfopen2(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);
    
    if(f == NULL) {
        return t(f, true);
    }
    
    return t(f, false);
}

Result<string> make_string(bool ok)
{
    if(ok) {
        return t(string("abc"), false);
    }
    
    return t((string)null, true);
}

Result<int> plus_one(bool ok)
{
    int n = get_int(ok)??;
    return t(n + 1, false);
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

Result<int> string_len_plus_one(bool ok)
{
    string s = make_string(ok)??;
    int len = strlen(s);
    
    return t(len + 1, false);
}

int main()
{
    var int_ok = plus_one(true);
    var int_err = plus_one(false);
    var file_ok = read_first_byte("../README.md");
    var file_err = read_first_byte("no-such-file.txt");
    var string_ok = string_len_plus_one(true);
    var string_err = string_len_plus_one(false);
    
    xassert("try int ok", int_ok.is_ok() && int_ok.unwrap() == 124);
    xassert("try int err", int_err.is_err());
    xassert("try file ok", file_ok.is_ok() && file_ok.unwrap() > 0);
    xassert("try file err", file_err.is_err());
    xassert("try string ok", string_ok.is_ok() && string_ok.unwrap() == 4);
    xassert("try string err", string_err.is_err());
    
    return 0;
}
