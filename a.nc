#include <neo-c.h>

int main(int argc, char** argv) {
    var li = v[2,5,4,1];
    
    var li2 = li.sort();
    
    li2.to_string().puts();
    
    li2.add(12);
    
    li2.to_string().puts();
    
    li2.replace(0, 7);
    
    li2.item(0, -1).to_string().puts();
    
    li2.sum().to_string().puts();
    
    return 0;
}

