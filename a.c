#include <neo-c.h>

extern int fun(int x, int y);

int main(int argc, char** argv)
{
    fun(1,2).to_string().puts();
    
    return 0;
}
