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
    
    int yyy[3] = {
        4, 5, 6
    };
    
    int xyz[3][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };
    
    aaa.aaa = 123;
    aaa.ccc.bbb = 567;
    printf("%d\n", aaa.ccc.bbb);
    
    3.times {
        printf("%d %d\n", aaa.aaa, aaa.ccc.bbb);
        printf("%d %d %d\n", xxx[0], xxx[1], xxx[2]);
        printf("%d %d %d\n", yyy[0], yyy[1], yyy[2]);
        printf("%d %d %d\n", xyz[1][0], xyz[1][1], xyz[1][2]);
        xyz[1][0] = 777;
    }
    
    printf("%d\n", xyz[1][0]);
    
    return 0;
}
