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
	neo-c builtins.c
	neo-c codex.c
	neo-c comelang.c
	neo-c comelang10.c
	neo-c comelang11.c
	neo-c comelang12.c
	neo-c comelang13.c
	neo-c comelang14.c
	neo-c comelang2.c
	neo-c comelang3.c
	neo-c comelang4.c
	neo-c comelang5.c
	neo-c comelang6.c
	neo-c comelang7.c
	neo-c comelang8.c
	neo-c comelang9.c
	neo-c labels_as_values.c
	neo-c nested_functions.c
	neo-c runner.c
	neo-c statement_expr.c
	neo-c test_arith.c
	neo-c test_array_ptr.c
	neo-c test_control_flow.c
	neo-c test_control.c
	neo-c test_functions.c
	neo-c test_invalid_0888.c
	neo-c test_ops.c
	neo-c test_pointers_arrays.c
	neo-c test_string_cast.c
	neo-c test_struct_enum.c
	neo-c test_struct_union_enum.c
	neo-c test_switch_ternary.c
	neo-c test_valid.c
	neo-c typeof_auto.c
	neo-c user.c
	neo-c vector_types.c

clean:
	rm -rf runner .valid_bin .invalid_bin .test_out *.c.c *.c.o ./attrs ./codex ./neo-c ./neo-c10 ./neo-c11 ./neo-c12 ./neo-c13 ./neo-c14 ./neo-c2 ./neo-c3 ./neo-c4 ./neo-c5 ./neo-c6 ./neo-c7 ./neo-c8 ./neo-c9 ./labels_as_values ./nested_functions ./statement_expr ./test_arith ./test_array_ptr ./test_control_flow ./test_control ./test_functions ./test_ops ./test_pointers_arrays ./test_string_cast ./test_struct_enum ./test_struct_union_enum ./test_switch_ternary ./test_valid

