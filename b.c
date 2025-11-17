#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv)
{
    _Static_assert(__builtin_types_compatible_p(char*, signed int),
                   "int and signed int should be compatible");
    
    return 0;
}
