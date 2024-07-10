#include <neo-c.h>

class sData
{
    string data;
    new() {
        self.data = string("X");
    }
    
    void user_finalize() {
        puts("A");
    }
};

int main(int argc, char** argv)
{
    sData data;
    
    return 0;
}
