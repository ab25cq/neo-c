#include <neo-c.h>

int main()
{
    [1,2,3].`iter().`for_each {
        missing_method_block_value;
    };

    return 0;
}
