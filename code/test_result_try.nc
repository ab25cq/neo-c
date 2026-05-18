#include <neo-c.h>

Result<int>*% get_int(bool ok)
{
    if(ok) {
        return new Result<int>.Some(123);
    }

    return new Result<int>.None();
}

Result<FILE*>*% xfopen2(const char* file_name, const char* mode)
{
    FILE* f = fopen(file_name, mode);

    if(f == NULL) {
        return new Result<FILE*>.None();
    }

    return new Result<FILE*>.Some(f);
}

Result<string>*% make_string(bool ok)
{
    if(ok) {
        return new Result<string>.Some(string("abc"));
    }

    return new Result<string>.None();
}

Result<int>*% plus_one(bool ok)
{
    int n = get_int(ok)??;
    return new Result<int>.Some(n + 1);
}

Result<int>*% read_first_byte(const char* file_name)
{
    FILE* f = xfopen2(file_name, "r")??;
    int ch = fgetc(f);

    f.fclose();

    if(ch == EOF) {
        return new Result<int>.None();
    }

    return new Result<int>.Some(ch);
}

Result<int>*% string_len_plus_one(bool ok)
{
    string s = make_string(ok)??;
    int len = strlen(s);

    return new Result<int>.Some(len + 1);
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
