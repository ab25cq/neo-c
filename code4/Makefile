NEO_C ?= ../neo-c
NCC ?= ../ncc

PATH := $(abspath ..):$(PATH)

.PHONY: test clean

$(NCC):
	$(MAKE) -C .. ncc

# Compile and verify attribute placement in the generated C output

test: $(NCC) attrs_split.nc struct_attrs.nc enum_attrs.nc function_attrs.nc
	$(NCC) -c attrs_split.nc
	@grep -q "struct Packed" attrs_split.c
	@grep -q "__attribute__((packed))" attrs_split.c
	@grep -q "g1 __attribute__((aligned(16)))" attrs_split.c
	$(NCC) -c struct_attrs.nc
	@grep -q "struct SA" struct_attrs.c
	@grep -q "struct SB" struct_attrs.c
	@grep -q "struct SC" struct_attrs.c
	@grep -q "struct SD" struct_attrs.c
	@grep -q "__attribute__((packed))" struct_attrs.c
	@grep -q "__attribute__((aligned(8)))" struct_attrs.c
	$(NCC) -c enum_attrs.nc
	@grep -Eq "enum __attribute__\\(\\(packed\\)\\)[[:space:]]+EA" enum_attrs.c
	@grep -Eq "enum __attribute__\\(\\(packed\\)\\)[[:space:]]+EB" enum_attrs.c
	@grep -Eq "enum __attribute__\\(\\(packed\\)\\)[[:space:]]+EC" enum_attrs.c
	@grep -Eq "enum __attribute__\\(\\(packed\\)\\)[[:space:]]+__attribute__\\(\\(aligned\\(8\\)\\)\\)[[:space:]]+ED" enum_attrs.c
	$(NCC) -c function_attrs.nc
	@grep -Fq "__attribute__((used))" function_attrs.c
	@grep -Fq "__attribute_pure__" function_attrs.c
	@grep -Fq "__malloc_like" function_attrs.c
	@grep -Fq "__result_use_check" function_attrs.c
	@grep -Fq "__alloc_size(1)" function_attrs.c
	@grep -Fq "__alloc_size2(1,2)" function_attrs.c
	@grep -Fq "__alloc_align(1)" function_attrs.c
	@grep -Fq "__attribute_malloc__" function_attrs.c
	@grep -Fq "__attr_dealloc_fclose(1)" function_attrs.c
	@grep -Fq "__wur" function_attrs.c
	@grep -Fq "__pure2" function_attrs.c
	@grep -Fq "__pure" function_attrs.c
	@grep -Fq "__THROW" function_attrs.c
	@grep -Fq "_Noreturn" function_attrs.c
	@grep -Fq "__noreturn" function_attrs.c
	@grep -Fq "_Nonnull" function_attrs.c
	@grep -Fq "__nonnull" function_attrs.c
	@grep -Fq "__attribute__((cold))" function_attrs.c
	@grep -Fq "__asm(\"asm_attr\")" function_attrs.c
	@grep -Fq "__asm(\"asm_attr_prefix\")" function_attrs.c
	@grep -Fq "__asm__(\"asm_prefix_name\")" function_attrs.c
	@grep -Fq "f_asm_prefix" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+f_attr_mid" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*fp_attr_mid\\)\\(\\)" function_attrs.c
	@grep -Eq "typedef[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*fp_mid_t\\)\\(\\)" function_attrs.c
	@grep -Eq "typedef[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*fp_inner_t\\)\\(int\\)" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*fp_mid_var\\)\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*\\(\\*fp_nested\\)\\(\\)\\)\\(int\\)" function_attrs.c
	@grep -Eq "typedef[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*\\(\\*fp_nested_t\\)\\([[:space:]]*\\)\\)[[:space:]]*\\(int\\)" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*\\(\\*fp_nested2\\)\\([[:space:]]*\\)[[:space:]]*\\)[[:space:]]*\\(int\\)" function_attrs.c
	@grep -Eq "const[[:space:]]+volatile[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*fp_cv_var\\)\\(\\)" function_attrs.c
	@grep -Eq "typedef[[:space:]]+const[[:space:]]+volatile[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*fp_cv_inner_t\\)\\(\\)" function_attrs.c
	@grep -Eq "const[[:space:]]+volatile[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*\\(\\*fp_cv_nested2\\)\\([[:space:]]*\\)[[:space:]]*\\)\\(\\)" function_attrs.c
	@grep -Eq "const[[:space:]]+volatile[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*fp_vc_var\\)\\(\\)" function_attrs.c
	@grep -Eq "typedef[[:space:]]+const[[:space:]]+volatile[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*fp_vc_inner_t\\)\\(\\)" function_attrs.c
	@grep -Eq "const[[:space:]]+volatile[[:space:]]+int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*\\(\\*fp_vc_nested2\\)\\([[:space:]]*\\)[[:space:]]*\\)\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*[[:space:]]+const[[:space:]]+fp_ptr_const\\)\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*[[:space:]]+volatile[[:space:]]+fp_ptr_volatile\\)\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*[[:space:]]+const[[:space:]]+volatile[[:space:]]+fp_ptr_cv\\)\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*[[:space:]]+restrict[[:space:]]+fp_ptr_restrict\\)\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]+__attribute__\\(\\(cold\\)\\)[[:space:]]+\\(\\*[[:space:]]+const[[:space:]]+restrict[[:space:]]+fp_ptr_const_restrict\\)\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]*\\*[[:space:]]+restrict[[:space:]]+f_ret_restrict\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]*\\*[[:space:]]+restrict[[:space:]]+\\(\\*fp_ret_restrict\\)\\(\\)" function_attrs.c
	@grep -Eq "typedef[[:space:]]+int[[:space:]]*\\*[[:space:]]+restrict[[:space:]]+\\(\\*fp_ret_restrict_t\\)\\(\\)" function_attrs.c
	@grep -Eq "int[[:space:]]*\\*[[:space:]]+restrict[[:space:]]+\\(\\*fp_ret_restrict2\\)\\(\\)" function_attrs.c
	@grep -Fq "__asm__(\"asm_suffix_name\")" function_attrs.c
	@grep -Fq "f_asm_suffix" function_attrs.c
	@echo "OK: attribute placement verified"

clean:
	rm -f attrs_split.c attrs_split.o attrs_split.nc.i attrs_split.c.error
	rm -f struct_attrs.c struct_attrs.o struct_attrs.nc.i struct_attrs.c.error
	rm -f enum_attrs.c enum_attrs.o enum_attrs.nc.i enum_attrs.c.error
	rm -f function_attrs.c function_attrs.o function_attrs.nc.i function_attrs.c.error
