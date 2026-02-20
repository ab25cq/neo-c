// C11 type-compatibility diagnostic: incompatible pointer initialization
int main(void)
{
    int* p = ((void*)0);
    double* q = p;
    return q != ((void*)0);
}
