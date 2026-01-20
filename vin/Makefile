##########################################
# installed directories
##########################################
prefix=/usr/local exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/com
sysconfdir=${prefix}/etc/neo-c
includedir=${prefix}/include/neo-c
datarootdir=${prefix}/share/neo-c
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib


#########################################
# environmnet variables
##########################################
CC=clang
NCC=@NCC@
INSTALL=/usr/bin/install -c
CFLAGS=-I$(HOME)/include -I. -I/opt/homebrew/opt/ncurses/include -L/opt/homebrew/opt/ncurses/lib -I/usr/local/opt/ncurses/include -L/usr/local/opt/ncurses/lib -g -s -O2
CFLAGS2=-I$(HOME)/include -I. -I/opt/homebrew/opt/ncurses/include -L/opt/homebrew/opt/ncurses/lib -I/usr/local/opt/ncurses/include -L/usr/local/opt/ncurses/lib -g -O1
LIBS= -ldl -lm  -lncursesw 
OS=
DESTDIR=/usr/local

#########################################
# main
##########################################
all: vin

vin: main.o 01init.o 02base.o 03insert_mode.o 04word.o 05undo.o 06file.o 07yank.o 08visual.o 09search.o 10edit.o 11move.o 12command.o 13completion.o 14dot.o 16mark.o 17hvisual.o 18vvisual.o 19rewrite_mode.o 20shell_mode.o 21binary_mode.o
	neo-c -o vin main.o 01init.o 02base.o 03insert_mode.o 04word.o 05undo.o 06file.o 07yank.o 08visual.o 09search.o 10edit.o 11move.o 12command.o 13completion.o 14dot.o 16mark.o 17hvisual.o 18vvisual.o 19rewrite_mode.o 20shell_mode.o 21binary_mode.o -L/opt/local/lib -L/usr/local/lib $(CFLAGS2) $(LIBS) 

main.o: main.nc common.h
	neo-c -c  main.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

01init.o: 01init.nc common.h
	neo-c -c  01init.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

02base.o: 02base.nc common.h
	neo-c -c  02base.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

03insert_mode.o: 03insert_mode.nc common.h
	neo-c -c  03insert_mode.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

04word.o: 04word.nc common.h
	neo-c -c  04word.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

05undo.o: 05undo.nc common.h
	neo-c -c  05undo.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

06file.o: 06file.nc common.h
	neo-c -c  06file.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

07yank.o: 07yank.nc common.h
	neo-c -c  07yank.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

08visual.o: 08visual.nc common.h
	neo-c -c  08visual.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

09search.o: 09search.nc common.h
	neo-c -c  09search.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

10edit.o: 10edit.nc common.h
	neo-c -c  10edit.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

11move.o: 11move.nc common.h
	neo-c -c  11move.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

12command.o: 12command.nc common.h
	neo-c -c  12command.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

13completion.o: 13completion.nc common.h
	neo-c -c  13completion.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

14dot.o: 14dot.nc common.h
	neo-c -c  14dot.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

16mark.o: 16mark.nc common.h
	neo-c -c  16mark.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

17hvisual.o: 17hvisual.nc common.h
	neo-c -c  17hvisual.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

18vvisual.o: 18vvisual.nc common.h
	neo-c -c  18vvisual.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

19rewrite_mode.o: 19rewrite_mode.nc common.h
	neo-c -c  19rewrite_mode.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s
	mkdir -p ~/.vin/backup

20shell_mode.o: 20shell_mode.nc common.h
	neo-c -c  20shell_mode.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

21binary_mode.o: 21binary_mode.nc common.h
	neo-c -c  21binary_mode.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s

valgrind: main.c.valgrind 01init.c.valgrind 02base.c.valgrind 03insert_mode.c.valgrind 04word.c.valgrind 05undo.c.valgrind 06file.c.valgrind 07yank.c.valgrind 08visual.c.valgrind 09search.c.valgrind 10edit.c.valgrind 11move.c.valgrind 12command.c.valgrind 13completion.c.valgrind 14dot.c.valgrind 16mark.c.valgrind 17hvisual.c.valgrind 18vvisual.c.valgrind 19rewrite_mode.c.valgrind 20shell_mode.c.valgrind 21binary_mode.c.valgrind

main.c.valgrind: main.nc common.h
	valgrind neo-c -c  main.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2>main.c.valgrind

01init.c.valgrind: 01init.nc common.h
	valgrind neo-c -c  01init.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2>01init.c.valgrind

02base.c.valgrind: 02base.nc common.h
	valgrind neo-c -c  02base.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2>02base.c.valgrind

03insert_mode.c.valgrind: 03insert_mode.nc common.h
	valgrind neo-c -c  03insert_mode.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 03insert_mode.c.valgrind

04word.c.valgrind: 04word.nc common.h
	valgrind neo-c -c  04word.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 04word.c.valgrind

05undo.c.valgrind: 05undo.nc common.h
	valgrind neo-c -c  05undo.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 05undo.c.valgrind

06file.c.valgrind: 06file.nc common.h
	valgrind neo-c -c  06file.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 06file.c.valgrind

07yank.c.valgrind: 07yank.nc common.h
	valgrind neo-c -c  07yank.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 07yank.c.valgrind

08visual.c.valgrind: 08visual.nc common.h
	valgrind neo-c -c  08visual.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 08visual.c.valgrind

09search.c.valgrind: 09search.nc common.h
	valgrind neo-c -c  09search.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 09search.c.valgrind

10edit.c.valgrind: 10edit.nc common.h
	valgrind neo-c -c  10edit.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 10edit.c.valgrind

11move.c.valgrind : 11move.nc common.h
	valgrind neo-c -c  11move.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 11move.c.valgrind

12command.c.valgrind: 12command.nc common.h
	valgrind neo-c -c  12command.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 12command.c.valgrind

13completion.c.valgrind: 13completion.nc common.h
	valgrind neo-c -c  13completion.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 13completion.c.valgrind

14dot.c.valgrind: 14dot.nc common.h
	valgrind neo-c -c  14dot.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 14dot.c.valgrind

16mark.c.valgrind: 16mark.nc common.h
	valgrind neo-c -c  16mark.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 16mark.c.valgrind

17hvisual.c.valgrind: 17hvisual.nc common.h
	valgrind neo-c -c  17hvisual.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 17hvisual.c.valgrind

18vvisual.c.valgrind: 18vvisual.nc common.h
	valgrind neo-c -c  18vvisual.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 18vvisual.c.valgrind

19rewrite_mode.c.valgrind: 19rewrite_mode.nc common.h
	valgrind neo-c -c  19rewrite_mode.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 19rewrite.c.valgrind

20shell_mode.c.valgrind: 20shell_mode.nc common.h
	valgrind -c  20shell_mode.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 20shell_mode.c.valgrind

21binary_mode.c.valgrind: 21binary_mode.nc common.h
	valgrind neo-c -c  21binary_mode.nc -Isrc $(CFLAGS) -I/usr/local/include -I. -s 2> 21binary_mode.c.valgrind

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./vin "$(DESTDIR)/bin"

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/vin
	rm -Rf ~/.vin/

#########################################
# permission
#########################################
permission:
	chmod 644 *
	chmod 755 .git man 
	chmod 644 *.c
	chmod 644 *.h

#########################################
# clean
#########################################
clean:
	rm -fR *.ll *.bc *.c.tmp *.out *.o valgrind.txt *.i aaa AAA BBB bbb vin.dSYM *.c.c *.out
	rm -fR vin

test:
	rm -f valgrind.txt
	valgrind ./vin a.txt 2> aaa

