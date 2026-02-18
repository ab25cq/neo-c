CC := neo-c
CFLAGS ?= -std=gnu17 -Wall -Wextra -O2
LDFLAGS ?=
HOSTCC ?= cc
HOSTCFLAGS ?= -std=c11 -Wall -Wextra -O2

.PHONY: all clean test

# Build sample binaries, build tests, then run runner
all: test

# Run tests that validate common C syntax
test: *.nc
	neo-c test_nums.nc
	./test_nums
	neo-c test_comelang.nc
	./test_comelang
	neo-c test_comelang2.nc
	./test_comelang2
	neo-c test_comelang3.nc
	./test_comelang3
	neo-c attrs.nc
	./attrs
	neo-c builtins.nc
	./builtins
	neo-c inline_asm.nc
	./inline_asm
	neo-c codex.nc
	./codex
	neo-c comelang.nc
	./comelang
	neo-c comelang10.nc
	./comelang10
	neo-c comelang11.nc
	./comelang11
	neo-c comelang12.nc
	./comelang12
	neo-c comelang13.nc
	./comelang13
	neo-c comelang14.nc
	./comelang14
	neo-c comelang2.nc
	./comelang2
	neo-c comelang3.nc
	./comelang3
	neo-c comelang4.nc
	./comelang4
	neo-c comelang5.nc
	./comelang5
	neo-c comelang6.nc
	./comelang6
	neo-c comelang7.nc
	./comelang7
	neo-c comelang8.nc
	./comelang8
	neo-c comelang9.nc
	./comelang9
	neo-c labels_as_values.nc
	./labels_as_values
	neo-c -gcc nested_functions.nc
	./nested_functions
#	neo-c runner.nc
#	./runner
	neo-c statement_expr.nc
	./statement_expr
	neo-c test_arith.nc
	./test_arith
	neo-c test_array_features.nc
	./test_array_features
	neo-c test_array_ptr.nc
	./test_array_ptr
	neo-c test_array_pointer_advanced.nc
	./test_array_pointer_advanced
	neo-c test_array_pointer_matrix.nc
	./test_array_pointer_matrix
	neo-c test_pointer_qualifiers.nc
	./test_pointer_qualifiers
	neo-c test_c_compat.nc
	./test_c_compat
	neo-c test_typedefs.nc
	./test_typedefs
	neo-c test_c_compat2.nc
	./test_c_compat2
	neo-c test_c_compat3.nc
	./test_c_compat3
	neo-c test_c_compat4.nc
	./test_c_compat4
	neo-c test_c_compat5.nc
	./test_c_compat5
	neo-c test_c_compat6.nc
	./test_c_compat6
	neo-c test_c_compat7.nc -lm
	./test_c_compat7
	neo-c c_test_compat8.nc
	./c_test_compat8
	neo-c c_test_compat9.nc
	./c_test_compat9
	neo-c c_test_compat10.nc -lm
	./c_test_compat10
	neo-c c_test_compat11.nc
	./c_test_compat11
	neo-c c_test_compat12.nc
	./c_test_compat12
	neo-c c_test_compat13.nc
	./c_test_compat13
	neo-c c_test_compat14.nc
	./c_test_compat14
	neo-c c_test_compat15.nc
	./c_test_compat15
	neo-c c_test_compat16.nc
	./c_test_compat16
	neo-c c_test_compat17.nc
	./c_test_compat17
	neo-c c_test_compat18.nc
	./c_test_compat18
	neo-c c_test_compat19.nc
	./c_test_compat19
	neo-c c_test_compat20.nc
	./c_test_compat20
	neo-c c_test_compat21.nc
	./c_test_compat21
	neo-c c_test_compat22.nc
	./c_test_compat22
	neo-c c_test_compat23.nc
	./c_test_compat23
	neo-c c_test_compat24.nc
	./c_test_compat24
	neo-c c_test_compat25.nc
	./c_test_compat25
	neo-c c_test_compat26.nc -latomic
	./c_test_compat26
	neo-c c_test_compat27.nc
	./c_test_compat27
	neo-c c_test_compat28.nc
	./c_test_compat28
	neo-c c_test_compat29.nc
	./c_test_compat29
	neo-c c_test_compat30.nc
	./c_test_compat30
	neo-c c_test_compat31.nc
	./c_test_compat31
	neo-c c_test_compat32.nc
	./c_test_compat32
	neo-c c_test_compat33.nc
	./c_test_compat33
	neo-c c_test_compat34.nc
	./c_test_compat34
	neo-c c_test_compat35.nc
	./c_test_compat35
	neo-c c_test_compat36.nc
	./c_test_compat36
	neo-c c_test_compat37.nc
	./c_test_compat37
	neo-c c_test_compat38.nc
	./c_test_compat38
	neo-c c_test_compat39.nc
	./c_test_compat39
	neo-c c_test_compat40.nc
	./c_test_compat40
	neo-c c_test_compat41.nc
	./c_test_compat41
	neo-c c_test_compat42.nc
	./c_test_compat42
	neo-c c_test_compat43.nc
	./c_test_compat43
	neo-c c_test_compat44.nc
	./c_test_compat44
	neo-c c_test_compat45.nc
	./c_test_compat45
	neo-c c_test_compat46.nc
	./c_test_compat46
	neo-c c_test_compat47.nc
	./c_test_compat47
	neo-c c_test_compat48.nc
	./c_test_compat48
	neo-c c_test_compat49.nc
	./c_test_compat49
	neo-c c_test_compat50.nc
	./c_test_compat50
	neo-c c_test_compat51.nc
	./c_test_compat51
	neo-c c_test_compat52.nc
	./c_test_compat52
	neo-c c_test_compat53.nc -lm
	./c_test_compat53
	neo-c c_test_compat54.nc
	./c_test_compat54
	neo-c c_test_compat55.nc -lm
	./c_test_compat55
	neo-c test_control_flow.nc
	./test_control_flow
	neo-c test_control.nc
	./test_control
	neo-c test_functions.nc
	./test_functions
	neo-c test_invalid_0888.nc
	./test_invalid_0888
	neo-c test_ops.nc
	./test_ops
	neo-c test_pointers_arrays.nc
	./test_pointers_arrays
	neo-c test_string_cast.nc
	./test_string_cast
	neo-c test_struct_enum.nc
	./test_struct_enum
	neo-c test_struct_union_enum.nc
	./test_struct_union_enum
	neo-c test_switch_ternary.nc
	./test_switch_ternary
	neo-c test_valid.nc
	./test_valid
	neo-c typeof_auto.nc
	./typeof_auto
	neo-c user.nc
	./user
#	neo-c vector_types.nc
#	./vector_types

clean:
	rm -rf test_array_features test_array_pointer_advanced test_typedefs test_array_pointer_matrix test_array_views test_pointer_qualifiers test_comelang test_comelang2 test_comelang3 test_nums inline_asm c_test_compat39 c_test_compat40 c_test_compat41 c_test_compat42 c_test_compat43 c_test_compat44 c_test_compat45 c_test_compat46 c_test_compat47 c_test_compat48 c_test_compat49 c_test_compat50 c_test_compat51 c_test_compat52 c_test_compat53 c_test_compat54 c_test_compat55
	rm -rf *.c .*.bin runner .valid_bin .invalid_bin .test_out *.nc.nc *.nc.o ./attrs ./codex ./neo-c ./neo-c10 ./neo-c11 ./neo-c12 ./neo-c13 ./neo-c14 ./neo-c2 ./neo-c3 ./neo-c4 ./neo-c5 ./neo-c6 ./neo-c7 ./neo-c8 ./neo-c9 ./labels_as_values ./nested_functions ./statement_expr ./test_arith ./test_array_ptr ./test_c_compat ./test_c_compat2 ./test_c_compat3 ./test_c_compat4 ./test_c_compat5 ./test_c_compat6 ./test_c_compat7 ./c_test_compat8 ./c_test_compat9 ./c_test_compat38 ./c_test_compat39 ./c_test_compat40 ./c_test_compat41 ./c_test_compat42 ./c_test_compat43 ./c_test_compat44 ./c_test_compat45 ./c_test_compat46 ./c_test_compat47 ./c_test_compat48 ./c_test_compat49 ./c_test_compat50 ./c_test_compat51 ./c_test_compat52 ./c_test_compat53 ./c_test_compat54 ./c_test_compat55 ./c_test_compat10 ./c_test_compat11 ./c_test_compat12 ./c_test_compat13 ./c_test_compat14 ./c_test_compat15 ./c_test_compat16 ./c_test_compat17 ./c_test_compat18 ./c_test_compat19 ./c_test_compat20 ./c_test_compat21 ./c_test_compat22 ./c_test_compat23 ./c_test_compat24 ./c_test_compat25 ./c_test_compat26 ./c_test_compat27 ./c_test_compat28 ./c_test_compat29 ./c_test_compat30 ./c_test_compat31 ./c_test_compat32 ./c_test_compat33 ./c_test_compat34 ./c_test_compat35 ./c_test_compat36 ./c_test_compat37 ./test_control_flow ./test_control ./test_functions ./test_invalid_0888 ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid *.i* *.nc.nc* ./attrs ./builtins ./codex ./comelang ./comelang10 ./comelang11 ./comelang12 ./comelang13 ./comelang14 ./comelang2 ./comelang3 ./comelang4 ./comelang5 ./comelang6 ./comelang7 ./comelang8 ./comelang9 ./labels_as_values ./nested_functions ./runner ./statement_expr ./test_arith ./test_array_ptr ./test_c_compat ./test_c_compat2 ./test_c_compat3 ./test_c_compat4 ./test_c_compat5 ./test_c_compat6 ./test_c_compat7 ./c_test_compat8 ./c_test_compat9 ./c_test_compat10 ./c_test_compat11 ./c_test_compat12 ./c_test_compat13 ./c_test_compat14 ./c_test_compat15 ./c_test_compat16 ./c_test_compat17 ./c_test_compat18 ./c_test_compat19 ./c_test_compat20 ./c_test_compat21 ./c_test_compat22 ./c_test_compat23 ./c_test_compat24 ./c_test_compat25 ./c_test_compat26 ./c_test_compat27 ./c_test_compat28 ./c_test_compat29 ./c_test_compat30 ./c_test_compat31 ./c_test_compat32 ./c_test_compat33 ./c_test_compat34 ./c_test_compat35 ./c_test_compat36 ./c_test_compat37 ./c_test_compat39 ./c_test_compat40 ./c_test_compat41 ./c_test_compat42 ./c_test_compat43 ./c_test_compat44 ./c_test_compat45 ./c_test_compat46 ./c_test_compat47 ./c_test_compat48 ./c_test_compat49 ./c_test_compat50 ./c_test_compat51 ./c_test_compat52 ./c_test_compat53 ./c_test_compat54 ./c_test_compat55 ./test_control_flow ./test_control ./test_functions ./test_invalid_0888 ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid ./typeof_auto ./user ./vector_types test_c_compat_host test_c_compat2_host test_c_compat3_host test_c_compat4_host test_c_compat5_host test_c_compat6_host test_c_compat7_host c_test_compat8_host c_test_compat9_host c_test_compat10_host c_test_compat11_host c_test_compat12_host c_test_compat13_host c_test_compat14_host c_test_compat15_host c_test_compat16_host c_test_compat17_host c_test_compat18_host c_test_compat19_host c_test_compat20_host c_test_compat21_host c_test_compat22_host c_test_compat23_host c_test_compat24_host c_test_compat25_host c_test_compat26_host c_test_compat27_host c_test_compat28_host c_test_compat29_host c_test_compat30_host c_test_compat31_host c_test_compat32_host c_test_compat33_host c_test_compat34_host c_test_compat35_host c_test_compat36_host c_test_compat37_host c_test_compat42_host c_test_compat43_host c_test_compat44_host c_test_compat45_host c_test_compat46_host c_test_compat47_host c_test_compat48_host c_test_compat49_host c_test_compat50_host c_test_compat51_host c_test_compat52_host c_test_compat53_host c_test_compat54_host c_test_compat55_host
