#include <neo-c.h>

int main(int argc, char** argv)
{
    var li = [10,20,30];
    xassert("list normal out of range remains zero", li[100] == 0);
    
    bool list_some = false;
    int list_value = 0;
    li[1].case {
        (Value.is_Some()) {
            list_some = true;
            list_value = Value.get_Some();
        }
        else {
            list_some = false;
        }
    }
    xassert("list case some", list_some && list_value == 20);
    
    bool list_none = false;
    li[100].case {
        (Value.is_None()) {
            list_none = true;
        }
        else {
            list_none = false;
        }
    }
    xassert("list case none", list_none);
    
    var vec = [1,2,3].to_vector();
    xassert("vector normal out of range remains zero", vec[100] == 0);
    
    bool vector_some = false;
    int vector_value = 0;
    vec[-1].case {
        (Value.is_Some()) {
            vector_some = true;
            vector_value = Value.get_Some();
        }
        else {
            vector_some = false;
        }
    }
    xassert("vector case some", vector_some && vector_value == 3);
    
    bool vector_none = false;
    vec[100].case {
        (Value.is_None()) {
            vector_none = true;
        }
        else {
            vector_none = false;
        }
    }
    xassert("vector case none", vector_none);
    
    var ma = [1:10, 2:20];
    xassert("map normal missing key remains zero", ma[3] == 0);
    
    bool map_some = false;
    int map_value = 0;
    ma[2].case {
        (Value.is_Some()) {
            map_some = true;
            map_value = Value.get_Some();
        }
        else {
            map_some = false;
        }
    }
    xassert("map case some", map_some && map_value == 20);
    
    bool map_none = false;
    ma[3].case {
        (Value.is_None()) {
            map_none = true;
        }
        else {
            map_none = false;
        }
    }
    xassert("map case none", map_none);
    
    var words = [s"neo", s"c"];
    bool string_some = false;
    words[0].case {
        (Value.is_Some()) {
            string value = Value.get_Some();
            string_some = value.equals("neo");
            delete value;
        }
        else {
            string_some = false;
        }
    }
    xassert("list string case some", string_some);
    
    bool string_none = false;
    words[10].case {
        (Value.is_None()) {
            string_none = true;
        }
        else {
            string_none = false;
        }
    }
    xassert("list string case none", string_none);
    
    return 0;
}
