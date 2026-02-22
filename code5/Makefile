NEOC ?= neo-c
NFLAGS ?= -I..

TEST_OK := \
	ref_basic \
	ref_array_elem \
	ref_ptr \
	ref_ptrref \
	ref_string_assign \
	opt_basic \
	opt_value \
	opt_reassign \
	opt_string_assign \
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
	span_ptr_int

TEST_FAIL_NULL := \
	opt_null \
	opt_null_unwrap \
	opt_self_null \
	ref_self_null \
	span_self_null

TEST_FAIL_REF_INIT := ref_null

TEST_FAIL_VANISHED := \
	ref_vanished \
	ref_heap_vanished \
	opt_vanished \
	opt_heap_vanished

TEST_FAIL_SPAN_RANGE :=

.PHONY: all test clean

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

clean:
	rm -f $(TEST_OK) $(TEST_FAIL_NULL) $(TEST_FAIL_REF_INIT) $(TEST_FAIL_VANISHED) $(TEST_FAIL_SPAN_RANGE) *.c *.c.error *.nc.i *.o *.out
