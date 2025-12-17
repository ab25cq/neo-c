#include <neo-c.h>

int main(int argc, char** argv)
{
    struct {
        int aaa;
        
        struct {
            int bbb;
        } ccc;
    } aaa;
    
    const int xxx[] = {
        1, 2, 3
    };
    
    aaa.aaa = 123;
    aaa.ccc.bbb = 567;
    printf("%d\n", aaa.ccc.bbb);
    
    3.times {
        printf("%d %d\n", aaa.aaa, aaa.ccc.bbb);
        printf("%d %d %d\n", xxx[0], xxx[1], xxx[2]);
    }
    
    return 0;
}
