// C11 declaration constraint diagnostic: function return type shall not be function type.
int bad_func(void)(void);
int main(void)
{
    return 0;
}
