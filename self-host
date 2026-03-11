sh install_pkg.sh

export RM="rm -rf"

MAKE_OPTS="LOWMEM=1"

if test -x ./ncc
then
    touch *.nc
    
    if uname -a | grep Android
    then
        make $MAKE_OPTS DESTDIR=$HOME ncc
        make $MAKE_OPTS DESTDIR=$HOME install
    elif uname -a | grep Darwin
    then
        make self-host
        sudo make install
    elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
    then
        make self-host
        sudo make install
    else # Linux
        make self-host
        sudo make install
    fi
else 
    touch *.nc
    
    if uname -a | grep Android
    then
        make self-host
        make $MAKE_OPTS DESTDIR=$HOME install
    elif uname -a | grep Darwin
    then
        make self-host
        sudo make install
    elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
    then
        make self-host
        sudo make install
    else # Linux
        make self-host
        sudo make install
    fi
fi

