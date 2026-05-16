#include <neo-c.h>

RESULT(int) get_int(bool ok)
{
    if(ok) {
        return SOME(10);
    }
    
    return NONE(0);
}

int ignore_error(bool ok)
{
    int n = get_int(ok).catch {
        Value.v1 = 77;
    };
    
    return n + 1;
}

int main()
{
    xassert("ignore result ok", ignore_error(true) == 11);
    xassert("ignore result err", ignore_error(false) == 78);
    
    return 0;
}
