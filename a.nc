#include <neo-c.h>

struct sData
{
    int a;
    int b;
    int c;
};


int main(int argc, char** argv)
{
    int x[3] = { 1, 2, 3 };
    
    string y = s"ABC";
    string& p = ref borrow &y;
    
    printf("%s\n", *p);
    
    return 0;
}
