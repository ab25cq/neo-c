#include <neo-c.h>

struct data {
    int a;
};

int main(int argc, char** argv)
{
    char* a = borrow new char[123];
    
    char* b = a;
    
    struct data* d = b;
    
    delete a;
    
    return 0;
}

