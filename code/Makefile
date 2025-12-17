CC := neo-c
CFLAGS ?= -std=gnu17 -Wall -Wextra -O2
LDFLAGS ?=
HOSTCC ?= cc
HOSTCFLAGS ?= -std=c11 -Wall -Wextra -O2

.PHONY: all clean test

# Build sample binaries, build tests, then run runner
all: test

# Run tests that validate common C syntax
test: *.c
	neo-c test_comelang.c
	./test_comelang
	neo-c test_comelang2.c
	./test_comelang2
	neo-c test_comelang3.c
	./test_comelang3
	neo-c attrs.c
	./attrs
	neo-c builtins.c
	./builtins
	neo-c inline_asm.c
	./inline_asm
	neo-c codex.c
	./codex
	neo-c comelang.c
	./comelang
	neo-c comelang10.c
	./comelang10
	neo-c comelang11.c
	./comelang11
	neo-c comelang12.c
	./comelang12
	neo-c comelang13.c
	./comelang13
	neo-c comelang14.c
	./comelang14
	neo-c comelang2.c
	./comelang2
	neo-c comelang3.c
	./comelang3
	neo-c comelang4.c
	./comelang4
	neo-c comelang5.c
	./comelang5
	neo-c comelang6.c
	./comelang6
	neo-c comelang7.c
	./comelang7
	neo-c comelang8.c
	./comelang8
	neo-c comelang9.c
	./comelang9
	neo-c labels_as_values.c
	./labels_as_values
	neo-c nested_functions.c
	./nested_functions
#	neo-c runner.c
#	./runner
	neo-c statement_expr.c
	./statement_expr
	neo-c test_arith.c
	./test_arith
	neo-c test_array_features.c
	./test_array_features
	neo-c test_array_ptr.c
	./test_array_ptr
	neo-c test_array_pointer_advanced.c
	./test_array_pointer_advanced
	neo-c test_array_pointer_matrix.c
	./test_array_pointer_matrix
	neo-c test_pointer_qualifiers.c
	./test_pointer_qualifiers
	neo-c test_c_compat.c
	./test_c_compat
	neo-c test_typedefs.c
	./test_typedefs
	neo-c test_c_compat2.c
	./test_c_compat2
	neo-c test_c_compat3.c
	./test_c_compat3
	neo-c test_c_compat4.c
	./test_c_compat4
	neo-c test_c_compat5.c
	./test_c_compat5
	neo-c test_c_compat6.c
	./test_c_compat6
	neo-c test_c_compat7.c -lm
	./test_c_compat7
	neo-c c_test_compat8.c
	./c_test_compat8
	neo-c c_test_compat9.c
	./c_test_compat9
	neo-c c_test_compat10.c -lm
	./c_test_compat10
	neo-c c_test_compat11.c
	./c_test_compat11
	neo-c c_test_compat12.c
	./c_test_compat12
	neo-c c_test_compat13.c
	./c_test_compat13
	neo-c c_test_compat14.c
	./c_test_compat14
	neo-c c_test_compat15.c
	./c_test_compat15
	neo-c c_test_compat16.c
	./c_test_compat16
	neo-c c_test_compat17.c
	./c_test_compat17
	neo-c c_test_compat18.c
	./c_test_compat18
	neo-c c_test_compat19.c
	./c_test_compat19
	neo-c c_test_compat20.c
	./c_test_compat20
	neo-c c_test_compat21.c
	./c_test_compat21
	neo-c c_test_compat22.c
	./c_test_compat22
#	neo-c c_test_compat23.c
#	./c_test_compat23
	neo-c c_test_compat24.c
	./c_test_compat24
	neo-c c_test_compat25.c
	./c_test_compat25
#	neo-c c_test_compat26.c
#	./c_test_compat26
	neo-c c_test_compat27.c
	./c_test_compat27
	neo-c c_test_compat28.c
	./c_test_compat28
	neo-c c_test_compat29.c
	./c_test_compat29
	neo-c c_test_compat30.c
	./c_test_compat30
	neo-c c_test_compat31.c
	./c_test_compat31
	neo-c c_test_compat32.c
	./c_test_compat32
	neo-c c_test_compat33.c
	./c_test_compat33
	neo-c c_test_compat34.c
	./c_test_compat34
	neo-c c_test_compat35.c
	./c_test_compat35
	neo-c c_test_compat36.c
	./c_test_compat36
	neo-c c_test_compat37.c
	./c_test_compat37
	neo-c c_test_compat38.c
	./c_test_compat38
	neo-c test_control_flow.c
	./test_control_flow
	neo-c test_control.c
	./test_control
	neo-c test_functions.c
	./test_functions
	neo-c test_invalid_0888.c
	./test_invalid_0888
	neo-c test_ops.c
	./test_ops
	neo-c test_pointers_arrays.c
	./test_pointers_arrays
	neo-c test_string_cast.c
	./test_string_cast
	neo-c test_struct_enum.c
	./test_struct_enum
	neo-c test_struct_union_enum.c
	./test_struct_union_enum
	neo-c test_switch_ternary.c
	./test_switch_ternary
	neo-c test_valid.c
	./test_valid
	neo-c typeof_auto.c
	./typeof_auto
	neo-c user.c
	./user
#	neo-c vector_types.c
#	./vector_types

clean:
	rm -rf test_array_features test_array_pointer_advanced test_typedefs test_array_pointer_matrix test_array_views test_pointer_qualifiers test_comelang test_comelang2 test_comelang3
	rm -rf .*.bin runner .valid_bin .invalid_bin .test_out *.c.c *.c.o ./attrs ./codex ./neo-c ./neo-c10 ./neo-c11 ./neo-c12 ./neo-c13 ./neo-c14 ./neo-c2 ./neo-c3 ./neo-c4 ./neo-c5 ./neo-c6 ./neo-c7 ./neo-c8 ./neo-c9 ./labels_as_values ./nested_functions ./statement_expr ./test_arith ./test_array_ptr ./test_c_compat ./test_c_compat2 ./test_c_compat3 ./test_c_compat4 ./test_c_compat5 ./test_c_compat6 ./test_c_compat7 ./c_test_compat8 ./c_test_compat9 ./c_test_compat38 ./c_test_compat10 ./c_test_compat11 ./c_test_compat12 ./c_test_compat13 ./c_test_compat14 ./c_test_compat15 ./c_test_compat16 ./c_test_compat17 ./c_test_compat18 ./c_test_compat19 ./c_test_compat20 ./c_test_compat21 ./c_test_compat22 ./c_test_compat23 ./c_test_compat24 ./c_test_compat25 ./c_test_compat26 ./c_test_compat27 ./c_test_compat28 ./c_test_compat29 ./c_test_compat30 ./c_test_compat31 ./c_test_compat32 ./c_test_compat33 ./c_test_compat34 ./c_test_compat35 ./c_test_compat36 ./c_test_compat37 ./test_control_flow ./test_control ./test_functions ./test_invalid_0888 ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid *.i* *.c.c* ./attrs ./builtins ./codex ./comelang ./comelang10 ./comelang11 ./comelang12 ./comelang13 ./comelang14 ./comelang2 ./comelang3 ./comelang4 ./comelang5 ./comelang6 ./comelang7 ./comelang8 ./comelang9 ./labels_as_values ./nested_functions ./runner ./statement_expr ./test_arith ./test_array_ptr ./test_c_compat ./test_c_compat2 ./test_c_compat3 ./test_c_compat4 ./test_c_compat5 ./test_c_compat6 ./test_c_compat7 ./c_test_compat8 ./c_test_compat9 ./c_test_compat10 ./c_test_compat11 ./c_test_compat12 ./c_test_compat13 ./c_test_compat14 ./c_test_compat15 ./c_test_compat16 ./c_test_compat17 ./c_test_compat18 ./c_test_compat19 ./c_test_compat20 ./c_test_compat21 ./c_test_compat22 ./c_test_compat23 ./c_test_compat24 ./c_test_compat25 ./c_test_compat26 ./c_test_compat27 ./c_test_compat28 ./c_test_compat29 ./c_test_compat30 ./c_test_compat31 ./c_test_compat32 ./c_test_compat33 ./c_test_compat34 ./c_test_compat35 ./c_test_compat36 ./c_test_compat37 ./test_control_flow ./test_control ./test_functions ./test_invalid_0888 ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid ./typeof_auto ./user ./vector_types test_c_compat_host test_c_compat2_host test_c_compat3_host test_c_compat4_host test_c_compat5_host test_c_compat6_host test_c_compat7_host c_test_compat8_host c_test_compat9_host c_test_compat10_host c_test_compat11_host c_test_compat12_host c_test_compat13_host c_test_compat14_host c_test_compat15_host c_test_compat16_host c_test_compat17_host c_test_compat18_host c_test_compat19_host c_test_compat20_host c_test_compat21_host c_test_compat22_host c_test_compat23_host c_test_compat24_host c_test_compat25_host c_test_compat26_host c_test_compat27_host c_test_compat28_host c_test_compat29_host c_test_compat30_host c_test_compat31_host c_test_compat32_host c_test_compat33_host c_test_compat34_host c_test_compat35_host c_test_compat36_host c_test_compat37_host
