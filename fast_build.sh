sh install_pkg.sh

export RM="rm -rf"

MAKE_OPTS="LOWMEM=1"

touch *.c

if uname -a | grep Android
then
    make $MAKE_OPTS DESTDIR=$HOME CFLAGS_OPT="-D__ANDROID__=1" && make $MAKE_OPTS DESTDIR=$HOME install
elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
then
    if getconf LONG_BIT | grep 32
    then
        make $MAKE_OPTS CFLAGS_OPT="-D__LINUX__=1 -D__32BIT_CPU__=1" && sudo make $MAKE_OPTS install
    else
        make $MAKE_OPTS CFLAGS_OPT="-D__LINUX__=1" && sudo make $MAKE_OPTS install
    fi
elif uname -a | grep Darwin
then
    make $MAKE_OPTS CFLAGS_OPT="-D__MAC__=1" && sudo make $MAKE_OPTS install
else
    make $MAKE_OPTS CFLAGS_OPT="-D__LINUX__=1" && sudo make $MAKE_OPTS install
fi
