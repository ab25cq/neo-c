
struct Outer {
    _Alignas(8) int a;
} __attribute__((packed, align(1)));


int main(int argc, char** argv)
{
    return 0;
}
