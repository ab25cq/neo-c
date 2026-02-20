// C11 declaration constraint diagnostic: duplicate enumerator names are invalid
enum E {
    A = 1,
    A = 2
};

int main(void)
{
    return 131;
}
