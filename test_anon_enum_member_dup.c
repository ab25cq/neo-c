/// c_include definition ///
/// typedef definition ///
typedef __builtin_va_list __gnuc_va_list;

/// previous struct definition ///
/// struct definition ///
enum  anonymous_typeY1 { X=(1),
Y 
};

struct A
{
    enum anonymous_typeY1 e;
};

struct B
{
    enum anonymous_typeY1 e;
};

/// variable definition ///
// source head

// header function
int main();
// uniq global variable
// inline function

// body function
int main()
{
    # 11 "code/test_anon_enum_member_dup.nc"
    struct A  a  ={ .e = X };
    # 12 "code/test_anon_enum_member_dup.nc"
    struct B  b  ={ .e = X };
    # 13 "code/test_anon_enum_member_dup.nc"
        return ((((int)a.e+(int)b.e)==2)?(0):(1));
}

