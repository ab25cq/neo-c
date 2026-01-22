#include <neo-c.h>

string funX() { return s"AAA"; }

struct sData<X,Y>
{
    X aaa;
    Y bbb;
};

impl sData<X,Y>
{
    template <R, T, V> R fun(sData<X,Y>* self, R a, T b, V c)
    {
        V d = funX();
        X yyy = 123;
        Y xxx = s"CCC";
        return s"BBB";
    }
}

int main(int argc, char** argv)
{
    var data = new sData<char*,string>;
    
    string b = data.fun(s"AAA", 1.1, s"AAA");
    
    printf("b %s\n", b);

    return 0;
}

