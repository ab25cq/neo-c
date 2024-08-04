#include <neo-c.h>

int main(int argc, char** argv)
{
    vector<int>*% v = new vector<int>();
    
    v.add(7);
    v.add(3);
    v.add(1);
    
    var v2 = v.sort();
    
    foreach(it, v2) {
        printf("%d\n", it);
    }
    
    return 0;
}
