#include <neo-c.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    //vector<int>*% v1 = v[2,3,1];
    
    struct sData data;
    
    data.a = 111;
    
    int x[3] = { 111, 222, 333 };
    
    int& p = ref &x[0];
    
    printf("%d\n", *p);
    
    return 0;
}
