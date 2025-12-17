#include <neo-c.h>

int main(int argc, char** argv)
{
    [1,2,3,4,5].add(6).add(3).add(2).add(10).add(9).sort().map { it.to_string() }.join("\n").to_string().puts();
    
    return 0;
}
