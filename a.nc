//#include <neo-c.h>

using safe;

struct data {
    int a;
};

int main(int argc, char** argv)
{
    char a[12];
    
    char* b = a;
    
    struct data* d = b;
    
    return 0;
}

