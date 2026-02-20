CC := neo-c
CFLAGS ?= -std=gnu17 -Wall -Wextra -O2
LDFLAGS ?=
HOSTCC ?= cc
HOSTCFLAGS ?= -std=c11 -Wall -Wextra -O2

.PHONY: all clean test external-corpus

# Build sample binaries, build tests, then run runner
all: test

external-corpus:
	@./tools/run_external_corpus.sh

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
	neo-c -I. ../code6/c_test_compat8.nc -o c_test_compat8
	./c_test_compat8
	neo-c -I. ../code6/c_test_compat9.nc -o c_test_compat9
	./c_test_compat9
	neo-c -I. ../code6/c_test_compat10.nc -o c_test_compat10 -lm
	./c_test_compat10
	neo-c -I. ../code6/c_test_compat11.nc -o c_test_compat11
	./c_test_compat11
	neo-c -I. ../code6/c_test_compat12.nc -o c_test_compat12
	./c_test_compat12
	neo-c -I. ../code6/c_test_compat13.nc -o c_test_compat13
	./c_test_compat13
	neo-c -I. ../code6/c_test_compat14.nc -o c_test_compat14
	./c_test_compat14
	neo-c -I. ../code6/c_test_compat15.nc -o c_test_compat15
	./c_test_compat15
	neo-c -I. ../code6/c_test_compat16.nc -o c_test_compat16
	./c_test_compat16
	neo-c -I. ../code6/c_test_compat17.nc -o c_test_compat17
	./c_test_compat17
	neo-c -I. ../code6/c_test_compat18.nc -o c_test_compat18
	./c_test_compat18
	neo-c -I. ../code6/c_test_compat19.nc -o c_test_compat19
	./c_test_compat19
	neo-c -I. ../code6/c_test_compat20.nc -o c_test_compat20
	./c_test_compat20
	neo-c -I. ../code6/c_test_compat21.nc -o c_test_compat21
	./c_test_compat21
	neo-c -I. ../code6/c_test_compat22.nc -o c_test_compat22
	./c_test_compat22
	neo-c -I. ../code6/c_test_compat23.nc -o c_test_compat23
	./c_test_compat23
	neo-c -I. ../code6/c_test_compat24.nc -o c_test_compat24
	./c_test_compat24
	neo-c -I. ../code6/c_test_compat25.nc -o c_test_compat25
	./c_test_compat25
	neo-c -I. ../code6/c_test_compat26.nc -o c_test_compat26 -latomic
	./c_test_compat26
	neo-c -I. ../code6/c_test_compat27.nc -o c_test_compat27
	./c_test_compat27
	neo-c -I. ../code6/c_test_compat28.nc -o c_test_compat28
	./c_test_compat28
	neo-c -I. ../code6/c_test_compat29.nc -o c_test_compat29
	./c_test_compat29
	neo-c -I. ../code6/c_test_compat30.nc -o c_test_compat30
	./c_test_compat30
	neo-c -I. ../code6/c_test_compat31.nc -o c_test_compat31
	./c_test_compat31
	neo-c -I. ../code6/c_test_compat32.nc -o c_test_compat32
	./c_test_compat32
	neo-c -I. ../code6/c_test_compat33.nc -o c_test_compat33
	./c_test_compat33
	neo-c -I. ../code6/c_test_compat34.nc -o c_test_compat34
	./c_test_compat34
	neo-c -I. ../code6/c_test_compat35.nc -o c_test_compat35
	./c_test_compat35
	neo-c -I. ../code6/c_test_compat36.nc -o c_test_compat36
	./c_test_compat36
	neo-c -I. ../code6/c_test_compat37.nc -o c_test_compat37
	./c_test_compat37
	neo-c -I. ../code6/c_test_compat38.nc -o c_test_compat38
	./c_test_compat38
	neo-c -I. ../code6/c_test_compat39.nc -o c_test_compat39
	./c_test_compat39
	neo-c -I. ../code6/c_test_compat40.nc -o c_test_compat40
	./c_test_compat40
	neo-c -I. ../code6/c_test_compat41.nc -o c_test_compat41
	./c_test_compat41
	neo-c -I. ../code6/c_test_compat42.nc -o c_test_compat42
	./c_test_compat42
	neo-c -I. ../code6/c_test_compat43.nc -o c_test_compat43
	./c_test_compat43
	neo-c -I. ../code6/c_test_compat44.nc -o c_test_compat44
	./c_test_compat44
	neo-c -I. ../code6/c_test_compat45.nc -o c_test_compat45
	./c_test_compat45
	neo-c -I. ../code6/c_test_compat46.nc -o c_test_compat46
	./c_test_compat46
	neo-c -I. ../code6/c_test_compat47.nc -o c_test_compat47
	./c_test_compat47
	neo-c -I. ../code6/c_test_compat48.nc -o c_test_compat48
	./c_test_compat48
	neo-c -I. ../code6/c_test_compat49.nc -o c_test_compat49
	./c_test_compat49
	neo-c -I. ../code6/c_test_compat50.nc -o c_test_compat50
	./c_test_compat50
	neo-c -I. ../code6/c_test_compat51.nc -o c_test_compat51
	./c_test_compat51
	neo-c -I. ../code6/c_test_compat52.nc -o c_test_compat52
	./c_test_compat52
	neo-c -I. ../code6/c_test_compat53.nc -o c_test_compat53 -lm
	./c_test_compat53
	neo-c -I. ../code6/c_test_compat54.nc -o c_test_compat54
	./c_test_compat54
	neo-c -I. ../code6/c_test_compat55.nc -o c_test_compat55 -lm
	./c_test_compat55
	neo-c -I. ../code6/c_test_compat56.nc -o c_test_compat56
	./c_test_compat56
	neo-c -I. ../code6/c_test_compat57.nc -o c_test_compat57
	./c_test_compat57
	neo-c -I. ../code6/c_test_compat58.nc -o c_test_compat58 -latomic
	./c_test_compat58
	neo-c -I. ../code6/c_test_compat59.nc -o c_test_compat59
	./c_test_compat59
	neo-c -I. ../code6/c_test_compat60.nc -o c_test_compat60
	./c_test_compat60
	neo-c -I. ../code6/c_test_compat61.nc -o c_test_compat61 -pthread
	./c_test_compat61
	neo-c -I. ../code6/c_test_compat62.nc -o c_test_compat62
	./c_test_compat62
	neo-c -I. -Icompat63/inc1 -Icompat63/inc2 ../code6/c_test_compat63.nc -o c_test_compat63
	./c_test_compat63
	neo-c -I. ../code6/c_test_compat64.nc -o c_test_compat64
	./c_test_compat64
	@set -eu; \
	echo "neo-c ../code6/c_test_compat64_error_active.nc (expect diagnostic)"; \
	rm -f c_test_compat64_error_active; \
	neo-c -I. ../code6/c_test_compat64_error_active.nc -o c_test_compat64_error_active > c_test_compat64_error_active.out 2>&1 || true; \
	grep -q "error:" c_test_compat64_error_active.out; \
	test ! -e c_test_compat64_error_active; \
	rm -f c_test_compat64_error_active.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat64_line_invalid.nc (expect diagnostic)"; \
	rm -f c_test_compat64_line_invalid; \
	neo-c -I. ../code6/c_test_compat64_line_invalid.nc -o c_test_compat64_line_invalid > c_test_compat64_line_invalid.out 2>&1 || true; \
	grep -q "invalid #line directive" c_test_compat64_line_invalid.out; \
	test ! -e c_test_compat64_line_invalid; \
	rm -f c_test_compat64_line_invalid.out
	neo-c -I. ../code6/c_test_compat65.nc -o c_test_compat65
	./c_test_compat65
	@set -eu; \
	echo "neo-c ../code6/c_test_compat65_static_assert_fail.nc (expect diagnostic)"; \
	rm -f c_test_compat65_static_assert_fail; \
	neo-c -I. ../code6/c_test_compat65_static_assert_fail.nc -o c_test_compat65_static_assert_fail > c_test_compat65_static_assert_fail.out 2>&1 || true; \
	grep -qi "not in loop or switch" c_test_compat65_static_assert_fail.out; \
	test ! -e c_test_compat65_static_assert_fail; \
	rm -f c_test_compat65_static_assert_fail.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat65_negative_array.nc (expect diagnostic)"; \
	rm -f c_test_compat65_negative_array; \
	neo-c -I. ../code6/c_test_compat65_negative_array.nc -o c_test_compat65_negative_array > c_test_compat65_negative_array.out 2>&1 || true; \
	grep -qi "error:" c_test_compat65_negative_array.out; \
	test ! -e c_test_compat65_negative_array; \
	rm -f c_test_compat65_negative_array.out
	neo-c -I. ../code6/c_test_compat66.nc -o c_test_compat66
	./c_test_compat66
	@set -eu; \
	echo "neo-c ../code6/c_test_compat66_incomplete_type.nc (expect diagnostic)"; \
	rm -f c_test_compat66_incomplete_type; \
	neo-c -I. ../code6/c_test_compat66_incomplete_type.nc -o c_test_compat66_incomplete_type > c_test_compat66_incomplete_type.out 2>&1 || true; \
	grep -qi "never completed" c_test_compat66_incomplete_type.out; \
	test ! -e c_test_compat66_incomplete_type; \
	rm -f c_test_compat66_incomplete_type.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat66_vla_file_scope.nc (expect diagnostic)"; \
	rm -f c_test_compat66_vla_file_scope; \
	neo-c -I. ../code6/c_test_compat66_vla_file_scope.nc -o c_test_compat66_vla_file_scope > c_test_compat66_vla_file_scope.out 2>&1 || true; \
	grep -qi "variable length array declaration not allowed at file scope" c_test_compat66_vla_file_scope.out; \
	test ! -e c_test_compat66_vla_file_scope; \
	rm -f c_test_compat66_vla_file_scope.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat66_duplicate_member.nc (expect diagnostic)"; \
	rm -f c_test_compat66_duplicate_member; \
	neo-c -I. ../code6/c_test_compat66_duplicate_member.nc -o c_test_compat66_duplicate_member > c_test_compat66_duplicate_member.out 2>&1 || true; \
	grep -qi "duplicate member" c_test_compat66_duplicate_member.out; \
	test ! -e c_test_compat66_duplicate_member; \
	rm -f c_test_compat66_duplicate_member.out
	neo-c -I. ../code6/c_test_compat67.nc -o c_test_compat67 -pthread
	./c_test_compat67
	neo-c -I. ../code6/c_test_compat68.nc -o c_test_compat68 -pthread
	./c_test_compat68
	neo-c -I. ../code6/c_test_compat69.nc -o c_test_compat69 -pthread
	./c_test_compat69
	neo-c -I. ../code6/c_test_compat70.nc -o c_test_compat70 -pthread
	./c_test_compat70
	neo-c -I. ../code6/c_test_compat71.nc -o c_test_compat71 -pthread
	./c_test_compat71
	neo-c -I. ../code6/c_test_compat72.nc -o c_test_compat72 -pthread
	./c_test_compat72
	neo-c -I. ../code6/c_test_compat73.nc -o c_test_compat73 -pthread
	./c_test_compat73
	neo-c -I. ../code6/c_test_compat74.nc -o c_test_compat74 -pthread
	./c_test_compat74
	neo-c -I. -Icompat75/inc1 -Icompat75/inc2 ../code6/c_test_compat75.nc -o c_test_compat75
	./c_test_compat75
	neo-c -I. ../code6/c_test_compat76.nc -o c_test_compat76
	./c_test_compat76
	neo-c -I. ../code6/c_test_compat77.nc -o c_test_compat77
	./c_test_compat77
	neo-c -I. ../code6/c_test_compat78.nc -o c_test_compat78
	./c_test_compat78
	neo-c -I. ../code6/c_test_compat79.nc -o c_test_compat79
	./c_test_compat79
	neo-c -I. ../code6/c_test_compat80.nc -o c_test_compat80 -pthread
	./c_test_compat80
	neo-c -I. ../code6/c_test_compat81.nc -o c_test_compat81
	./c_test_compat81
	neo-c -I. ../code6/c_test_compat82.nc -o c_test_compat82 -pthread
	./c_test_compat82
	neo-c -I. ../code6/c_test_compat83.nc -o c_test_compat83
	./c_test_compat83
	neo-c -I. ../code6/c_test_compat84.nc -o c_test_compat84 -pthread
	./c_test_compat84
	neo-c -I. ../code6/c_test_compat85.nc -o c_test_compat85
	./c_test_compat85
	neo-c -I. ../code6/c_test_compat86.nc -o c_test_compat86 -pthread
	./c_test_compat86
	neo-c -I. ../code6/c_test_compat87.nc -o c_test_compat87
	./c_test_compat87
	@set -eu; \
	echo "neo-c ../code6/c_test_compat88.nc (expect diagnostic)"; \
	rm -f c_test_compat88; \
	neo-c -I. ../code6/c_test_compat88.nc -o c_test_compat88 > c_test_compat88.out 2>&1 || true; \
	grep -qi "invalid #line directive" c_test_compat88.out; \
	test ! -e c_test_compat88; \
	rm -f c_test_compat88.out
	neo-c -I. ../code6/c_test_compat89.nc -o c_test_compat89
	./c_test_compat89
	@set -eu; \
	echo "neo-c ../code6/c_test_compat90.nc (expect diagnostic)"; \
	rm -f c_test_compat90; \
	neo-c -I. ../code6/c_test_compat90.nc -o c_test_compat90 > c_test_compat90.out 2>&1 || true; \
	grep -qi "error" c_test_compat90.out; \
	test ! -e c_test_compat90; \
	rm -f c_test_compat90.out
	neo-c -I. ../code6/c_test_compat91.nc -o c_test_compat91 -pthread
	./c_test_compat91
	neo-c -I. ../code6/c_test_compat92.nc -o c_test_compat92
	./c_test_compat92
	neo-c -I. ../code6/c_test_compat93.nc -o c_test_compat93
	./c_test_compat93
	neo-c -I. ../code6/c_test_compat94.nc -o c_test_compat94
	./c_test_compat94
	@set -eu; \
	echo "neo-c ../code6/c_test_compat95.nc (expect diagnostic)"; \
	rm -f c_test_compat95; \
	neo-c -I. ../code6/c_test_compat95.nc -o c_test_compat95 > c_test_compat95.out 2>&1 || true; \
	grep -qi "invalid #line directive" c_test_compat95.out; \
	test ! -e c_test_compat95; \
	rm -f c_test_compat95.out
	neo-c -I. ../code6/c_test_compat96.nc -o c_test_compat96
	./c_test_compat96
	neo-c -I. ../code6/c_test_compat97.nc -o c_test_compat97
	./c_test_compat97
	@set -eu; \
	echo "neo-c ../code6/c_test_compat98.nc (expect diagnostic)"; \
	rm -f c_test_compat98; \
	neo-c -I. ../code6/c_test_compat98.nc -o c_test_compat98 > c_test_compat98.out 2>&1 || true; \
	grep -qi "#elif without matching #if" c_test_compat98.out; \
	test ! -e c_test_compat98; \
	rm -f c_test_compat98.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat99.nc (expect diagnostic)"; \
	rm -f c_test_compat99; \
	neo-c -I. ../code6/c_test_compat99.nc -o c_test_compat99 > c_test_compat99.out 2>&1 || true; \
	grep -qi "duplicate #else" c_test_compat99.out; \
	test ! -e c_test_compat99; \
	rm -f c_test_compat99.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat100.nc (expect diagnostic)"; \
	rm -f c_test_compat100; \
	neo-c -I. ../code6/c_test_compat100.nc -o c_test_compat100 > c_test_compat100.out 2>&1 || true; \
	grep -qi "unterminated #if block" c_test_compat100.out; \
	test ! -e c_test_compat100; \
	rm -f c_test_compat100.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat101.nc (expect diagnostic)"; \
	rm -f c_test_compat101; \
	neo-c -I. ../code6/c_test_compat101.nc -o c_test_compat101 > c_test_compat101.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat101.out; \
	test ! -e c_test_compat101; \
	rm -f c_test_compat101.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat102.nc (expect diagnostic)"; \
	rm -f c_test_compat102; \
	neo-c -I. ../code6/c_test_compat102.nc -o c_test_compat102 > c_test_compat102.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat102.out; \
	test ! -e c_test_compat102; \
	rm -f c_test_compat102.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat103.nc (expect diagnostic)"; \
	rm -f c_test_compat103; \
	neo-c -I. ../code6/c_test_compat103.nc -o c_test_compat103 > c_test_compat103.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat103.out; \
	test ! -e c_test_compat103; \
	rm -f c_test_compat103.out
	neo-c -I. ../code6/c_test_compat104.nc -o c_test_compat104
	./c_test_compat104
	@set -eu; \
	echo "neo-c ../code6/c_test_compat105.nc (expect diagnostic)"; \
	rm -f c_test_compat105; \
	neo-c -I. ../code6/c_test_compat105.nc -o c_test_compat105 > c_test_compat105.out 2>&1 || true; \
	grep -qi "#endif without matching #if" c_test_compat105.out; \
	test ! -e c_test_compat105; \
	rm -f c_test_compat105.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat106.nc (expect diagnostic)"; \
	rm -f c_test_compat106; \
	neo-c -I. ../code6/c_test_compat106.nc -o c_test_compat106 > c_test_compat106.out 2>&1 || true; \
	grep -qi "#elif after #else" c_test_compat106.out; \
	test ! -e c_test_compat106; \
	rm -f c_test_compat106.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat107.nc (expect diagnostic)"; \
	rm -f c_test_compat107; \
	neo-c -I. ../code6/c_test_compat107.nc -o c_test_compat107 > c_test_compat107.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat107.out; \
	test ! -e c_test_compat107; \
	rm -f c_test_compat107.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat108.nc (expect diagnostic)"; \
	rm -f c_test_compat108; \
	neo-c -I. ../code6/c_test_compat108.nc -o c_test_compat108 > c_test_compat108.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat108.out; \
	test ! -e c_test_compat108; \
	rm -f c_test_compat108.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat109.nc (expect diagnostic)"; \
	rm -f c_test_compat109; \
	neo-c -I. ../code6/c_test_compat109.nc -o c_test_compat109 > c_test_compat109.out 2>&1 || true; \
	grep -qi "#else without matching #if" c_test_compat109.out; \
	test ! -e c_test_compat109; \
	rm -f c_test_compat109.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat110.nc (expect diagnostic)"; \
	rm -f c_test_compat110; \
	neo-c -I. ../code6/c_test_compat110.nc -o c_test_compat110 > c_test_compat110.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat110.out; \
	test ! -e c_test_compat110; \
	rm -f c_test_compat110.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat111.nc (expect diagnostic)"; \
	rm -f c_test_compat111; \
	neo-c -I. ../code6/c_test_compat111.nc -o c_test_compat111 > c_test_compat111.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat111.out; \
	test ! -e c_test_compat111; \
	rm -f c_test_compat111.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat112.nc (expect diagnostic)"; \
	rm -f c_test_compat112; \
	neo-c -I. ../code6/c_test_compat112.nc -o c_test_compat112 > c_test_compat112.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat112.out; \
	test ! -e c_test_compat112; \
	rm -f c_test_compat112.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat113.nc (expect diagnostic)"; \
	rm -f c_test_compat113; \
	neo-c -I. ../code6/c_test_compat113.nc -o c_test_compat113 > c_test_compat113.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat113.out; \
	test ! -e c_test_compat113; \
	rm -f c_test_compat113.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat114.nc (expect diagnostic)"; \
	rm -f c_test_compat114; \
	neo-c -I. ../code6/c_test_compat114.nc -o c_test_compat114 > c_test_compat114.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat114.out; \
	test ! -e c_test_compat114; \
	rm -f c_test_compat114.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat115.nc (expect diagnostic)"; \
	rm -f c_test_compat115; \
	neo-c -I. ../code6/c_test_compat115.nc -o c_test_compat115 > c_test_compat115.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat115.out; \
	test ! -e c_test_compat115; \
	rm -f c_test_compat115.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat116.nc (expect diagnostic)"; \
	rm -f c_test_compat116; \
	neo-c -I. ../code6/c_test_compat116.nc -o c_test_compat116 > c_test_compat116.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat116.out; \
	test ! -e c_test_compat116; \
	rm -f c_test_compat116.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat117.nc (expect diagnostic)"; \
	rm -f c_test_compat117; \
	neo-c -I. ../code6/c_test_compat117.nc -o c_test_compat117 > c_test_compat117.out 2>&1 || true; \
	grep -qi "invalid #line directive" c_test_compat117.out; \
	test ! -e c_test_compat117; \
	rm -f c_test_compat117.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat118.nc (expect diagnostic)"; \
	rm -f c_test_compat118; \
	neo-c -I. ../code6/c_test_compat118.nc -o c_test_compat118 > c_test_compat118.out 2>&1 || true; \
	grep -qi "invalid #line directive" c_test_compat118.out; \
	test ! -e c_test_compat118; \
	rm -f c_test_compat118.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat119.nc (expect diagnostic)"; \
	rm -f c_test_compat119; \
	neo-c -I. ../code6/c_test_compat119.nc -o c_test_compat119 > c_test_compat119.out 2>&1 || true; \
	grep -qi "invalid #line directive" c_test_compat119.out; \
	test ! -e c_test_compat119; \
	rm -f c_test_compat119.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat120.nc (expect diagnostic)"; \
	rm -f c_test_compat120; \
	neo-c -I. ../code6/c_test_compat120.nc -o c_test_compat120 > c_test_compat120.out 2>&1 || true; \
	grep -qi "invalid #line directive" c_test_compat120.out; \
	test ! -e c_test_compat120; \
	rm -f c_test_compat120.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat121.nc (expect diagnostic)"; \
	rm -f c_test_compat121; \
	neo-c -I. ../code6/c_test_compat121.nc -o c_test_compat121 > c_test_compat121.out 2>&1 || true; \
	grep -qi "invalid #ifdef directive" c_test_compat121.out; \
	test ! -e c_test_compat121; \
	rm -f c_test_compat121.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat122.nc (expect diagnostic)"; \
	rm -f c_test_compat122; \
	neo-c -I. ../code6/c_test_compat122.nc -o c_test_compat122 > c_test_compat122.out 2>&1 || true; \
	grep -qi "invalid #ifndef directive" c_test_compat122.out; \
	test ! -e c_test_compat122; \
	rm -f c_test_compat122.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat123.nc (expect diagnostic)"; \
	rm -f c_test_compat123; \
	neo-c -I. ../code6/c_test_compat123.nc -o c_test_compat123 > c_test_compat123.out 2>&1 || true; \
	grep -qi "invalid #undef directive" c_test_compat123.out; \
	test ! -e c_test_compat123; \
	rm -f c_test_compat123.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat124.nc (expect diagnostic)"; \
	rm -f c_test_compat124; \
	neo-c -I. ../code6/c_test_compat124.nc -o c_test_compat124 > c_test_compat124.out 2>&1 || true; \
	grep -qi "invalid pointer base type" c_test_compat124.out; \
	test ! -e c_test_compat124; \
	rm -f c_test_compat124.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat125.nc (expect diagnostic)"; \
	rm -f c_test_compat125; \
	neo-c -I. ../code6/c_test_compat125.nc -o c_test_compat125 > c_test_compat125.out 2>&1 || true; \
	grep -qi "invalid stack value" c_test_compat125.out; \
	test ! -e c_test_compat125; \
	rm -f c_test_compat125.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat126.nc (expect diagnostic)"; \
	rm -f c_test_compat126; \
	neo-c -I. ../code6/c_test_compat126.nc -o c_test_compat126 > c_test_compat126.out 2>&1 || true; \
	grep -qi "illegal storage class on file-scoped variable" c_test_compat126.out; \
	test ! -e c_test_compat126; \
	rm -f c_test_compat126.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat127.nc (expect diagnostic)"; \
	rm -f c_test_compat127; \
	neo-c -I. ../code6/c_test_compat127.nc -o c_test_compat127 > c_test_compat127.out 2>&1 || true; \
	grep -qi "bit-field" c_test_compat127.out; \
	test ! -e c_test_compat127; \
	rm -f c_test_compat127.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat128.nc (expect diagnostic)"; \
	rm -f c_test_compat128; \
	neo-c -I. ../code6/c_test_compat128.nc -o c_test_compat128 > c_test_compat128.out 2>&1 || true; \
	grep -qi "flexible array member" c_test_compat128.out; \
	test ! -e c_test_compat128; \
	rm -f c_test_compat128.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat129.nc (expect diagnostic)"; \
	rm -f c_test_compat129; \
	neo-c -I. ../code6/c_test_compat129.nc -o c_test_compat129 > c_test_compat129.out 2>&1 || true; \
	grep -qi "array has incomplete element type" c_test_compat129.out; \
	test ! -e c_test_compat129; \
	rm -f c_test_compat129.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat130.nc (expect diagnostic)"; \
	rm -f c_test_compat130; \
	neo-c -I. ../code6/c_test_compat130.nc -o c_test_compat130 > c_test_compat130.out 2>&1 || true; \
	grep -qi "field designator" c_test_compat130.out; \
	test ! -e c_test_compat130; \
	rm -f c_test_compat130.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat131.nc (expect diagnostic)"; \
	rm -f c_test_compat131; \
	neo-c -I. ../code6/c_test_compat131.nc -o c_test_compat131 > c_test_compat131.out 2>&1 || true; \
	grep -qi "redefinition of enumerator" c_test_compat131.out; \
	test ! -e c_test_compat131; \
	rm -f c_test_compat131.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat132.nc (expect diagnostic)"; \
	rm -f c_test_compat132; \
	neo-c -I. ../code6/c_test_compat132.nc -o c_test_compat132 > c_test_compat132.out 2>&1 || true; \
	grep -qi "zero width" c_test_compat132.out; \
	test ! -e c_test_compat132; \
	rm -f c_test_compat132.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat133.nc (expect diagnostic)"; \
	rm -f c_test_compat133; \
	neo-c -I. ../code6/c_test_compat133.nc -o c_test_compat133 > c_test_compat133.out 2>&1 || true; \
	grep -qi "incomplete type" c_test_compat133.out; \
	test ! -e c_test_compat133; \
	rm -f c_test_compat133.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat134.nc (expect diagnostic)"; \
	rm -f c_test_compat134; \
	neo-c -I. ../code6/c_test_compat134.nc -o c_test_compat134 > c_test_compat134.out 2>&1 || true; \
	grep -qi "invalid #include directive" c_test_compat134.out; \
	test ! -e c_test_compat134; \
	rm -f c_test_compat134.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat135.nc (expect diagnostic)"; \
	rm -f c_test_compat135; \
	neo-c -I. ../code6/c_test_compat135.nc -o c_test_compat135 > c_test_compat135.out 2>&1 || true; \
	grep -qi "invalid #include directive" c_test_compat135.out; \
	test ! -e c_test_compat135; \
	rm -f c_test_compat135.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat136.nc (expect diagnostic)"; \
	rm -f c_test_compat136; \
	neo-c -I. ../code6/c_test_compat136.nc -o c_test_compat136 > c_test_compat136.out 2>&1 || true; \
	grep -qi "invalid #include directive" c_test_compat136.out; \
	test ! -e c_test_compat136; \
	rm -f c_test_compat136.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat137.nc (expect diagnostic)"; \
	rm -f c_test_compat137; \
	neo-c -I. ../code6/c_test_compat137.nc -o c_test_compat137 > c_test_compat137.out 2>&1 || true; \
	grep -qi "include file not found" c_test_compat137.out; \
	test ! -e c_test_compat137; \
	rm -f c_test_compat137.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat138.nc (expect diagnostic)"; \
	rm -f c_test_compat138; \
	neo-c -I. ../code6/c_test_compat138.nc -o c_test_compat138 > c_test_compat138.out 2>&1 || true; \
	grep -qi "invalid #include directive" c_test_compat138.out; \
	test ! -e c_test_compat138; \
	rm -f c_test_compat138.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat139.nc (expect diagnostic)"; \
	rm -f c_test_compat139; \
	neo-c -I. ../code6/c_test_compat139.nc -o c_test_compat139 > c_test_compat139.out 2>&1 || true; \
	grep -qi "include file not found" c_test_compat139.out; \
	test ! -e c_test_compat139; \
	rm -f c_test_compat139.out
	neo-c -I. ../code6/c_test_compat140.nc -o c_test_compat140
	./c_test_compat140
	neo-c -I. ../code6/c_test_compat141.nc -o c_test_compat141
	./c_test_compat141
	@set -eu; \
	echo "neo-c ../code6/c_test_compat142.nc (expect diagnostic)"; \
	rm -f c_test_compat142; \
	neo-c -I. ../code6/c_test_compat142.nc -o c_test_compat142 > c_test_compat142.out 2>&1 || true; \
	grep -qi "^error:" c_test_compat142.out; \
	test ! -e c_test_compat142; \
	rm -f c_test_compat142.out
	neo-c -I. ../code6/c_test_compat143.nc -o c_test_compat143
	./c_test_compat143
	neo-c -I. ../code6/c_test_compat144.nc -o c_test_compat144
	./c_test_compat144
	@set -eu; \
	echo "neo-c ../code6/c_test_compat145.nc (expect diagnostic)"; \
	rm -f c_test_compat145; \
	neo-c -I. ../code6/c_test_compat145.nc -o c_test_compat145 > c_test_compat145.out 2>&1 || true; \
	grep -qi "invalid #include directive" c_test_compat145.out; \
	test ! -e c_test_compat145; \
	rm -f c_test_compat145.out
	neo-c -I. -Icompat146/inc1 -Icompat146/inc2 ../code6/c_test_compat146.nc -o c_test_compat146
	./c_test_compat146
	@set -eu; \
	echo "neo-c ../code6/c_test_compat147.nc (expect diagnostic)"; \
	rm -f c_test_compat147; \
	neo-c -I. ../code6/c_test_compat147.nc -o c_test_compat147 > c_test_compat147.out 2>&1 || true; \
	grep -qi "invalid #include directive" c_test_compat147.out; \
	test ! -e c_test_compat147; \
	rm -f c_test_compat147.out
	neo-c -I. ../code6/c_test_compat148.nc -o c_test_compat148
	./c_test_compat148
	neo-c -I. ../code6/c_test_compat149.nc -o c_test_compat149
	./c_test_compat149
	neo-c -I. ../code6/c_test_compat150.nc -o c_test_compat150
	./c_test_compat150
	neo-c -I. ../code6/c_test_compat151.nc -o c_test_compat151
	./c_test_compat151
	@set -eu; \
	echo "neo-c ../code6/c_test_compat152.nc (expect diagnostic)"; \
	rm -f c_test_compat152; \
	neo-c -I. ../code6/c_test_compat152.nc -o c_test_compat152 > c_test_compat152.out 2>&1 || true; \
	grep -qi "invalid #line directive" c_test_compat152.out; \
	test ! -e c_test_compat152; \
	rm -f c_test_compat152.out
	neo-c -I. ../code6/c_test_compat153.nc -o c_test_compat153
	./c_test_compat153
	neo-c -I. ../code6/c_test_compat154.nc -o c_test_compat154
	./c_test_compat154
	neo-c -I. ../code6/c_test_compat155.nc -o c_test_compat155
	./c_test_compat155
	neo-c -I. ../code6/c_test_compat156.nc -o c_test_compat156
	./c_test_compat156
	@set -eu; \
	echo "neo-c ../code6/c_test_compat157.nc (expect diagnostic)"; \
	rm -f c_test_compat157; \
	neo-c -I. ../code6/c_test_compat157.nc -o c_test_compat157 > c_test_compat157.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat157.out; \
	test ! -e c_test_compat157; \
	rm -f c_test_compat157.out
	neo-c -I. -Icompat158/inc1 -Icompat158/inc2 ../code6/c_test_compat158.nc -o c_test_compat158
	./c_test_compat158
	neo-c -I. ../code6/c_test_compat159.nc -o c_test_compat159
	./c_test_compat159
	neo-c -I. -Icompat160/inc1 -Icompat160/inc2 ../code6/c_test_compat160.nc -o c_test_compat160
	./c_test_compat160
	@set -eu; \
	echo "neo-c ../code6/c_test_compat161.nc (expect diagnostic)"; \
	rm -f c_test_compat161; \
	neo-c -I. ../code6/c_test_compat161.nc -o c_test_compat161 > c_test_compat161.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat161.out; \
	test ! -e c_test_compat161; \
	rm -f c_test_compat161.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat162.nc (expect diagnostic)"; \
	rm -f c_test_compat162; \
	neo-c -I. ../code6/c_test_compat162.nc -o c_test_compat162 > c_test_compat162.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat162.out; \
	test ! -e c_test_compat162; \
	rm -f c_test_compat162.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat163.nc (expect diagnostic)"; \
	rm -f c_test_compat163; \
	neo-c -I. ../code6/c_test_compat163.nc -o c_test_compat163 > c_test_compat163.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat163.out; \
	test ! -e c_test_compat163; \
	rm -f c_test_compat163.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat164.nc (expect diagnostic)"; \
	rm -f c_test_compat164; \
	neo-c -I. ../code6/c_test_compat164.nc -o c_test_compat164 > c_test_compat164.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat164.out; \
	test ! -e c_test_compat164; \
	rm -f c_test_compat164.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat165.nc (expect diagnostic)"; \
	rm -f c_test_compat165; \
	neo-c -I. ../code6/c_test_compat165.nc -o c_test_compat165 > c_test_compat165.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat165.out; \
	test ! -e c_test_compat165; \
	rm -f c_test_compat165.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat166.nc (expect diagnostic)"; \
	rm -f c_test_compat166; \
	neo-c -I. ../code6/c_test_compat166.nc -o c_test_compat166 > c_test_compat166.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat166.out; \
	test ! -e c_test_compat166; \
	rm -f c_test_compat166.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat167.nc (expect diagnostic)"; \
	rm -f c_test_compat167; \
	neo-c -I. ../code6/c_test_compat167.nc -o c_test_compat167 > c_test_compat167.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat167.out; \
	test ! -e c_test_compat167; \
	rm -f c_test_compat167.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat168.nc (expect diagnostic)"; \
	rm -f c_test_compat168; \
	neo-c -I. ../code6/c_test_compat168.nc -o c_test_compat168 > c_test_compat168.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat168.out; \
	test ! -e c_test_compat168; \
	rm -f c_test_compat168.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat169.nc (expect diagnostic)"; \
	rm -f c_test_compat169; \
	neo-c -I. ../code6/c_test_compat169.nc -o c_test_compat169 > c_test_compat169.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat169.out; \
	test ! -e c_test_compat169; \
	rm -f c_test_compat169.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat170.nc (expect diagnostic)"; \
	rm -f c_test_compat170; \
	neo-c -I. ../code6/c_test_compat170.nc -o c_test_compat170 > c_test_compat170.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat170.out; \
	test ! -e c_test_compat170; \
	rm -f c_test_compat170.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat171.nc (expect diagnostic)"; \
	rm -f c_test_compat171; \
	neo-c -I. ../code6/c_test_compat171.nc -o c_test_compat171 > c_test_compat171.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat171.out; \
	test ! -e c_test_compat171; \
	rm -f c_test_compat171.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat172.nc (expect diagnostic)"; \
	rm -f c_test_compat172; \
	neo-c -I. ../code6/c_test_compat172.nc -o c_test_compat172 > c_test_compat172.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat172.out; \
	test ! -e c_test_compat172; \
	rm -f c_test_compat172.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat173.nc (expect diagnostic)"; \
	rm -f c_test_compat173; \
	neo-c -I. ../code6/c_test_compat173.nc -o c_test_compat173 > c_test_compat173.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat173.out; \
	test ! -e c_test_compat173; \
	rm -f c_test_compat173.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat174.nc (expect diagnostic)"; \
	rm -f c_test_compat174; \
	neo-c -I. ../code6/c_test_compat174.nc -o c_test_compat174 > c_test_compat174.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat174.out; \
	test ! -e c_test_compat174; \
	rm -f c_test_compat174.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat175.nc (expect diagnostic)"; \
	rm -f c_test_compat175; \
	neo-c -I. ../code6/c_test_compat175.nc -o c_test_compat175 > c_test_compat175.out 2>&1 || true; \
	grep -qi "\\[error\\]" c_test_compat175.out; \
	test ! -e c_test_compat175; \
	rm -f c_test_compat175.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat176.nc (expect diagnostic)"; \
	rm -f c_test_compat176; \
	neo-c -I. ../code6/c_test_compat176.nc -o c_test_compat176 > c_test_compat176.out 2>&1 || true; \
	grep -qi "\\[error\\]" c_test_compat176.out; \
	test ! -e c_test_compat176; \
	rm -f c_test_compat176.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat177.nc (expect diagnostic)"; \
	rm -f c_test_compat177; \
	neo-c -I. ../code6/c_test_compat177.nc -o c_test_compat177 > c_test_compat177.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat177.out; \
	test ! -e c_test_compat177; \
	rm -f c_test_compat177.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat178.nc (expect diagnostic)"; \
	rm -f c_test_compat178; \
	neo-c -I. ../code6/c_test_compat178.nc -o c_test_compat178 > c_test_compat178.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat178.out; \
	test ! -e c_test_compat178; \
	rm -f c_test_compat178.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat179.nc (expect diagnostic)"; \
	rm -f c_test_compat179; \
	neo-c -I. ../code6/c_test_compat179.nc -o c_test_compat179 > c_test_compat179.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat179.out; \
	test ! -e c_test_compat179; \
	rm -f c_test_compat179.out
	neo-c -I. ../code6/c_test_compat180.nc -o c_test_compat180
	./c_test_compat180
	@set -eu; \
	echo "neo-c ../code6/c_test_compat181.nc (expect diagnostic)"; \
	rm -f c_test_compat181; \
	neo-c -I. ../code6/c_test_compat181.nc -o c_test_compat181 > c_test_compat181.out 2>&1 || true; \
	grep -qi "invalid #if expression" c_test_compat181.out; \
	test ! -e c_test_compat181; \
	rm -f c_test_compat181.out
	neo-c -I. ../code6/c_test_compat182.nc -o c_test_compat182
	./c_test_compat182
	neo-c -I. ../code6/c_test_compat183.nc -o c_test_compat183
	./c_test_compat183
	neo-c -I. ../code6/c_test_compat184.nc -o c_test_compat184
	./c_test_compat184
	neo-c -I. ../code6/c_test_compat185.nc -o c_test_compat185
	./c_test_compat185
	neo-c -I. ../code6/c_test_compat186.nc -o c_test_compat186
	./c_test_compat186
	neo-c -I. ../code6/c_test_compat187.nc -o c_test_compat187
	./c_test_compat187
	neo-c -I. ../code6/c_test_compat188.nc -o c_test_compat188
	./c_test_compat188
	neo-c -I. ../code6/c_test_compat189.nc -o c_test_compat189
	./c_test_compat189
	neo-c -I. ../code6/c_test_compat190.nc -o c_test_compat190
	./c_test_compat190
	neo-c -I. ../code6/c_test_compat191.nc -o c_test_compat191
	./c_test_compat191
	neo-c -I. ../code6/c_test_compat192.nc -o c_test_compat192
	./c_test_compat192
	neo-c -I. ../code6/c_test_compat193.nc -o c_test_compat193
	./c_test_compat193
	neo-c -I. ../code6/c_test_compat194.nc -o c_test_compat194
	./c_test_compat194
	neo-c -I. ../code6/c_test_compat195.nc -o c_test_compat195
	./c_test_compat195
	neo-c -I. ../code6/c_test_compat196.nc -o c_test_compat196
	./c_test_compat196
	@set -eu; \
	echo "neo-c ../code6/c_test_compat197.nc (expect diagnostic)"; \
	rm -f c_test_compat197; \
	neo-c -I. ../code6/c_test_compat197.nc -o c_test_compat197 > c_test_compat197.out 2>&1 || true; \
	grep -qi "invalid #line directive" c_test_compat197.out; \
	test ! -e c_test_compat197; \
	rm -f c_test_compat197.out
	neo-c -I. ../code6/c_test_compat198.nc -o c_test_compat198
	./c_test_compat198
	neo-c -I. ../code6/c_test_compat199.nc -o c_test_compat199
	./c_test_compat199
	neo-c -I. ../code6/c_test_compat200.nc -o c_test_compat200
	./c_test_compat200
	neo-c -I. ../code6/c_test_compat201.nc -o c_test_compat201
	./c_test_compat201
	neo-c -I. ../code6/c_test_compat202.nc -o c_test_compat202
	./c_test_compat202
	neo-c -I. ../code6/c_test_compat203.nc -o c_test_compat203
	./c_test_compat203
	neo-c -I. ../code6/c_test_compat204.nc -o c_test_compat204
	./c_test_compat204
	neo-c -I. ../code6/c_test_compat205.nc -o c_test_compat205
	./c_test_compat205
	neo-c -I. ../code6/c_test_compat206.nc -o c_test_compat206
	./c_test_compat206
	neo-c -I. ../code6/c_test_compat207.nc -o c_test_compat207
	./c_test_compat207
	neo-c -I. ../code6/c_test_compat208.nc -o c_test_compat208
	./c_test_compat208
	neo-c -I. ../code6/c_test_compat209.nc -o c_test_compat209
	./c_test_compat209
	neo-c -I. ../code6/c_test_compat210.nc -o c_test_compat210
	./c_test_compat210
	neo-c -I. ../code6/c_test_compat211.nc -o c_test_compat211
	./c_test_compat211
	neo-c -I. ../code6/c_test_compat212.nc -o c_test_compat212
	./c_test_compat212
	neo-c -I. -Icompat213/inc1 -Icompat213/inc2 ../code6/c_test_compat213.nc -o c_test_compat213
	./c_test_compat213
	@set -eu; \
	echo "neo-c ../code6/c_test_compat214.nc (expect diagnostic)"; \
	rm -f c_test_compat214; \
	neo-c -I. ../code6/c_test_compat214.nc -o c_test_compat214 > c_test_compat214.out 2>&1 || true; \
	grep -qi "invalid #define directive" c_test_compat214.out; \
	test ! -e c_test_compat214; \
	rm -f c_test_compat214.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat215.nc (expect diagnostic)"; \
	rm -f c_test_compat215; \
	neo-c -I. ../code6/c_test_compat215.nc -o c_test_compat215 > c_test_compat215.out 2>&1 || true; \
	grep -qi "invalid #define directive" c_test_compat215.out; \
	test ! -e c_test_compat215; \
	rm -f c_test_compat215.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat216.nc (expect diagnostic)"; \
	rm -f c_test_compat216; \
	neo-c -I. ../code6/c_test_compat216.nc -o c_test_compat216 > c_test_compat216.out 2>&1 || true; \
	grep -qi "invalid #define directive" c_test_compat216.out; \
	test ! -e c_test_compat216; \
	rm -f c_test_compat216.out
	neo-c -I. ../code6/c_test_compat217.nc -o c_test_compat217
	./c_test_compat217
	neo-c -I. ../code6/c_test_compat218.nc -o c_test_compat218
	./c_test_compat218
	@set -eu; \
	echo "neo-c ../code6/c_test_compat219.nc (expect diagnostic)"; \
	rm -f c_test_compat219; \
	neo-c -I. ../code6/c_test_compat219.nc -o c_test_compat219 > c_test_compat219.out 2>&1 || true; \
	grep -qi "invalid #define directive" c_test_compat219.out; \
	test ! -e c_test_compat219; \
	rm -f c_test_compat219.out
	neo-c -I. ../code6/c_test_compat220.nc -o c_test_compat220
	./c_test_compat220
	@set -eu; \
	echo "neo-c ../code6/c_test_compat221.nc (expect diagnostic)"; \
	rm -f c_test_compat221; \
	neo-c -I. ../code6/c_test_compat221.nc -o c_test_compat221 > c_test_compat221.out 2>&1 || true; \
	grep -qi "incompatible macro redefinition" c_test_compat221.out; \
	test ! -e c_test_compat221; \
	rm -f c_test_compat221.out
	@set -eu; \
	echo "neo-c ../code6/c_test_compat222.nc (expect diagnostic)"; \
	rm -f c_test_compat222; \
	neo-c -I. ../code6/c_test_compat222.nc -o c_test_compat222 > c_test_compat222.out 2>&1 || true; \
	grep -qi "incompatible macro redefinition" c_test_compat222.out; \
	test ! -e c_test_compat222; \
	rm -f c_test_compat222.out
	neo-c -I. ../code6/c_test_compat223.nc -o c_test_compat223
	./c_test_compat223
	neo-c -I. ../code6/c_test_compat224.nc -o c_test_compat224
	./c_test_compat224
	neo-c -I. ../code6/c_test_compat225.nc -o c_test_compat225
	./c_test_compat225
	neo-c -I. ../code6/c_test_compat226.nc -o c_test_compat226
	./c_test_compat226
	neo-c -I. ../code6/c_test_compat227.nc -o c_test_compat227
	./c_test_compat227
	neo-c -I. ../code6/c_test_compat228.nc -o c_test_compat228
	./c_test_compat228
	neo-c -I. ../code6/c_test_compat229.nc -o c_test_compat229
	./c_test_compat229
	neo-c -I. ../code6/c_test_compat230.nc -o c_test_compat230
	./c_test_compat230
	neo-c -I. ../code6/c_test_compat231.nc -o c_test_compat231
	./c_test_compat231
	neo-c -I. ../code6/c_test_compat232.nc -o c_test_compat232
	./c_test_compat232
	neo-c -I. ../code6/c_test_compat233.nc -o c_test_compat233
	./c_test_compat233
	neo-c -I. ../code6/c_test_compat234.nc -o c_test_compat234
	./c_test_compat234
	neo-c -I. ../code6/c_test_compat235.nc -o c_test_compat235
	./c_test_compat235
	neo-c -I. ../code6/c_test_compat236.nc -o c_test_compat236
	./c_test_compat236
	neo-c -I. ../code6/c_test_compat237.nc -o c_test_compat237
	./c_test_compat237
	neo-c -I. ../code6/c_test_compat238.nc -o c_test_compat238
	./c_test_compat238
	neo-c -I. ../code6/c_test_compat239.nc -o c_test_compat239
	./c_test_compat239
	neo-c -I. ../code6/c_test_compat240.nc -o c_test_compat240
	./c_test_compat240
	neo-c -I. ../code6/c_test_compat241.nc -o c_test_compat241
	./c_test_compat241
	neo-c -I. ../code6/c_test_compat242.nc -o c_test_compat242
	./c_test_compat242
	neo-c -I. ../code6/c_test_compat243.nc -o c_test_compat243
	./c_test_compat243
	neo-c -I. ../code6/c_test_compat244.nc -o c_test_compat244
	./c_test_compat244
	neo-c -I. ../code6/c_test_compat245.nc -o c_test_compat245
	./c_test_compat245
	neo-c -I. ../code6/c_test_compat246.nc -o c_test_compat246
	./c_test_compat246
	neo-c -I. ../code6/c_test_compat247.nc -o c_test_compat247
	./c_test_compat247
	neo-c -I. ../code6/c_test_compat248.nc -o c_test_compat248
	./c_test_compat248
	neo-c -I. ../code6/c_test_compat249.nc -o c_test_compat249
	./c_test_compat249
	neo-c -I. ../code6/c_test_compat250.nc -o c_test_compat250
	./c_test_compat250
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
	rm -rf ./c_test_compat56 ./c_test_compat57 ./c_test_compat58 ./c_test_compat59 ./c_test_compat60 ./c_test_compat61 ./c_test_compat62 ./c_test_compat63 ./c_test_compat64 ./c_test_compat65 ./c_test_compat66 ./c_test_compat67 ./c_test_compat68 ./c_test_compat69 ./c_test_compat70 ./c_test_compat71 ./c_test_compat72 ./c_test_compat73 ./c_test_compat74 ./c_test_compat75 ./c_test_compat76 ./c_test_compat77 ./c_test_compat78 ./c_test_compat79 ./c_test_compat80 ./c_test_compat81 ./c_test_compat82 ./c_test_compat83 ./c_test_compat84 ./c_test_compat85 ./c_test_compat86 ./c_test_compat87 ./c_test_compat88 ./c_test_compat89 ./c_test_compat90 ./c_test_compat91 ./c_test_compat92 ./c_test_compat93 ./c_test_compat94 ./c_test_compat95 ./c_test_compat96 ./c_test_compat97 ./c_test_compat98 ./c_test_compat99 ./c_test_compat100 ./c_test_compat101 ./c_test_compat102 ./c_test_compat103 ./c_test_compat104 ./c_test_compat105 ./c_test_compat106 ./c_test_compat107 ./c_test_compat108 ./c_test_compat109 ./c_test_compat110 ./c_test_compat111 ./c_test_compat112 ./c_test_compat113 ./c_test_compat114 ./c_test_compat115 ./c_test_compat116 ./c_test_compat117 ./c_test_compat118 ./c_test_compat119 ./c_test_compat120 ./c_test_compat121 ./c_test_compat122 ./c_test_compat123 ./c_test_compat124 ./c_test_compat125 ./c_test_compat126 ./c_test_compat127 ./c_test_compat128 ./c_test_compat129 ./c_test_compat130 ./c_test_compat131 ./c_test_compat132 ./c_test_compat133 ./c_test_compat134 ./c_test_compat135 ./c_test_compat136 ./c_test_compat137 ./c_test_compat138 ./c_test_compat139 ./c_test_compat140 ./c_test_compat141 ./c_test_compat142 ./c_test_compat143 ./c_test_compat144 ./c_test_compat145 ./c_test_compat146 ./c_test_compat147 ./c_test_compat148 ./c_test_compat149 ./c_test_compat150 ./c_test_compat151 ./c_test_compat152 ./c_test_compat153 ./c_test_compat154 ./c_test_compat155 ./c_test_compat156 ./c_test_compat157 ./c_test_compat158 ./c_test_compat159 ./c_test_compat160 ./c_test_compat161 ./c_test_compat162 ./c_test_compat163 ./c_test_compat164 ./c_test_compat165 ./c_test_compat166 ./c_test_compat167 ./c_test_compat168 ./c_test_compat169 ./c_test_compat170 ./c_test_compat171 ./c_test_compat172 ./c_test_compat173 ./c_test_compat174 ./c_test_compat175 ./c_test_compat176 ./c_test_compat177 ./c_test_compat178 ./c_test_compat179 ./c_test_compat180 ./c_test_compat181 ./c_test_compat182 ./c_test_compat183 ./c_test_compat184 ./c_test_compat185 ./c_test_compat186 ./c_test_compat187 ./c_test_compat188 ./c_test_compat189 ./c_test_compat190 ./c_test_compat191 ./c_test_compat192 ./c_test_compat193 ./c_test_compat194 ./c_test_compat195 ./c_test_compat196 ./c_test_compat197 ./c_test_compat198 ./c_test_compat199 ./c_test_compat200 ./c_test_compat201 ./c_test_compat202 ./c_test_compat203 ./c_test_compat204 ./c_test_compat205 ./c_test_compat206 ./c_test_compat207 ./c_test_compat208 ./c_test_compat209 ./c_test_compat210 ./c_test_compat211 ./c_test_compat212 ./c_test_compat213 ./c_test_compat214 ./c_test_compat215 ./c_test_compat216 ./c_test_compat217 ./c_test_compat218 ./c_test_compat219 ./c_test_compat220 ./c_test_compat221 ./c_test_compat222 ./c_test_compat223 ./c_test_compat224 ./c_test_compat225 ./c_test_compat226 ./c_test_compat227 ./c_test_compat228 ./c_test_compat229 ./c_test_compat230 ./c_test_compat231 ./c_test_compat232 ./c_test_compat233 ./c_test_compat234 ./c_test_compat235 ./c_test_compat236 ./c_test_compat237 ./c_test_compat238 ./c_test_compat239 ./c_test_compat240 ./c_test_compat241 ./c_test_compat242 ./c_test_compat243 ./c_test_compat244 ./c_test_compat245 ./c_test_compat246 ./c_test_compat247 ./c_test_compat248 ./c_test_compat249 ./c_test_compat250
	rm -rf ./reports/external_corpus
