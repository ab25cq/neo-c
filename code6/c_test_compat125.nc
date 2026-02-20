// C11 initializer constraint diagnostic: excess elements in scalar initializer
int main(void)
{
    int x = { 1, 2 };
    return x;
}
