#include <neo-c.h>

impl list<T>
{
    iter filter(list<T>* self) {
        var _li = new list<T>();
        foreach(it, self) \{
            bool result = `block();
            
            if(result) \{
                _li.add(it);
            \}
        \}
    }
    iter_end each(list<T>* self) {
        foreach(it, _li) \{
            `block();
        \}
    }
    iter_end end(list<T>* self) {
    }
}

int main(int argc, char** argv) 
{
    var li = [1,2,3,4,5,6,7];
    
    li.`filter() { it > 5 }.`each {
        printf("%d\n", it);
    }
                                   
    return 0;
}

