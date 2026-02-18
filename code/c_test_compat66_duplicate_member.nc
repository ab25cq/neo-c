// expected compile failure: duplicate struct member name
struct Bad {
    int x;
    int x;
};

int main(void)
{
    return 0;
}
