int fun(int a, int b, ...)
{
    return a;
}

struct data
{
    int a;
};

struct data2
{
    int a;
};

int main(int argc, char** argv)
{
    struct data d;
    struct data2 e;
    
    d = e;
    return 0;
}

