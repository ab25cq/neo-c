#include <neo-c.h>
#include <stdio.h>

#include "HelloWorld5.h"

struct StructData1 version 2
{
    int b;
};

impl StructData1 version 2
{
    void fun(StructData1* self) {
        inherit(self);
        printf("b %d\n", self.b);
    }
}
