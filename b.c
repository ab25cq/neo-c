
void memset(void* p, long n, long size);

struct __darwin_sigaltstack;

typedef struct __darwin_sigaltstack __darwin_sigaltstack;

struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack* uc_stack;
    unsigned long  int uc_mcsize;
};

struct __darwin_sigaltstack
{
    int a;
    int b;
};

typedef int* UHI;

typedef UHI* bbb;

typedef int wchar_t;

void wchar_t*::fun()
{
}

int main(int argc, char** argv)
{
    int (**row)[2];
    __darwin_sigaltstack x;
    
    int a[] = { 1, 2, 3};
    
    int* (**y)[3][2];
    
    int* (***z[3][2]);
    
    bbb* UHO;
    int (*ops[3])(int,int);
    
    return 0;
}
