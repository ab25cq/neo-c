/// c_include definition ///
/// typedef definition ///
typedef __builtin_va_list __gnuc_va_list;

typedef enum anonymous_typeY1 E1;

typedef enum anonymous_typeY2 E2;

typedef enum anonymous_typeY3 E3;

typedef enum anonymous_typeY4 E4;

/// previous struct definition ///
/// struct definition ///
enum  anonymous_typeY1 { A1=(1)
};

enum  anonymous_typeY2 { A2=(2)
};

enum  anonymous_typeY3 { A3=(3)
};

enum  anonymous_typeY4 { A4=(4)
};

/// variable definition ///
// source head

// header function
static int sum_enums(enum anonymous_typeY1  a  , enum anonymous_typeY2  b  , enum anonymous_typeY3  c  , enum anonymous_typeY4  d  );
int main();
// uniq global variable
// inline function

// body function
static int sum_enums(enum anonymous_typeY1  a  , enum anonymous_typeY2  b  , enum anonymous_typeY3  c  , enum anonymous_typeY4  d  )
{
    # 19 "code/test_anon_enum_typedef.nc"
        return (int)a+(int)b+(int)c+(int)d;
}

int main()
{
    # 24 "code/test_anon_enum_typedef.nc"
        return ((sum_enums((1),(2),(3),(4))==10)?(0):(1));
}

