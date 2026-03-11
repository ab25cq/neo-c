sh install_pkg.sh

export RM="rm -rf"

MAKE_OPTS="LOWMEM=1"

sh fast_build.sh "$@"

if test -x ./ncc
then
    touch *.nc
    
    if uname -a | grep Android
    then
        make $MAKE_OPTS DESTDIR=$HOME CFLAGS_OPT="" self-host
        make $MAKE_OPTS DESTDIR=$HOME install
    elif uname -a | grep Darwin
    then
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(($(sysctl -n hw.logicalcpu) / 2))
        sudo make $MAKE_OPTS install
    elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
    then
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(sysctl -n hw.logicalcpu) 
        sudo make $MAKE_OPTS install
    else # Linux
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(($(nproc) / 2))
        sudo make $MAKE_OPTS install
    fi
else 
    touch *.c
    
    if uname -a | grep Android
    then
        make $MAKE_OPTS DESTDIR=$HOME CFLAGS_OPT="" self-host
        make $MAKE_OPTS DESTDIR=$HOME install
    elif uname -a | grep Darwin
    then
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(($(sysctl -n hw.logicalcpu) / 2))
        sudo make $MAKE_OPTS install
    elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
    then
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(sysctl -n hw.logicalcpu) 
        sudo make $MAKE_OPTS install
    else # Linux
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(($(nproc) / 2))
        sudo make $MAKE_OPTS install
    fi
    
    touch *.nc
    
    if uname -a | grep Android
    then
        make $MAKE_OPTS DESTDIR=$HOME CFLAGS_OPT="" self-host
        make $MAKE_OPTS DESTDIR=$HOME install
    elif uname -a | grep Darwin
    then
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(($(sysctl -n hw.logicalcpu) / 2))
        sudo make $MAKE_OPTS install
    elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
    then
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(sysctl -n hw.logicalcpu) 
        sudo make $MAKE_OPTS install
    else # Linux
        make $MAKE_OPTS CFLAGS_OPT=" -g" self-host -j$(($(nproc) / 2))
        sudo make $MAKE_OPTS install
    fi
fi


sh fast_build.sh "$@"
