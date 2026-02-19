// C11 declaration constraint diagnostic: bit-field must have integer type
struct S {
    float x:3;
};

int main(void)
{
    struct S s = { 0.0f };
    return (int)s.x;
}
