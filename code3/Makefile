NEO_C ?= ../neo-c
ifeq ($(origin NEO_C), file)
  ifeq ($(wildcard $(NEO_C)),)
    NEO_C = neo-c
  endif
endif
CFLAGS ?= -O2

SOURCES = \
	mac_headers.c

OBJECTS = $(SOURCES:.c=.o)

all: $(OBJECTS)

%.o: %.c
	$(NEO_C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
