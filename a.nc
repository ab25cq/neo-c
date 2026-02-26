using neo-c;

struct A;
struct B;

struct A
{
    struct B*% b;
    int x;
};

struct B
{
    struct A*% a;
    int y;
};

int main(int argc, char** argv) 
{
    struct B*% b = new B;
                                    
    return 0;
}

