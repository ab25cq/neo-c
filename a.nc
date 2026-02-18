#include <neo-c.h>

struct sData
{
    vector<int>& n;
};

vector<int>& fun()
{
    sData data;
    
    data.n = ref v[1,2,3,4,5];
    return data.n;
}

int main(int argc, char** argv)
{
    vector<int>& a = fun();
    
    a[0..2].to_string().puts();
    
    return 0;
}
