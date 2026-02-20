// C11 declaration constraint diagnostic: file-scope register is invalid
register int g;

int main(void)
{
    return g;
}
