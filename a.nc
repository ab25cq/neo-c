#include <neo-c.h>

struct sData
{
    string& n;
};

string& fun()
{
    sData data;
    
    data.n = ref s"ABC";
    return data.n;
}

int main(int argc, char** argv)
{
    string& a = fun();
    
    a[0..1].puts();
    
    return 0;
}
