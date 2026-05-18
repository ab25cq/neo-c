#include <neo-c.h>

Result<int>*% get_ok()
{
    return new Result<int>.Some(123);
}

Result<int>*% get_ok2()
{
    return new Result<int>.Some(321);
}

int main(int argc, char** argv)
{
    xassert("result bang unwrap macro", get_ok()! == 123);
    xassert("result bang unwrap macro", get_ok2()! == 321);
    
    return 0;
}
