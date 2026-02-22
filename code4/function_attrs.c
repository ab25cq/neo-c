/// c_include definition ///
/// typedef definition ///
typedef __builtin_va_list __gnuc_va_list;

typedef int __attribute__((cold))  (*fp_mid_t)();

typedef int __attribute__((cold))  (*fp_inner_t)(int);

typedef int __attribute__((cold))  (*(*fp_nested_t)())(int);

typedef const volatile int __attribute__((cold))  (*fp_cv_inner_t)();

typedef const volatile int __attribute__((cold))  (*(*fp_cv_nested_t)())();

typedef const volatile int __attribute__((cold))  (*fp_vc_inner_t)();

typedef const volatile int __attribute__((cold))  (*(*fp_vc_nested_t)())();

typedef int* restrict (*fp_ret_restrict_t)();

/// previous struct definition ///
/// struct definition ///
/// variable definition ///
int __attribute__((cold))  (*fp_attr_mid)();
int __attribute__((cold))  (*fp_mid_var)()  ;
int __attribute__((cold))  (*(*fp_nested)())(int);
int __attribute__((cold))  (*(*fp_nested2)() )(int) ;
const volatile int __attribute__((cold))  (*fp_cv_var)();
const volatile int __attribute__((cold))  (*(*fp_cv_nested2)() )() ;
const volatile int __attribute__((cold))  (*fp_vc_var)();
const volatile int __attribute__((cold))  (*(*fp_vc_nested2)() )() ;
int __attribute__((cold))  (* const fp_ptr_const)();
int __attribute__((cold))  (* volatile fp_ptr_volatile)();
int __attribute__((cold))  (* const volatile fp_ptr_cv)();
int __attribute__((cold))  (* restrict fp_ptr_restrict)();
int __attribute__((cold))  (* const restrict fp_ptr_const_restrict)();
int* restrict (*fp_ret_restrict)();
int* restrict (*fp_ret_restrict2)()  ;
// source head

// header function
__pure __attribute_pure__ __malloc_like __result_use_check __alloc_size(1) __alloc_size2(1,2)
__alloc_align(1) __attribute_malloc__ __attr_dealloc_fclose(1) __wur __pure2 __pure __THROW
_Noreturn __noreturn _Nonnull __nonnull __attribute__((used)) __attribute__((cold))
__asm("asm_attr_prefix")  int f_attr_prefix_all();
__asm__("asm_prefix_name")  int f_asm_prefix();
int  __attribute__((cold))  f_attr_mid();
int* restrict f_ret_restrict();
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

