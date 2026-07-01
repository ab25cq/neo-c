#########################################
# environmnet variables
#########################################
DESTDIR=/usr/local
UNAME_S=$(shell uname -s)
ifeq ($(UNAME_S),Darwin)
LINK_GC_SECTIONS=-Wl,-dead_strip
else
LINK_GC_SECTIONS=-Wl,--gc-sections
endif
DEFAULT_CFLAGS_OPT?=-Oz -ffunction-sections -fdata-sections $(LINK_GC_SECTIONS) -flto=thin
CC=clang
CFLAGS_DEFAULT_OPT=$(DEFAULT_CFLAGS_OPT)
CFLAGS_OPT=-ffunction-sections -fdata-sections $(LINK_GC_SECTIONS) -flto=thin
INSTALL=/usr/bin/install -c
STRIP?=strip
LLVM_PROFDATA=$(shell which llvm-profdata 2>/dev/null || echo /Library/Developer/CommandLineTools/usr/bin/llvm-profdata)
CC_NAME=$(notdir $(firstword $(CC)))
CFLAGS_COMPILER=
ifeq ($(CC_NAME),gcc)
CFLAGS_COMPILER+=-fpermissive
endif
CFLAGS=-DPREFIX="\"${DESTDIR}/\"" -I. -I/usr/local/include $(CFLAGS_DEFAULT_OPT) $(CFLAGS_OPT) $(CFLAGS_COMPILER) -std=c11 # -g -Og
CCPP_CFLAGS=
LIBS= -lutil -ldl -lm -lrt
ifeq ($(UNAME_S),Darwin)
PGO_GENERATE_FLAG=-fprofile-instr-generate
PGO_USE_FLAG=-fprofile-instr-use=
PGO_EMIT_RELOCS=
else
PGO_GENERATE_FLAG=-fprofile-generate
PGO_USE_FLAG=-fprofile-use=
PGO_EMIT_RELOCS=-Wl,--emit-relocs
endif
NCC_FLAGS=
NCC_FLAGS+=-I.
LOWMEM?=0
LTO?=1
MARCH_NATIVE?=1
NOPLT?=1
GC_SECTIONS?=1
ALLOCATOR?=system
BARE?=0
NCC_EXTRA_DEPS=neo-c-str.o
NEO_C_STDLIB_FILES=neo-c.h neo-c-str.nc neo-c-str.h neo-c-libc.h neo-c-net.h neo-c-pthread.h
NEO_C_HEADER_FILES=neo-c.h neo-c-str.h neo-c-libc.h neo-c-net.h neo-c-pthread.h
PGO_TRAINING_DIRS?=src . code code2 code4 mytest vin mf shsh zed webweb minux2 cinatora
.PHONY: all self-host cpm-build-ncc cpm-run-ncc install clean distclean uninstall test pgo pgo-generate pgo-collect pgo-use pgo-bolt pgo-cs-generate pgo-cs-collect pgo-cs-use
ifeq ($(LOWMEM),1)
CFLAGS_DEFAULT_OPT=
NCC_FLAGS+=-lowmem
endif
ifeq ($(LTO),1)
CFLAGS+=-flto=thin
endif
ifeq ($(MARCH_NATIVE),1)
CFLAGS+=-march=native
endif
ifeq ($(NOPLT),1)
CFLAGS+=-fno-plt
endif
ifeq ($(GC_SECTIONS),1)
CFLAGS+=-ffunction-sections -fdata-sections
#LDFLAGS+=$(LINK_GC_SECTIONS)
endif
ifeq ($(ALLOCATOR),jemalloc)
LIBS+=-ljemalloc
endif
ifeq ($(ALLOCATOR),mimalloc)
LIBS+=-lmimalloc
endif
ifeq ($(BARE),1)
NCC_FLAGS+=-bare
CCPP_CFLAGS+=-DCCPP_BARE
CFLAGS+=-fno-stack-protector
NCC_EXTRA_DEPS=
ifeq ($(UNAME_S),Darwin)
LDFLAGS+=-nostdlib -Wl,-e,_main
LDFLAGS+=-lSystem
else
LDFLAGS+=-nostdlib -Wl,-e,_start
LDFLAGS+=-Wl,--allow-multiple-definition
endif
LIBS=
endif
ifeq ($(UNAME_S),Darwin)
ifneq ($(NO_PORTABLE_C),1)
NCC_FLAGS+=-portable-c
endif
endif

#########################################
# main
#########################################
all: ncc

cpm/cpm:
	$(MAKE) -C cpm

cpm-build-ncc: cpm/cpm
	CPM_NEOC=./neo-c cpm/cpm build

cpm-run-ncc: cpm-build-ncc
	target/debug/ncc

#########################################
# make c source
#########################################
SELF_HOST_C_SOURCES=c-src/01main.c c-src/02transpile.c c-src/03output_code.c c-src/04heap.c c-src/05parse.c c-src/06type.c c-src/07function.c c-src/08call.c c-src/09pre_op.c c-src/10str.c c-src/11number.c c-src/12var.c c-src/13gvar.c c-src/14if.c c-src/15while.c c-src/16for.c c-src/17do_while.c c-src/18switch.c c-src/19struct.c c-src/20union.c c-src/21enum.c c-src/22typedef.c c-src/23field.c c-src/24method.c c-src/25obj.c c-src/26eq.c c-src/27impl.c c-src/28interface.c c-src/29module.c c-src/30op.c c-src/31type2.c c-src/32function2.c c-src/33output_code2.c c-src/34heap2.c c-src/35call2.c c-src/36str2.c c-src/37var2.c c-src/38struct2.c c-src/39method2.c c-src/40obj2.c c-src/41module2.c c-src/42op2.c c-src/43function3.c c-src/44function4.c c-src/45function5.c c-src/46function6.c c-src/47function7.c c-src/48function8.c c-src/49call3.c c-src/50call4.c c-src/51str3.c c-src/52obj3.c c-src/53obj4.c c-src/ccpp.c c-src/neo-c-str.c


self-host: $(SELF_HOST_C_SOURCES)

ifneq ($(filter self-host,$(MAKECMDGOALS)),)
c-src/neo-c-str.c: src/neo-c-str.nc
	./ncc $(NCC_FLAGS) -c -uniq src/neo-c-str.nc
	@mkdir -p c-src
	@mv -f neo-c-str.c c-src/neo-c-str.c

c-src/01main.c: src/01main.nc
	./ncc $(NCC_FLAGS) -c src/01main.nc
	@mkdir -p c-src
	@mv -f 01main.c c-src/01main.c

c-src/02transpile.c: src/02transpile.nc
	./ncc $(NCC_FLAGS) -c src/02transpile.nc
	@mkdir -p c-src
	@mv -f 02transpile.c c-src/02transpile.c

c-src/03output_code.c: src/03output_code.nc
	./ncc $(NCC_FLAGS) -c src/03output_code.nc
	@mkdir -p c-src
	@mv -f 03output_code.c c-src/03output_code.c

c-src/04heap.c: src/04heap.nc
	./ncc $(NCC_FLAGS) -c src/04heap.nc
	@mkdir -p c-src
	@mv -f 04heap.c c-src/04heap.c

c-src/05parse.c: src/05parse.nc
	./ncc $(NCC_FLAGS) -c src/05parse.nc
	@mkdir -p c-src
	@mv -f 05parse.c c-src/05parse.c

c-src/06type.c: src/06type.nc
	./ncc $(NCC_FLAGS) -c src/06type.nc
	@mkdir -p c-src
	@mv -f 06type.c c-src/06type.c

c-src/07function.c: src/07function.nc
	./ncc $(NCC_FLAGS) -c src/07function.nc
	@mkdir -p c-src
	@mv -f 07function.c c-src/07function.c

c-src/08call.c: src/08call.nc
	./ncc $(NCC_FLAGS) -c src/08call.nc
	@mkdir -p c-src
	@mv -f 08call.c c-src/08call.c

c-src/09pre_op.c: src/09pre_op.nc
	./ncc $(NCC_FLAGS) -c src/09pre_op.nc
	@mkdir -p c-src
	@mv -f 09pre_op.c c-src/09pre_op.c

c-src/10str.c: src/10str.nc
	./ncc $(NCC_FLAGS) -c src/10str.nc
	@mkdir -p c-src
	@mv -f 10str.c c-src/10str.c

c-src/11number.c: src/11number.nc
	./ncc $(NCC_FLAGS) -c src/11number.nc
	@mkdir -p c-src
	@mv -f 11number.c c-src/11number.c

c-src/12var.c: src/12var.nc
	./ncc $(NCC_FLAGS) -c src/12var.nc
	@mkdir -p c-src
	@mv -f 12var.c c-src/12var.c

c-src/13gvar.c: src/13gvar.nc
	./ncc $(NCC_FLAGS) -c src/13gvar.nc
	@mkdir -p c-src
	@mv -f 13gvar.c c-src/13gvar.c

c-src/14if.c: src/14if.nc
	./ncc $(NCC_FLAGS) -c src/14if.nc
	@mkdir -p c-src
	@mv -f 14if.c c-src/14if.c

c-src/15while.c: src/15while.nc
	./ncc $(NCC_FLAGS) -c src/15while.nc
	@mkdir -p c-src
	@mv -f 15while.c c-src/15while.c

c-src/16for.c: src/16for.nc
	./ncc $(NCC_FLAGS) -c src/16for.nc
	@mkdir -p c-src
	@mv -f 16for.c c-src/16for.c

c-src/17do_while.c: src/17do_while.nc
	./ncc $(NCC_FLAGS) -c src/17do_while.nc
	@mkdir -p c-src
	@mv -f 17do_while.c c-src/17do_while.c

c-src/18switch.c: src/18switch.nc
	./ncc $(NCC_FLAGS) -c src/18switch.nc
	@mkdir -p c-src
	@mv -f 18switch.c c-src/18switch.c

c-src/19struct.c: src/19struct.nc
	./ncc $(NCC_FLAGS) -c src/19struct.nc
	@mkdir -p c-src
	@mv -f 19struct.c c-src/19struct.c

c-src/20union.c: src/20union.nc
	./ncc $(NCC_FLAGS) -c src/20union.nc
	@mkdir -p c-src
	@mv -f 20union.c c-src/20union.c

c-src/21enum.c: src/21enum.nc
	./ncc $(NCC_FLAGS) -c src/21enum.nc
	@mkdir -p c-src
	@mv -f 21enum.c c-src/21enum.c

c-src/22typedef.c: src/22typedef.nc
	./ncc $(NCC_FLAGS) -c src/22typedef.nc
	@mkdir -p c-src
	@mv -f 22typedef.c c-src/22typedef.c

c-src/23field.c: src/23field.nc
	./ncc $(NCC_FLAGS) -c src/23field.nc
	@mkdir -p c-src
	@mv -f 23field.c c-src/23field.c

c-src/24method.c: src/24method.nc
	./ncc $(NCC_FLAGS) -c src/24method.nc
	@mkdir -p c-src
	@mv -f 24method.c c-src/24method.c

c-src/25obj.c: src/25obj.nc
	./ncc $(NCC_FLAGS) -c src/25obj.nc
	@mkdir -p c-src
	@mv -f 25obj.c c-src/25obj.c

c-src/26eq.c: src/26eq.nc
	./ncc $(NCC_FLAGS) -c src/26eq.nc
	@mkdir -p c-src
	@mv -f 26eq.c c-src/26eq.c

c-src/27impl.c: src/27impl.nc
	./ncc $(NCC_FLAGS) -c src/27impl.nc
	@mkdir -p c-src
	@mv -f 27impl.c c-src/27impl.c

c-src/28interface.c: src/28interface.nc
	./ncc $(NCC_FLAGS) -c src/28interface.nc
	@mkdir -p c-src
	@mv -f 28interface.c c-src/28interface.c

c-src/29module.c: src/29module.nc
	./ncc $(NCC_FLAGS) -c src/29module.nc
	@mkdir -p c-src
	@mv -f 29module.c c-src/29module.c

c-src/30op.c: src/30op.nc
	./ncc $(NCC_FLAGS) -c src/30op.nc
	@mkdir -p c-src
	@mv -f 30op.c c-src/30op.c

c-src/31type2.c: src/31type2.nc
	./ncc $(NCC_FLAGS) -c src/31type2.nc
	@mkdir -p c-src
	@mv -f 31type2.c c-src/31type2.c

c-src/32function2.c: src/32function2.nc
	./ncc $(NCC_FLAGS) -c src/32function2.nc
	@mkdir -p c-src
	@mv -f 32function2.c c-src/32function2.c

c-src/33output_code2.c: src/33output_code2.nc
	./ncc $(NCC_FLAGS) -c src/33output_code2.nc
	@mkdir -p c-src
	@mv -f 33output_code2.c c-src/33output_code2.c

c-src/34heap2.c: src/34heap2.nc
	./ncc $(NCC_FLAGS) -c src/34heap2.nc
	@mkdir -p c-src
	@mv -f 34heap2.c c-src/34heap2.c

c-src/35call2.c: src/35call2.nc
	./ncc $(NCC_FLAGS) -c src/35call2.nc
	@mkdir -p c-src
	@mv -f 35call2.c c-src/35call2.c

c-src/36str2.c: src/36str2.nc
	./ncc $(NCC_FLAGS) -c src/36str2.nc
	@mkdir -p c-src
	@mv -f 36str2.c c-src/36str2.c

c-src/37var2.c: src/37var2.nc
	./ncc $(NCC_FLAGS) -c src/37var2.nc
	@mkdir -p c-src
	@mv -f 37var2.c c-src/37var2.c

c-src/38struct2.c: src/38struct2.nc
	./ncc $(NCC_FLAGS) -c src/38struct2.nc
	@mkdir -p c-src
	@mv -f 38struct2.c c-src/38struct2.c

c-src/39method2.c: src/39method2.nc
	./ncc $(NCC_FLAGS) -c src/39method2.nc
	@mkdir -p c-src
	@mv -f 39method2.c c-src/39method2.c

c-src/40obj2.c: src/40obj2.nc
	./ncc $(NCC_FLAGS) -c src/40obj2.nc
	@mkdir -p c-src
	@mv -f 40obj2.c c-src/40obj2.c

c-src/41module2.c: src/41module2.nc
	./ncc $(NCC_FLAGS) -c src/41module2.nc
	@mkdir -p c-src
	@mv -f 41module2.c c-src/41module2.c

c-src/42op2.c: src/42op2.nc
	./ncc $(NCC_FLAGS) -c src/42op2.nc
	@mkdir -p c-src
	@mv -f 42op2.c c-src/42op2.c

c-src/43function3.c: src/43function3.nc
	./ncc $(NCC_FLAGS) -c src/43function3.nc
	@mkdir -p c-src
	@mv -f 43function3.c c-src/43function3.c

c-src/44function4.c: src/44function4.nc
	./ncc $(NCC_FLAGS) -c src/44function4.nc
	@mkdir -p c-src
	@mv -f 44function4.c c-src/44function4.c

c-src/45function5.c: src/45function5.nc
	./ncc $(NCC_FLAGS) -c src/45function5.nc
	@mkdir -p c-src
	@mv -f 45function5.c c-src/45function5.c

c-src/46function6.c: src/46function6.nc
	./ncc $(NCC_FLAGS) -c src/46function6.nc
	@mkdir -p c-src
	@mv -f 46function6.c c-src/46function6.c

c-src/47function7.c: src/47function7.nc
	./ncc $(NCC_FLAGS) -c src/47function7.nc
	@mkdir -p c-src
	@mv -f 47function7.c c-src/47function7.c

c-src/48function8.c: src/48function8.nc
	./ncc $(NCC_FLAGS) -c src/48function8.nc
	@mkdir -p c-src
	@mv -f 48function8.c c-src/48function8.c

c-src/49call3.c: src/49call3.nc
	./ncc $(NCC_FLAGS) -c src/49call3.nc
	@mkdir -p c-src
	@mv -f 49call3.c c-src/49call3.c

c-src/50call4.c: src/50call4.nc
	./ncc $(NCC_FLAGS) -c src/50call4.nc
	@mkdir -p c-src
	@mv -f 50call4.c c-src/50call4.c

c-src/51str3.c: src/51str3.nc
	./ncc $(NCC_FLAGS) -c src/51str3.nc
	@mkdir -p c-src
	@mv -f 51str3.c c-src/51str3.c

c-src/52obj3.c: src/52obj3.nc
	./ncc $(NCC_FLAGS) -c src/52obj3.nc
	@mkdir -p c-src
	@mv -f 52obj3.c c-src/52obj3.c

c-src/53obj4.c: src/53obj4.nc
	./ncc $(NCC_FLAGS) -c src/53obj4.nc
	@mkdir -p c-src
	@mv -f 53obj4.c c-src/53obj4.c

c-src/ccpp.c: src/ccpp.nc ccpp_body.h
	./ncc $(filter-out -bare,$(NCC_FLAGS)) -c src/ccpp.nc
	@mkdir -p c-src
	@mv -f ccpp.c c-src/ccpp.c

endif

#########################################
# compile c source
#########################################
ncc: 01main.o 02transpile.o 03output_code.o 04heap.o 05parse.o 06type.o 07function.o 08call.o 09pre_op.o 10str.o 11number.o 12var.o 13gvar.o 14if.o 15while.o 16for.o 17do_while.o 18switch.o 19struct.o 20union.o 21enum.o 22typedef.o 23field.o 24method.o 25obj.o 26eq.o 27impl.o 28interface.o 29module.o 30op.o 31type2.o 32function2.o 33output_code2.o 34heap2.o 35call2.o 36str2.o 37var2.o 38struct2.o 39method2.o 40obj2.o 41module2.o 42op2.o 43function3.o 44function4.o 45function5.o 46function6.o 47function7.o 48function8.o 49call3.o 50call4.o 51str3.o 52obj3.o 53obj4.o ccpp.o $(NCC_EXTRA_DEPS)
	$(CC) -o ncc $(LINK_GC_SECTIONS) 01main.o 02transpile.o 03output_code.o 04heap.o 05parse.o 06type.o 07function.o 08call.o 09pre_op.o 10str.o 11number.o 12var.o 13gvar.o 14if.o 15while.o 16for.o 17do_while.o 18switch.o 19struct.o 20union.o 21enum.o 22typedef.o 23field.o 24method.o 25obj.o 26eq.o 27impl.o 28interface.o 29module.o 30op.o 31type2.o 32function2.o 33output_code2.o 34heap2.o 35call2.o 36str2.o 37var2.o 38struct2.o 39method2.o 40obj2.o 41module2.o 42op2.o 43function3.o 44function4.o 45function5.o 46function6.o 47function7.o 48function8.o 49call3.o 50call4.o 51str3.o 52obj3.o 53obj4.o ccpp.o  $(CFLAGS) $(LDFLAGS)
	@if command -v $(STRIP) >/dev/null 2>&1; then $(STRIP) ncc || true; fi

neo-c-str.o: c-src/neo-c-str.c neo-c-str.h
	$(CC) -o neo-c-str.o -c c-src/neo-c-str.c $(CFLAGS) -fno-lto $(LINK_GC_SECTIONS) 2>&1 | grep error || true

01main.o: c-src/01main.c
	$(CC) -o 01main.o -c c-src/01main.c $(CFLAGS) 2>&1 | grep error || true

02transpile.o: c-src/02transpile.c
	$(CC) -o 02transpile.o -c c-src/02transpile.c $(CFLAGS) 2>&1 | grep error || true

03output_code.o: c-src/03output_code.c
	$(CC) -o 03output_code.o -c c-src/03output_code.c $(CFLAGS) 2>&1 | grep error || true

04heap.o: c-src/04heap.c
	$(CC) -o 04heap.o -c c-src/04heap.c $(CFLAGS) 2>&1 | grep error || true

05parse.o: c-src/05parse.c
	$(CC) -o 05parse.o -c c-src/05parse.c $(CFLAGS) 2>&1 | grep error || true

06type.o: c-src/06type.c
	$(CC) -o 06type.o -c c-src/06type.c $(CFLAGS) 2>&1 | grep error || true

07function.o: c-src/07function.c
	$(CC) -o 07function.o -c c-src/07function.c $(CFLAGS) 2>&1 | grep error || true

08call.o: c-src/08call.c
	$(CC) -o 08call.o -c c-src/08call.c $(CFLAGS) 2>&1 | grep error || true

09pre_op.o: c-src/09pre_op.c
	$(CC) -o 09pre_op.o -c c-src/09pre_op.c $(CFLAGS) 2>&1 | grep error || true

10str.o: c-src/10str.c
	$(CC) -o 10str.o -c c-src/10str.c $(CFLAGS) 2>&1 | grep error || true

11number.o: c-src/11number.c
	$(CC) -o 11number.o -c c-src/11number.c $(CFLAGS) 2>&1 | grep error || true

12var.o: c-src/12var.c
	$(CC) -o 12var.o -c c-src/12var.c $(CFLAGS) 2>&1 | grep error || true

13gvar.o: c-src/13gvar.c
	$(CC) -o 13gvar.o -c c-src/13gvar.c $(CFLAGS) 2>&1 | grep error || true

14if.o: c-src/14if.c
	$(CC) -o 14if.o -c c-src/14if.c $(CFLAGS) 2>&1 | grep error || true

15while.o: c-src/15while.c
	$(CC) -o 15while.o -c c-src/15while.c $(CFLAGS) 2>&1 | grep error || true

16for.o: c-src/16for.c
	$(CC) -o 16for.o -c c-src/16for.c $(CFLAGS) 2>&1 | grep error || true

17do_while.o: c-src/17do_while.c
	$(CC) -o 17do_while.o -c c-src/17do_while.c $(CFLAGS) 2>&1 | grep error || true

18switch.o: c-src/18switch.c
	$(CC) -o 18switch.o -c c-src/18switch.c $(CFLAGS) 2>&1 | grep error || true

19struct.o: c-src/19struct.c
	$(CC) -o 19struct.o -c c-src/19struct.c $(CFLAGS) 2>&1 | grep error || true

20union.o: c-src/20union.c
	$(CC) -o 20union.o -c c-src/20union.c $(CFLAGS) 2>&1 | grep error || true

21enum.o: c-src/21enum.c
	$(CC) -o 21enum.o -c c-src/21enum.c $(CFLAGS) 2>&1 | grep error || true

22typedef.o: c-src/22typedef.c
	$(CC) -o 22typedef.o -c c-src/22typedef.c $(CFLAGS) 2>&1 | grep error || true

23field.o: c-src/23field.c
	$(CC) -o 23field.o -c c-src/23field.c $(CFLAGS) 2>&1 | grep error || true

24method.o: c-src/24method.c
	$(CC) -o 24method.o -c c-src/24method.c $(CFLAGS) 2>&1 | grep error || true

25obj.o: c-src/25obj.c
	$(CC) -o 25obj.o -c c-src/25obj.c $(CFLAGS) 2>&1 | grep error || true

26eq.o: c-src/26eq.c
	$(CC) -o 26eq.o -c c-src/26eq.c $(CFLAGS) 2>&1 | grep error || true

27impl.o: c-src/27impl.c
	$(CC) -o 27impl.o -c c-src/27impl.c $(CFLAGS) 2>&1 | grep error || true

28interface.o: c-src/28interface.c
	$(CC) -o 28interface.o -c c-src/28interface.c $(CFLAGS) 2>&1 | grep error || true

29module.o: c-src/29module.c
	$(CC) -o 29module.o -c c-src/29module.c $(CFLAGS) 2>&1 | grep error || true

30op.o: c-src/30op.c
	$(CC) -o 30op.o -c c-src/30op.c $(CFLAGS) 2>&1 | grep error || true

31type2.o: c-src/31type2.c
	$(CC) -o 31type2.o -c c-src/31type2.c $(CFLAGS) 2>&1 | grep error || true

32function2.o: c-src/32function2.c
	$(CC) -o 32function2.o -c c-src/32function2.c $(CFLAGS) 2>&1 | grep error || true

33output_code2.o: c-src/33output_code2.c
	$(CC) -o 33output_code2.o -c c-src/33output_code2.c $(CFLAGS) 2>&1 | grep error || true

34heap2.o: c-src/34heap2.c
	$(CC) -o 34heap2.o -c c-src/34heap2.c $(CFLAGS) 2>&1 | grep error || true

35call2.o: c-src/35call2.c
	$(CC) -o 35call2.o -c c-src/35call2.c $(CFLAGS) 2>&1 | grep error || true

36str2.o: c-src/36str2.c
	$(CC) -o 36str2.o -c c-src/36str2.c $(CFLAGS) 2>&1 | grep error || true

37var2.o: c-src/37var2.c
	$(CC) -o 37var2.o -c c-src/37var2.c $(CFLAGS) 2>&1 | grep error || true

38struct2.o: c-src/38struct2.c
	$(CC) -o 38struct2.o -c c-src/38struct2.c $(CFLAGS) 2>&1 | grep error || true

39method2.o: c-src/39method2.c
	$(CC) -o 39method2.o -c c-src/39method2.c $(CFLAGS) 2>&1 | grep error || true

40obj2.o: c-src/40obj2.c
	$(CC) -o 40obj2.o -c c-src/40obj2.c $(CFLAGS) 2>&1 | grep error || true

41module2.o: c-src/41module2.c
	$(CC) -o 41module2.o -c c-src/41module2.c $(CFLAGS) 2>&1 | grep error || true

42op2.o: c-src/42op2.c
	$(CC) -o 42op2.o -c c-src/42op2.c $(CFLAGS) 2>&1 | grep error || true

43function3.o: c-src/43function3.c
	$(CC) -o 43function3.o -c c-src/43function3.c $(CFLAGS) 2>&1 | grep error || true

44function4.o: c-src/44function4.c
	$(CC) -o 44function4.o -c c-src/44function4.c $(CFLAGS) 2>&1 | grep error || true

45function5.o: c-src/45function5.c
	$(CC) -o 45function5.o -c c-src/45function5.c $(CFLAGS) 2>&1 | grep error || true

46function6.o: c-src/46function6.c
	$(CC) -o 46function6.o -c c-src/46function6.c $(CFLAGS) 2>&1 | grep error || true

47function7.o: c-src/47function7.c
	$(CC) -o 47function7.o -c c-src/47function7.c $(CFLAGS) 2>&1 | grep error || true

48function8.o: c-src/48function8.c
	$(CC) -o 48function8.o -c c-src/48function8.c $(CFLAGS) 2>&1 | grep error || true

49call3.o: c-src/49call3.c
	$(CC) -o 49call3.o -c c-src/49call3.c $(CFLAGS) 2>&1 | grep error || true

50call4.o: c-src/50call4.c
	$(CC) -o 50call4.o -c c-src/50call4.c $(CFLAGS) 2>&1 | grep error || true

51str3.o: c-src/51str3.c
	$(CC) -o 51str3.o -c c-src/51str3.c $(CFLAGS) 2>&1 | grep error || true

52obj3.o: c-src/52obj3.c
	$(CC) -o 52obj3.o -c c-src/52obj3.c $(CFLAGS) 2>&1 | grep error || true

53obj4.o: c-src/53obj4.c
	$(CC) -o 53obj4.o -c c-src/53obj4.c $(CFLAGS) 2>&1 | grep error || true

ccpp.o: c-src/ccpp.c ccpp_body.h
	$(CC) -o ccpp.o -c c-src/ccpp.c $(CFLAGS) $(CCPP_CFLAGS)

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/share/neo-c"
	mkdir -p "$(DESTDIR)/include"
	$(INSTALL) -m 755 ./neo-c "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./ncc "$(DESTDIR)/bin"
	@for f in $(NEO_C_STDLIB_FILES); do \
		if [ -f "$$f" ]; then \
			$(INSTALL) -m 644 "$$f" "$(DESTDIR)/share/neo-c/$$f"; \
		elif [ -f "src/$$f" ]; then \
			$(INSTALL) -m 644 "src/$$f" "$(DESTDIR)/share/neo-c/$$f"; \
		fi; \
	done
	@for f in $(NEO_C_HEADER_FILES); do \
		$(INSTALL) -m 644 "$$f" "$(DESTDIR)/include/$$f"; \
	done
	$(MAKE) -C cpm install DESTDIR="$(DESTDIR)"

#########################################
# clean
#########################################
clean:
	rm -f neo-c-str.o self-host
	rm -fR target ncc *.log *.o *.i *.out a a.c b b.c c c.c *.valgrind aa aaa a.out *.error *.profraw *.fdata ncc.inst ncc.fdata
	rm -fR mf/mf.dSYM
	rm -fR shsh/shsh.dSYM
	rm -fR webweb/dbdb/dbdb.dSYM

distclean: clean
	rm -fR  config.h autom4te.cache ncc.profdata ncc_cs.profdata

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/neo-c
	rm -f "$(DESTDIR)"/bin/ncc
	rm -f "$(DESTDIR)"/bin/cpm
	@for f in $(NEO_C_STDLIB_FILES); do \
		rm -f "$(DESTDIR)/share/neo-c/$$f"; \
	done
	@for f in $(NEO_C_HEADER_FILES); do \
		rm -f "$(DESTDIR)/include/$$f"; \
	done
	rmdir "$(DESTDIR)/share/neo-c" 2>/dev/null || true

test:
	(cd code && make test)

#########################################
# PGO (Profile-Guided Optimization)
# Usage: make pgo
# Step-by-step: make pgo-generate  (builds instrumented ncc)
#               make pgo-collect   (runs ncc on *.nc to gather profile)
#               make pgo-use       (rebuilds ncc using profile data)
#########################################
pgo-generate:
	$(MAKE) clean
	$(MAKE) LTO=0 CFLAGS_OPT="$(CFLAGS_OPT) $(PGO_GENERATE_FLAG)"

pgo-collect:
	@if [ ! -f ./ncc ]; then echo "ERROR: ncc not found. Run 'make pgo-generate' first."; exit 1; fi
	@for d in $(PGO_TRAINING_DIRS); do \
		if [ -d "$$d" ]; then \
			find "$$d" -maxdepth 1 -name '*.nc' -print; \
		fi; \
	done | while read -r f; do ./ncc $(NCC_FLAGS) -c "$$f" 2>/dev/null || true; done
	@if ! ls *.profraw >/dev/null 2>&1; then echo "ERROR: No .profraw files generated. ncc may have crashed."; exit 1; fi
	$(LLVM_PROFDATA) merge -output=ncc.profdata *.profraw
	rm -f *.profraw

pgo-use:
	@if [ ! -f ncc.profdata ]; then echo "ERROR: ncc.profdata not found. Run 'make pgo-collect' first."; exit 1; fi
	$(MAKE) clean
	$(MAKE) DEFAULT_CFLAGS_OPT=-O3 CFLAGS_OPT="$(CFLAGS_OPT) $(PGO_USE_FLAG)$(CURDIR)/ncc.profdata $(PGO_EMIT_RELOCS)"

#########################################
# BOLT (Post-link binary optimization)
# Requires: llvm-bolt, merge-fdata
# Usage: make pgo-bolt  (after make pgo-use)
#########################################
BOLT_FLAGS=-reorder-blocks=ext-tsp -reorder-functions=hfsort -split-functions -split-all-cold -split-eh -dyno-stats

pgo-bolt:
	@if [ ! -f ./ncc ]; then echo "ERROR: ncc not found. Run 'make pgo-use' first."; exit 1; fi
	llvm-bolt ncc -instrument -o ncc.inst
	for f in src/*.nc *.nc; do test -f $$f && ./ncc.inst $(NCC_FLAGS) -c $$f 2>/dev/null || true; done
	merge-fdata *.fdata > ncc.fdata
	llvm-bolt ncc -o ncc -data=ncc.fdata $(BOLT_FLAGS)
	rm -f *.fdata ncc.inst

#########################################
# CS-PGO (Context-Sensitive PGO)
# More accurate profile than standard PGO.
# Run after make pgo (requires ncc.profdata).
# Usage: make pgo (includes CS-PGO automatically)
#########################################
pgo-cs-generate:
	@if [ ! -f ncc.profdata ]; then echo "ERROR: ncc.profdata not found. Run standard PGO first."; exit 1; fi
	$(MAKE) clean
	$(MAKE) DEFAULT_CFLAGS_OPT=-O3 CFLAGS_OPT="$(CFLAGS_OPT) $(PGO_USE_FLAG)$(CURDIR)/ncc.profdata -fcs-profile-generate"

pgo-cs-collect:
	@if [ ! -f ./ncc ]; then echo "ERROR: ncc not found. Run 'make pgo-cs-generate' first."; exit 1; fi
	@for d in $(PGO_TRAINING_DIRS); do \
		if [ -d "$$d" ]; then \
			find "$$d" -maxdepth 1 -name '*.nc' -print; \
		fi; \
	done | while read -r f; do ./ncc $(NCC_FLAGS) -c "$$f" 2>/dev/null || true; done
	@if ! ls *.profraw >/dev/null 2>&1; then echo "ERROR: No .profraw files generated."; exit 1; fi
	$(LLVM_PROFDATA) merge -output=ncc_cs.profdata ncc.profdata *.profraw
	rm -f *.profraw

pgo-cs-use:
	@if [ ! -f ncc_cs.profdata ]; then echo "ERROR: ncc_cs.profdata not found. Run 'make pgo-cs-collect' first."; exit 1; fi
	$(MAKE) clean
	$(MAKE) DEFAULT_CFLAGS_OPT=-O3 CFLAGS_OPT="$(CFLAGS_OPT) $(PGO_USE_FLAG)$(CURDIR)/ncc_cs.profdata $(PGO_EMIT_RELOCS)"

ifeq ($(UNAME_S),Darwin)
pgo:
	$(MAKE) pgo-generate
	$(MAKE) pgo-collect
	$(MAKE) pgo-use
else
pgo:
	$(MAKE) pgo-generate
	$(MAKE) pgo-collect
	$(MAKE) pgo-use
	$(MAKE) pgo-cs-generate
	$(MAKE) pgo-cs-collect
	$(MAKE) pgo-cs-use
endif

#########################################
# neo-c one file
#########################################
SOURCES := $(wildcard [012]*.c)
SOURCES := $(filter-out %.c,$(SOURCES))

neo-c.c: neo-c.nc
	neo-c neo-c.nc

neo-c.nc: $(SOURCES)
	@cat $^ > $@
