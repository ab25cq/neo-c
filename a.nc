#include <neo-c.h>

impl list<T>
{
    iter_begin iter(list<T>* self) {
        ({
        var _li = new list<T>();
        foreach(it, `self) \{
            `next();
        \}
        _li
        })
    }
    iter filter(list<T>* self) {
        bool result = `block();
        
        if(result) \{
            `next();
        \}
    }
    iter map(list<T>* self) {
        `it = `block();
    }
    iter_end each(list<T>* self) {
        `block();
    }
    iter_end correct(list<T>* self) {
        _li.add(it);
    }
    iter_end end(list<T>* self) {
    }
}

int main(int argc, char** argv) 
{
    var li = [1,2,3,4,5,6,7];
    
    var li2 = li.`iter().`filter { it > 2 }.`correct();
    puts(li2.to_string());
                                   
    return 0;
}

