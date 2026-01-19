NEO_C ?= ../neo-c
ifeq ($(origin NEO_C), file)
  ifeq ($(wildcard $(NEO_C)),)
    NEO_C = neo-c
  endif
endif
CFLAGS ?= -O2

SOURCES = \
	mac_headers.nc

OBJECTS = $(SOURCES:.nc=.o)

all: $(OBJECTS)

%.o: %.nc
	$(NEO_C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
