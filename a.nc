#include <neo-c.h>

/*
/*
int, string fun()
{
    (1, s"AAA")  /* aaa */
}
*/
*/

struct sData<T>
{
    T aaa;
    T bbb;
};

extern list<int>*% gLi;
extern int fun();

int main(int argc, char** argv)
{
    fun();
    sData<int>*% data = new sData<int> { aaa:111, bbb:222 };
    
    var a = (1, s"AAA", "BBB");
    
    printf(s"\{a.v1} \{a.v2} \{a.v3} \{data}\n");
    
    return 0;
}

