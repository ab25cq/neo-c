/// c_include definition ///
#ifndef __BAREMETAL__
#define __BAREMETAL__ 1
#endif

/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

typedef __builtin_va_list __gnuc_va_list;

/// previous struct definition ///
/// struct definition ///
/// variable definition ///
char msg[]="hello world\n";
// source head

// header function
int main();
// uniq global variable
// inline function

// body function
int main()
{
     __asm  (
        "li a0,1\n la a1,msg\n li a2,12\n li a7,64\n ecall\n li a0,0\n li a7,70\n ecall"
    );
        return 0;
}

