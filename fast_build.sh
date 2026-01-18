sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="-O2 -D__ANDROID__=1" -j$(($(nproc) /2)) && make DESTDIR=$HOME install
elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
then
    if getconf LONG_BIT | grep 32
    then
        make CFLAGS_OPT="-O2 -D__LINUX__=1 -D__32BIT_CPU__=1" && sudo make install
    else
        make CFLAGS_OPT="-O2 -D__LINUX__=1" && sudo make install
    fi
elif uname -a | grep Darwin
then
    make CFLAGS_OPT="-O2 -D__MAC__=1" -j$(sysctl -n hw.logicalcpu) && sudo make install
else
    make CFLAGS_OPT="-O2 -D__LINUX__=1" -j$(($(nproc) / 2)) && sudo make install
fi
