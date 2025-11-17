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
	neo-c attrs.c
	./attrs
	neo-c builtins.c
	./builtins
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
	neo-c runner.c
	./runner
	neo-c statement_expr.c
	./statement_expr
	neo-c test_arith.c
	./test_arith
	neo-c test_array_ptr.c
	./test_array_ptr
	neo-c test_c_compat.c
	./test_c_compat
	neo-c test_c_compat2.c
	./test_c_compat2
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
	rm -rf .*.bin runner .valid_bin .invalid_bin .test_out *.c.c *.c.o ./attrs ./codex ./neo-c ./neo-c10 ./neo-c11 ./neo-c12 ./neo-c13 ./neo-c14 ./neo-c2 ./neo-c3 ./neo-c4 ./neo-c5 ./neo-c6 ./neo-c7 ./neo-c8 ./neo-c9 ./labels_as_values ./nested_functions ./statement_expr ./test_arith ./test_array_ptr ./test_c_compat ./test_c_compat2 ./test_control_flow ./test_control ./test_functions ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid *.i* *.c.c* ./attrs ./builtins ./codex ./comelang ./comelang10 ./comelang11 ./comelang12 ./comelang13 ./comelang14 ./comelang2 ./comelang3 ./comelang4 ./comelang5 ./comelang6 ./comelang7 ./comelang8 ./comelang9 ./labels_as_values ./nested_functions ./runner ./statement_expr ./test_arith ./test_array_ptr ./test_c_compat ./test_c_compat2 ./test_control_flow ./test_control ./test_functions ./test_invalid_0888 ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid ./typeof_auto ./user ./vector_types 















