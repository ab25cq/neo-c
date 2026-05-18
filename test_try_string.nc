#include <neo-c.h>

Result<string>*% make_string(bool ok)
{
    if(ok) {
        return new Result<string>.Some(string("abc"));
    }

    return new Result<string>.None();
}

Result<int>*% string_len_plus_one(bool ok)
{
    string s = make_string(ok)??;
    int len = strlen(s);

    return new Result<int>.Some(len + 1);
}

int main()
{
    var ok = string_len_plus_one(true);
    var err = string_len_plus_one(false);
    
    if(ok.is_ok()) {
        printf("%d\n", ok.unwrap());
    }
    if(err.is_err()) {
        puts("ERR");
    }
    
    return 0;
}
