NEO_C ?= neo-c
CFLAGS ?= -O2

SOURCES = \
	main.c \
	headers_posix.c \
	headers_net.c \
	headers_ipc.c \
	headers_thread.c \
	headers_misc.c \
	headers_linux.c \
	headers_subdir.c \
	all.c

OBJECTS = $(SOURCES:.c=.o)

all: $(OBJECTS)

%.o: %.c
	$(NEO_C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	rm -f all
	rm -f *.out
	rm -f *.c.c
