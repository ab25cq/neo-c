#include <neo-c.h>
#include <stdio.h>
#include <stdlib.h>

struct Data 
{
    int a;
};

impl Data 
{
    void fun(Data* self) {
        self.a = 1;
    }
}

struct Data version 2
{
    int b;
};

impl Data 
{
    void fun(Data* self) version 2 {
        inherit(self);
        self.b = 7;
    }
    void show(Data* self) 
    {
        printf("self.a %d self.b %d\n", self.a, self.b);
    }
}

struct Data2<T>
{
    T a;
};

impl Data2<T>
{
    void fun(Data2<T>* self) {
        self.a = 123;
    }

    void show(Data2<T>* self) {
        printf("self.a %d\n", self.a);
    }
}

struct Data2<T> version 2 
{
    T b;
};

impl Data2<T> version 2
{
    void fun(Data2<T>* self) {
        inherit(self);
        self.b = 234;
    }

    void show(Data2<T>* self) {
        inherit(self);
        printf("self.b %d\n", self.b);
    }
}

struct Data3
{
    int a;
    int b;
};

impl Data3
{
    initialize() {
        self.a = 111;
        self.b = 222;
    }

    void show(Data3* self) {
        printf("self.a %d self.b %d\n", self.a, self.b);
    }
};

struct Data3 version 2
{
    int c;
};

impl Data3 version 2
{
    initialize() {
        inherit(self);
        self.c = 333;
    }

    void show(Data3* self) {
        printf("self.a %d self.b %d self.c %d\n", self.a, self.b, self.c);
    }
}

struct Data4<T>
{
    T a;
};

impl Data4<T>
{
    initialize() {
        self.a = 123;
    }

    void show(Data4<T>* self) {
        printf("self.a %d\n", self.a);
    }
}

struct Data4<T> version 2
{
    T b;
};

impl Data4<T> version 2
{
    initialize() {
        inherit(self);
        self.b = 234;
    }

    void show(Data4<T>* self) {
        inherit(self);
        printf("self.b %d\n", self.b);
    }
}

int main()
{
    var data = new Data;
    data.fun();
    data.show();

    var data2 = new Data2<int>;
    data2.fun();
    data2.show();

    var data3 = new Data3.initialize();
    data3.show();

    var data4 = new Data4<int>.initialize();
    data4.show();

    0
}

