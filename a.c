#include <neo-c.h>

int (*optree[])(int, float, double);

int main(int argc, char** argv)
{
    optree[1](111, 1.1f, 1.2);
    
    return 0;
}
