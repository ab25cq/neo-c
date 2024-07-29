#define exch(x, y, t) (((t) = x), ((x) = (y)), ((y) = (t)))

int main(int argc, char** argv)
{
using c
{
    exch(1, 1, 1)
}
    
    return 0;
}
