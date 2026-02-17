#include <neo-c.h>

struct sData {
    vector<int>*%& p;
};

void fun(vector<int>*%& p)
{
    sData data;
    
    data.p = p;
    
    data.p.add(1).add(2).add(3);
    
    data.p.to_string().puts();
}

int main(int argc, char** argv)
{
    fun(ref v[1,2,3]);
    
    return 0;
}

