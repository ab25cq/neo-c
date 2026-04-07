struct A {
    enum { X = 1, Y } e;
};

struct B {
    enum { X = 1, Y } e;
};

int main(void)
{
    struct A a = { .e = X };
    struct B b = { .e = X };
    return ((int)a.e + (int)b.e) == 2 ? 0 : 1;
}
