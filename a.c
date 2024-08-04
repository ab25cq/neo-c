#include <neo-c.h>

struct sData
{
    string a;
};

int main(int argc, char** argv)
{
    sData data;
    data.a = clone string("ABC");
    return 0;
}
