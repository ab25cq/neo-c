/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

typedef __builtin_va_list __gnuc_va_list;

/// previous struct definition ///
/// struct definition ///
/// variable definition ///
// source head

// header function
__attribute__((noinline)) int f(int x);
int main();
// uniq global variable
// inline function

// body function
__attribute__((noinline)) int f(int x)
{
    return x;
}

int main()
{
    return f(1);
}

