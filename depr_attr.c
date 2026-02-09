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
__attribute__((deprecated("legacy")))  static int old_api();
int main();
// uniq global variable
// inline function

// body function
__attribute__((deprecated("legacy")))  static int old_api()
{
    return 1;
}

int main()
{
    return ((old_api()==1)?(0):(1));
}

