NEO_C ?= neo-c
CC=neo-c
CFLAGS ?= -O2

SOURCES = \
	main.nc \
	headers_posix.nc \
	headers_net.nc \
	headers_ipc.nc \
	headers_thread.nc \
	headers_misc.nc \
	headers_linux.nc \
	headers_subdir.nc \
	all.nc

OBJECTS = $(SOURCES:.nc=.o)

all: $(OBJECTS)

%.o: %.nc
	$(NEO_C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	rm -f all
	rm -f *.out
	rm -f *.
