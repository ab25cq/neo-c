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
// source head

// header function
int main();
// uniq global variable
// inline function

// body function
int main()
{
    const char* s="hello world\n";
     __asm volatile (
        "li a0,1\n mv a1,%0\n li a2,12\n li a7,64\n ecall\n li a0,0\n li a7,70\n ecall"
        :        :        "r"
(s)        :        "a0"
        ,        "a1"
        ,        "a2"
        ,        "a7"
        ,        "memory"
    );
        return 0;
}

