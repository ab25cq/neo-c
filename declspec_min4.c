/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

typedef __builtin_va_list __gnuc_va_list;

/// previous struct definition ///
/// struct definition ///
struct B
{
    char c;
} __attribute__((aligned(8)));

/// variable definition ///
// source head

// header function
int main();
// uniq global variable
// inline function

// body function
int main()
{
    return ((_Alignof(struct B )>=8)?(0):(1));
}

