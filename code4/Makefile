NEO_C ?= ../neo-c
NCC ?= ../ncc

PATH := $(abspath ..):$(PATH)

.PHONY: test clean

$(NCC):
	$(MAKE) -C .. ncc

# Compile and verify attribute placement in the generated C output

test: $(NCC) attrs_split.nc struct_attrs.nc enum_attrs.nc
	$(NEO_C) -c attrs_split.nc
	@grep -q "struct Packed" attrs_split.c
	@grep -q "__attribute__((packed))" attrs_split.c
	@grep -q "g1 __attribute__((aligned(16)))" attrs_split.c
	$(NEO_C) -c struct_attrs.nc
	@grep -q "struct SA" struct_attrs.c
	@grep -q "struct SB" struct_attrs.c
	@grep -q "struct SC" struct_attrs.c
	@grep -q "struct SD" struct_attrs.c
	@grep -q "__attribute__((packed))" struct_attrs.c
	@grep -q "__attribute__((aligned(8)))" struct_attrs.c
	$(NEO_C) -c enum_attrs.nc
	@grep -Eq "enum __attribute__\\(\\(packed\\)\\)[[:space:]]+EA" enum_attrs.c
	@grep -Eq "enum __attribute__\\(\\(packed\\)\\)[[:space:]]+EB" enum_attrs.c
	@grep -Eq "enum __attribute__\\(\\(packed\\)\\)[[:space:]]+EC" enum_attrs.c
	@grep -Eq "enum __attribute__\\(\\(packed\\)\\)[[:space:]]+__attribute__\\(\\(aligned\\(8\\)\\)\\)[[:space:]]+ED" enum_attrs.c
	@echo "OK: attribute placement verified"

clean:
	rm -f attrs_split.c attrs_split.o attrs_split.nc.i attrs_split.c.error
	rm -f struct_attrs.c struct_attrs.o struct_attrs.nc.i struct_attrs.c.error
	rm -f enum_attrs.c enum_attrs.o enum_attrs.nc.i enum_attrs.c.error
