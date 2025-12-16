#include <neo-c.h>

int main(int argc, char** argv)
{
    struct {
        int aaa;
        
        struct {
            int aaa;
            int bbb;
        } bbb;
    } aaa;
    
    aaa.aaa = 123;
    aaa.bbb.aaa = 234;
    aaa.bbb.bbb = 567;
    
    3.times {
        printf("%d %d %d\n", aaa.aaa, aaa.bbb.aaa, aaa.bbb.bbb);
    }
    
    return 0;
}
