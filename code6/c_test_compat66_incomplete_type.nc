// expected compile failure: incomplete type object
struct S;
struct S g_bad;

int main(void)
{
    return 0;
}
