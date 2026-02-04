// Prefix attributes (all tokens, non-__attribute__ first to exercise top-level parsing)
__pure __attribute_pure__ __malloc_like __result_use_check __alloc_size(1) __alloc_size2(1,2)
__alloc_align(1) __attribute_malloc__ __attr_dealloc_fclose(1) __wur __pure2 __pure __THROW
_Noreturn __noreturn _Nonnull __nonnull __attribute__((used)) __attribute__((cold))
__asm("asm_attr_prefix") int f_attr_prefix_all(void)
{
    return 0;
}

// Prefix __asm__ name remap
__asm__("asm_prefix_name") int f_asm_prefix(void)
{
    return 0;
}

// Attribute between return type and function name
int __attribute__((cold)) f_attr_mid(void)
{
    return 0;
}

// Function pointer variable with middle attribute
int __attribute__((cold)) (*fp_attr_mid)(void);

// Typedef function pointer with middle attribute
typedef int __attribute__((cold)) (*fp_mid_t)(void);
fp_mid_t fp_mid_var;

// Nested function pointer with middle attribute (via typedef)
typedef int __attribute__((cold)) (*fp_inner_t)(int);
fp_inner_t (*fp_nested)(void);

// Two-level typedef nesting with middle attribute
typedef fp_inner_t (*fp_nested_t)(void);
fp_nested_t fp_nested2;

// Suffix attributes (after params, before ';') covering all tokens
int f_attr_suffix(void)
    __attribute_pure__ __malloc_like __result_use_check __alloc_size(1) __alloc_size2(1,2)
    __alloc_align(1) __attribute_malloc__ __attr_dealloc_fclose(1) __wur __pure2 __pure __THROW
    _Noreturn __noreturn _Nonnull __nonnull __asm("asm_attr") __attribute__((cold));

// __asm__ name remap (prefix/suffix)
int f_asm_suffix(void) __asm__("asm_suffix_name")
{
    return 0;
}
