//#include <neo-c.h>

int main(int argc, char** argv) {
    int (*aaa[3])[4];
    int a;
    int (*pa)[5] = &a; // pointer to array
    
    int a[5] = {0,1,2,3,4};

/*
    int *p = a;
    *(p+2) = 20;
*/

    int (*pa)[5] = &a; // pointer to array
    
    return 0;
}
