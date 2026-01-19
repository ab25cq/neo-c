#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/zed
sysconfdir=${prefix}/etc/zed
includedir=${prefix}/include/zed
datarootdir=${prefix}/share/zed
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=neo-c
INSTALL=install
CFLAGS= -g -Og #-O1 -fsanitize=address,undefined -fno-omit-frame-pointer
CFLAGS_DEBUG= -gdwarf-4 -cg 
LIBS=
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.nc)
SINGLE_SRCS=$(filter-out %.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.nc=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.nc=.debug.o)
TARGET=zed
TARGET_DEBUG=zed-debug

#########################################
# main
#########################################
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_DEBUG): $(DEBUG_OBJS)
	$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.o: %.nc
	$(CC) $(CFLAGS) -c $< -o $@

%.debug.o: %.nc
	$(CC) $(CFLAGS_DEBUG) -c $< -o $@

#########################################
# header
#########################################

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./zed "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/zed"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/zed/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c zed *.log *.out zed-debug tmp-common*.txt

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/zed
	rm -f "$(DESTDIR)/share/doc/zed/README.md"

run: zed
	rm -f *.log
	./zed

compile: zed

debug: zed-debug
	rm -f *.log
	./zed-debug
