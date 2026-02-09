/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

typedef __builtin_va_list __gnuc_va_list;

/// previous struct definition ///
/// struct definition ///
struct A
{
    char c;
}  __attribute__((aligned(16)));

/// variable definition ///
// source head

// header function
int main();
// uniq global variable
// inline function

// body function
int main()
{
    return ((_Alignof(struct A )>=16)?(0):(1));
}

