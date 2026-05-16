#include <neo-c.h>

struct sData
{
    int x;
    int y;
};

int main(int argc, char** argv)
{
    puts(s"HELLO WORLD" + new sData { x:111, y:222 }.to_string());
    return 0;
}

