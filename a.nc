#include <neo-c.h>

int main(int argc, char** argv)
{
    vector<int>*% v = new vector<int>();
    
    v.add(2);
    v.add(3);
    v.add(1);
    
    var v2 = v.sort();
    
    for(int i=0; i<v.length(); i++) {
        printf("%d\n", v2.item(i , -1));
    }
    
    return 0;
}
