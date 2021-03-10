#include <neo-c.h>
#include <stdio.h>

#include "HelloWorld5.h"
#include "HelloWorld6.h"

struct StructData1 version 3
{
    int c;
};

impl StructData1
{
    initialize() {
        self.a = 1;
        self.b = 2;
        self.c = 3;
    }
    void fun(StructData1* self) version 3 {
        inherit(self);
        printf("c %d\n", self.c);
    }
}

int main()
{
    var data = new StructData1.initialize();

    data.fun();

    0
}
