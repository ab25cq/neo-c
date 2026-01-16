
sh install_pkg.sh

export RM="rm -rf"

if uname -a | grep Android
then
    make DESTDIR=$HOME CFLAGS_OPT="" neo-c && make DESTDIR=$HOME install
elif uname -a | grep Darwin
then
    make CFLAGS_OPT=" -g" neo-c -j$(($(sysctl -n hw.logicalcpu) / 2)) && sudo make install
elif test -f /proc/device-tree/model && cat /proc/device-tree/model | grep "Raspberry Pi"
then
    make CFLAGS_OPT=" -g" neo-c -j$(sysctl -n hw.logicalcpu) && sudo make install
else # Linux
    make CFLAGS_OPT=" -g" neo-c -j$(($(nproc) / 2)) && sudo make install
fi
