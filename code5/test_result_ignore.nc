#include <neo-c.h>

Result<int>*% get_int(bool ok)
{
    if(ok) {
        return new Result<int>.Some(10);
    }

    return new Result<int>.None();
}

int ignore_error(bool ok)
{
    int n = get_int(ok).catch {
        77
    };

    return n + 1;
}

int main()
{
    xassert("ignore result ok", ignore_error(true) == 11);
    xassert("ignore result err", ignore_error(false) == 78);
    
    return 0;
}
