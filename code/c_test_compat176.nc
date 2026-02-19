// C11 declaration constraint diagnostic: array element type shall not be function type.
int bad_arr[2](void);
int main(void)
{
    return 0;
}
