NEOC ?= neo-c
NFLAGS ?= -I..
HOST_CC ?= cc

TEST_OK := \
	ref_basic \
	ref_array_elem \
	ref_ptr \
	ref_ptrref \
	span_array \
	span_array_int \
	span_array_read \
	span_decl_assign \
	span_decl_load \
	span_decl_store \
	span_unwrap_len \
	span_add_sub \
	span_memcmp \
	span_ptr \
	span_ptr_int \
	readme_features \
	test_result_ignore \
	test_result_struct_try

TEST_FAIL_NULL := \
	ref_self_null \
	span_self_null

TEST_FAIL_REF_INIT := ref_null

TEST_FAIL_VANISHED := \
	ref_heap_vanished \
	ref_vanished \

TEST_FAIL_SPAN_RANGE :=

.PHONY: all test test-micro8 test-micro16 test-micro32 clean

all: test

test:
	@set -eu; \
	for t in $(TEST_OK); do \
		echo "$(NEOC) $(NFLAGS) $$t.nc"; \
		$(NEOC) $(NFLAGS) $$t.nc; \
		echo "./$$t"; \
		./$$t; \
	done; \
	for t in $(TEST_FAIL_NULL); do \
		echo "$(NEOC) $(NFLAGS) $$t.nc"; \
		$(NEOC) $(NFLAGS) $$t.nc; \
		echo "./$$t (expect failure)"; \
		if ./$$t > $$t.out 2>&1; then \
			echo "$$t should fail but succeeded"; \
			exit 1; \
		fi; \
		grep -q "null pointer exception" $$t.out; \
		rm -f $$t.out; \
	done; \
	for t in $(TEST_FAIL_REF_INIT); do \
		echo "$(NEOC) $(NFLAGS) $$t.nc"; \
		$(NEOC) $(NFLAGS) $$t.nc; \
		echo "./$$t (expect failure)"; \
		if ./$$t > $$t.out 2>&1; then \
			echo "$$t should fail but succeeded"; \
			exit 1; \
		fi; \
		grep -q "ref is pointer and not null" $$t.out; \
		rm -f $$t.out; \
	done; \
	for t in $(TEST_FAIL_VANISHED); do \
		echo "$(NEOC) $(NFLAGS) $$t.nc"; \
		$(NEOC) $(NFLAGS) $$t.nc; \
		echo "./$$t (expect failure)"; \
		if ./$$t > $$t.out 2>&1; then \
			echo "$$t should fail but succeeded"; \
			exit 1; \
		fi; \
		grep -Eq "refferenced (stack|heap) object is vanished" $$t.out; \
		rm -f $$t.out; \
	done; \
	for t in $(TEST_FAIL_SPAN_RANGE); do \
		echo "$(NEOC) $(NFLAGS) $$t.nc"; \
		$(NEOC) $(NFLAGS) $$t.nc; \
		echo "./$$t (expect failure)"; \
		if ./$$t > $$t.out 2>&1; then \
			echo "$$t should fail but succeeded"; \
			exit 1; \
		fi; \
		grep -q "out of range of span" $$t.out; \
		rm -f $$t.out; \
	done; \
	echo "code5 tests passed"

test-micro32:
	$(NEOC) $(NFLAGS) -micro32 -S micro32_smoke.nc
	grep -q '^#define __BAREMETAL__ 1$$' micro32_smoke.c
	grep -q '^#define __NEO_MICRO__ 1$$' micro32_smoke.c
	grep -q '^#define __NEO_MICRO32__ 1$$' micro32_smoke.c
	grep -q '^typedef unsigned int size_t;$$' micro32_smoke.c
	arm-none-eabi-gcc -std=gnu11 -mcpu=cortex-m0plus -mthumb \
		-ffreestanding -fno-builtin -fno-stack-protector \
		-DNEO_MICRO_HEAP_SIZE=4096 -c micro32_smoke.c -o micro32_smoke.o
	@if command -v riscv64-linux-gnu-gcc >/dev/null 2>&1; then \
		riscv64-linux-gnu-gcc -std=gnu11 -march=rv32imac -mabi=ilp32 \
			-ffreestanding -fno-builtin -fno-stack-protector \
			-DNEO_MICRO_HEAP_SIZE=4096 -c micro32_smoke.c -o micro32_smoke-rv32.o; \
	fi
	@if $(HOST_CC) -std=gnu11 -c micro32_smoke.c -o micro32_smoke-host.o > micro32_smoke.out 2>&1; then \
		echo "64-bit host compile should reject -micro32"; \
		exit 1; \
	fi
	grep -q -- "-micro32 requires 32-bit pointers" micro32_smoke.out
	rm -f micro32_smoke.c micro32_smoke.nc.i micro32_smoke.o micro32_smoke-rv32.o micro32_smoke-host.o micro32_smoke.out
	@echo "micro32 tests passed"

test-micro16:
	$(NEOC) $(NFLAGS) -micro16 -S micro16_smoke.nc
	grep -q '^#define __BAREMETAL__ 1$$' micro16_smoke.c
	grep -q '^#define __NEO_MICRO__ 1$$' micro16_smoke.c
	grep -q '^#define __NEO_MICRO16__ 1$$' micro16_smoke.c
	grep -q '^typedef unsigned int size_t;$$' micro16_smoke.c
	grep -q '^typedef long int32_t;$$' micro16_smoke.c
	grep -Eq '^typedef unsigned long +int uint32_t;$$' micro16_smoke.c
	grep -q '^#define NEO_MICRO_HEAP_SIZE 1024U$$' micro16_smoke.c
	grep -q 'char result\[128\];' micro16_smoke.c
	clang --target=avr -mmcu=atmega328p -std=gnu11 -Os \
		-ffreestanding -fno-builtin -fno-stack-protector \
		-Werror=constant-conversion -Werror=tautological-constant-out-of-range-compare \
		-c micro16_smoke.c -o micro16_smoke.o
	@if $(HOST_CC) -std=gnu11 -c micro16_smoke.c -o micro16_smoke-host.o > micro16_smoke.out 2>&1; then \
		echo "non-16-bit host compile should reject -micro16"; \
		exit 1; \
	fi
	grep -q -- "-micro16 requires 16-bit pointers" micro16_smoke.out
	rm -f micro16_smoke.c micro16_smoke.nc.i micro16_smoke.o micro16_smoke-host.o micro16_smoke.out
	@echo "micro16 tests passed"

test-micro8:
	$(NEOC) $(NFLAGS) -micro8 -S micro8_smoke.nc
	grep -q '^#define __BAREMETAL__ 1$$' micro8_smoke.c
	grep -q '^#define __NEO_MICRO__ 1$$' micro8_smoke.c
	grep -q '^#define __NEO_MICRO8__ 1$$' micro8_smoke.c
	grep -q '^#define __NEO_MICRO16__ 1$$' micro8_smoke.c
	grep -q '^typedef unsigned int size_t;$$' micro8_smoke.c
	grep -q '^typedef long int32_t;$$' micro8_smoke.c
	grep -q '^#define NEO_MICRO_HEAP_SIZE 512U$$' micro8_smoke.c
	grep -q 'char out2\[96\];' micro8_smoke.c
	grep -q 'size2=(size2+1&~0x1);' micro8_smoke.c
	clang --target=avr -mmcu=atmega328p -std=gnu11 -Os \
		-ffreestanding -fno-builtin -fno-stack-protector \
		-Werror=constant-conversion -Werror=tautological-constant-out-of-range-compare \
		-c micro8_smoke.c -o micro8_smoke.o
	@if $(HOST_CC) -std=gnu11 -c micro8_smoke.c -o micro8_smoke-host.o > micro8_smoke.out 2>&1; then \
		echo "non-AVR-style host compile should reject -micro8"; \
		exit 1; \
	fi
	grep -q -- "-micro8 requires 16-bit pointers" micro8_smoke.out
	rm -f micro8_smoke.c micro8_smoke.nc.i micro8_smoke.o micro8_smoke-host.o micro8_smoke.out
	@echo "micro8 tests passed"

clean:
	rm -f $(TEST_OK) $(TEST_FAIL_NULL) $(TEST_FAIL_REF_INIT) $(TEST_FAIL_VANISHED) $(TEST_FAIL_SPAN_RANGE) *.c *.c.error *.nc.i *.o *.out
