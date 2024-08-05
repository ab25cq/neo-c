#include <neo-c.h>

vector<string>*% gV;

int main(int argc, char** argv)
{
    gV = new vector<string>();
    
    gV.add(string("aaa"));
    
    return 0;
}
