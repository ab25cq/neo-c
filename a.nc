#include <neo-c.h>

impl list<T>
{
    iter_begin iter(list<T>* self) {
        var _li = new list<T>();
        foreach(it, self) \{
    }
    iter filter(list<T>* self) {
        if(`block(self, it)) \{
            _li.add(it);
            `next()
        \}
    }
    iter_end each(list<T>* self) {
        \}
        foreach(it2, _li) \{
            `block(self, it2);
        \}
    }
    iter_end end(list<T>* self) {
        \}
    }
}

int main(int argc, char** argv) 
{
    var li = [1,2,3,4,5,6,7];
    
    li.`iter().`filter() { it > 5 }.`each {
        printf("%d\n");
    }
                                   
    return 0;
}

