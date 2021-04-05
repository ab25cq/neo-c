#include <neo-c.h>

int main()
{
    printf("%d\n", string("ABC").index_regex(regex!("B"), -1));
    return 0;
}
