#include <neo-c.h>

struct sData<T>
{
    T aaa;
    T bbb
};

impl sData<T>
{
    template <R> R fun(sData<T>* self, T aaaa, T bbb)
    {
        R n = (int)"AAA";
        return aaaa;
    }
}

int main(int argc, char** argv)
{
    sData<int>*% data = new sData<int>;
    
    int x = data.fun(111, 222);
    
    x.to_string().puts();
    
    return 0;
}

