#include <neo-c.h>

void fun() {
    stackframe();
    char* a = borrow new char[3];
}

void fun2() {
    fun();
}


int main(int argc, char** argv) {
    fun2();
    
    return 0;
}

