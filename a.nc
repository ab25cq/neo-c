#include <neo-c.h>

struct sData
{
    int a;
    int b;
};

int gValue;
span<int*, sData*%>*% p;

struct sData data = (struct sData) { .a=111, .b=222 };

void fun()
{
    //struct sData data = (struct sData) { .a=111, .b=222 };
   
   /*
    var data = new sData {a:111, b:222};
    p = new span<int*, sData*%>(ref data, sizeof(struct sData));
    */

    p = new span<int*, sData*%>(ref &data, sizeof(struct sData));
    
    printf("%d\n", *p);
    p++;
}

int main(int argc, char** argv)
{
    fun();
    
    printf("%d\n", *p);
    
    return 0;
}


