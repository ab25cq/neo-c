#include <neo-c.h>

int helper(int n)
{
    int z = n - n;
    return 100 / z;
}

int main(int argc, char** argv)
{
    if(argc > 1) {
        return helper(argc);
    }
    puts("native backtrace smoke");
    return 0;
}
