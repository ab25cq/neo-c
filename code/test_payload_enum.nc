#include <neo-c.h>

enum Option<T> {
    Some(T),
    None,
};

enum Value {
    Int(int),
    Empty,
};

int main(int argc, char** argv)
{
    var some = new Option<int>.Some(123);
    xassert("payload enum generic constructor", some.is_Some());
    xassert("payload enum generic getter", some.get_Some() == 123);
    
    var none = new Option<int>.None();
    xassert("payload enum empty variant", none.is_None());
    
    var value = new Value.Int(456);
    xassert("payload enum non generic constructor", value.is_Int());
    xassert("payload enum non generic getter", value.get_Int() == 456);
    
    var empty = new Value.Empty();
    xassert("payload enum empty constructor", empty.is_Empty());
    
    return 0;
}
