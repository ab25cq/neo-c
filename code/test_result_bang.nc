#include <neo-c.h>

RESULT(int) get_ok()
{
    return SOME(123);
}

Result<int> get_ok2()
{
    return SOME(321);
}

int main(int argc, char** argv)
{
    xassert("result bang unwrap macro", get_ok()! == 123);
    xassert("result bang unwrap alias", get_ok2()! == 321);
    
    return 0;
}
