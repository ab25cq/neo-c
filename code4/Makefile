NEO_C ?= ../neo-c
NCC ?= ../ncc

PATH := $(abspath ..):$(PATH)

.PHONY: test clean

$(NCC):
	$(MAKE) -C .. ncc

# Compile and verify attribute placement in the generated C output

test: $(NCC) attrs_split.nc
	$(NEO_C) -c attrs_split.nc
	@grep -q "struct Packed" attrs_split.c
	@grep -q "__attribute__((packed))" attrs_split.c
	@grep -q "g1 __attribute__((aligned(16)))" attrs_split.c
	@echo "OK: attribute placement verified"

clean:
	rm -f attrs_split.c attrs_split.o attrs_split.nc.i attrs_split.c.error
