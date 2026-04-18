NEO_C ?= ../neo-c
ifeq ($(origin NEO_C), file)
  ifeq ($(wildcard $(NEO_C)),)
    NEO_C = neo-c
  endif
endif
CFLAGS ?= -O2
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Darwin)
SOURCES = \
	mac_headers.nc
else
SOURCES =
endif

OBJECTS = $(SOURCES:.nc=.o)

all: $(OBJECTS)

%.o: %.nc
	$(NEO_C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) *.c
