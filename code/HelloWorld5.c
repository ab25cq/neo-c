#include <neo-c.h>
#include <stdio.h>

struct StructData1
{
    int a;
};

impl StructData1
{
    void fun(StructData1* self) {
        printf("a %d\n", self.a);
    }
}
