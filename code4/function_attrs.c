/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

typedef __builtin_va_list __gnuc_va_list;

typedef int __attribute__((cold))  (*fp_mid_t)();

typedef int __attribute__((cold))  (*fp_inner_t)(int);

typedef int __attribute__((cold))  (*(*fp_nested_t)())(int);

/// previous struct definition ///
/// struct definition ///
/// variable definition ///
int __attribute__((cold))  (*fp_attr_mid)();
int __attribute__((cold))  (*fp_mid_var)()  ;
int __attribute__((cold))  (*(*fp_nested)())(int);
int __attribute__((cold))  (*(*fp_nested2)() )(int) ;
// source head

// header function
__pure __attribute_pure__ __malloc_like __result_use_check __alloc_size(1) __alloc_size2(1,2)
__alloc_align(1) __attribute_malloc__ __attr_dealloc_fclose(1) __wur __pure2 __pure __THROW
_Noreturn __noreturn _Nonnull __nonnull __attribute__((used)) __attribute__((cold))
__asm("asm_attr_prefix")  int f_attr_prefix_all();
__asm__("asm_prefix_name")  int f_asm_prefix();
int  __attribute__((cold))  f_attr_mid();
int f_attr_suffix() __attribute_pure__ __malloc_like __result_use_check __alloc_size(1) __alloc_size2(1,2)
    __alloc_align(1) __attribute_malloc__ __attr_dealloc_fclose(1) __wur __pure2 __pure __THROW
    _Noreturn __noreturn _Nonnull __nonnull __asm("asm_attr") __attribute__((cold));
int f_asm_suffix() __asm__("asm_suffix_name")
;
// uniq global variable
// inline function

// body function
__pure __attribute_pure__ __malloc_like __result_use_check __alloc_size(1) __alloc_size2(1,2)
__alloc_align(1) __attribute_malloc__ __attr_dealloc_fclose(1) __wur __pure2 __pure __THROW
_Noreturn __noreturn _Nonnull __nonnull __attribute__((used)) __attribute__((cold))
__asm("asm_attr_prefix")  int f_attr_prefix_all()
{
    return 0;
}

__asm__("asm_prefix_name")  int f_asm_prefix()
{
    return 0;
}

int  __attribute__((cold))  f_attr_mid()
{
    return 0;
}

int f_asm_suffix()
{
    return 0;
}

