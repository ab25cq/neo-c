#include <neo-c.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    void method(sData<T>* self, T data) {
    _Static_assert(__builtin_types_compatible_p(T, char*),
                   "int and signed int should be compatible");
        self.a = data;
    }
}

int main(int argc, char** argv)
{
    sData<int>*% self = new sData<int>;
    
    self.method(123);
    
    return 0;
}
