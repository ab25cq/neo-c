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
__attribute__((warn_unused_result))  static int make_value();
int main();
// uniq global variable
// inline function

// body function
__attribute__((warn_unused_result))  static int make_value()
{
    return 7;
}

int main()
{
    return ((make_value()==7)?(0):(1));
}

