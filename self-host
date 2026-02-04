sh install_pkg.sh

export RM="rm -rf"

if test -x ./ncc
then
    touch *.nc
    
    if uname -a | grep Android
    then
        make DESTDIR=$HOME CFLAGS_OPT="" self-host
        make DESTDIR=$HOME install
    elif uname -a | grep Darwin
    then
        make CFLAGS_OPT=" -g" self-host -j$(($(sysctl -n hw.logicalcpu) / 2))
        sudo make install
    elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
    then
        make CFLAGS_OPT=" -g" self-host -j$(sysctl -n hw.logicalcpu) 
        sudo make install
    else # Linux
        make CFLAGS_OPT=" -g" self-host -j$(($(nproc) / 2))
        sudo make install
    fi
else 
    touch *.c
    
    if uname -a | grep Android
    then
        make DESTDIR=$HOME CFLAGS_OPT="" self-host
        make DESTDIR=$HOME install
    elif uname -a | grep Darwin
    then
        make CFLAGS_OPT=" -g" self-host -j$(($(sysctl -n hw.logicalcpu) / 2))
        sudo make install
    elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
    then
        make CFLAGS_OPT=" -g" self-host -j$(sysctl -n hw.logicalcpu) 
        sudo make install
    else # Linux
        make CFLAGS_OPT=" -g" self-host -j$(($(nproc) / 2))
        sudo make install
    fi
    
    touch *.nc
    
    if uname -a | grep Android
    then
        make DESTDIR=$HOME CFLAGS_OPT="" self-host
        make DESTDIR=$HOME install
    elif uname -a | grep Darwin
    then
        make CFLAGS_OPT=" -g" self-host -j$(($(sysctl -n hw.logicalcpu) / 2))
        sudo make install
    elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
    then
        make CFLAGS_OPT=" -g" self-host -j$(sysctl -n hw.logicalcpu) 
        sudo make install
    else # Linux
        make CFLAGS_OPT=" -g" self-host -j$(($(nproc) / 2))
        sudo make install
    fi
fi

